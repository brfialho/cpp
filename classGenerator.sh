#!/usr/bin/env bash

set -euo pipefail

flag="0"
if [ "$#" -eq 2 ]; then
    if [ "$2" != "-c" ] && [ "$2" != "-ni" ] && [ "$2" != "-t" ]; then
        echo "Usage: $0 ClassName [flag]" >&2
		echo "-c: prints construction/destruction" >&2
		echo "-ni: simplified .cpp for non instanciable classes" >&2
		echo "-t: template class" >&2
        exit 1
    fi
    flag="$2"
elif [ "$#" -ne 1 ]; then
    echo "Usage: $0 ClassName [flag]" >&2
    exit 1
fi

class_name=$1
guard_name=$(printf '%s' "$class_name" | tr '[:lower:]' '[:upper:]')_HPP
template_guard_name=$(printf '%s' "$class_name" | tr '[:lower:]' '[:upper:]')_TPP

write_header() {
	{
		cat <<EOF
#ifndef ${guard_name}
# define ${guard_name}

#include <string>
#include <iostream>

class	${class_name} {

private:


public:
	${class_name}();
	${class_name}( const ${class_name} &other );
	~${class_name}();
	${class_name}& operator=( const ${class_name} &other );

};

#endif
EOF
	} > "${class_name}.hpp"
}

write_template_header() {
	{
		cat <<EOF
#ifndef ${guard_name}
# define ${guard_name}

#include <string>
#include <iostream>

template <typename T>
class	${class_name} {

private:


public:
	${class_name}();
	${class_name}( const ${class_name} &other );
	~${class_name}();
	${class_name}& operator=( const ${class_name} &other );

};
	#include "${class_name}.tpp"

#endif
EOF
	} > "${class_name}.hpp"
}

write_comment_source() {
	{
		cat <<EOF
#include "${class_name}.hpp"

${class_name}::${class_name}()
{
	std::cout << "${class_name} Default Constructor has been called\n";
}

${class_name}::${class_name}( const ${class_name} &other )
{
	std::cout << "${class_name} Copy Constructor has been called\n";
}

${class_name}::~${class_name}()
{
	std::cout << "${class_name} Destructor has been called\n";
}

${class_name}&	${class_name}::operator=(const ${class_name}& other)
{
	std::cout << "${class_name} Assignment Operator has been called\n";
	if (this == &other)
		return *this;

	return *this;
}
EOF
	} > "${class_name}.cpp"
}

write_source() {
	{
		cat <<EOF
#include "${class_name}.hpp"

${class_name}::${class_name}()
{}

${class_name}::${class_name}( const ${class_name} &other )
{}

${class_name}::~${class_name}()
{}

${class_name}&	${class_name}::operator=(const ${class_name}& other)
{
	if (this == &other)
		return *this;

	return *this;
}
EOF
	} > "${class_name}.cpp"
}

write_non_instanciable_source() {
	{
		cat <<EOF
#include "${class_name}.hpp"

${class_name}::${class_name}(){}
${class_name}::${class_name}( const ${class_name} &other ){(void)other;}
${class_name}::~${class_name}(){}
${class_name}&	${class_name}::operator=(const ${class_name}& other){(void)other;return *this;}
EOF
	} > "${class_name}.cpp"
}

write_template_source()	{
	{
		cat <<EOF
#ifndef ${template_guard_name}
# define ${template_guard_name}

template <typename T>
${class_name}<T>::${class_name}( void )
{}

template <typename T>
${class_name}<T>::${class_name}( unsigned int n )
{}

template <typename T>
${class_name}<T>::${class_name}( const ${class_name}<T> &other )
{}

template <typename T>
${class_name}<T>::~${class_name}()
{}

template <typename T>
${class_name}<T>&	${class_name}<T>::operator=(const ${class_name} &other)
{
	if (this == &other)
		return *this;

	return *this;
}
#endif
EOF
	} > "${class_name}.tpp"
}

if [ "$flag" = "-t" ]; then
	write_template_header
else
	write_header
fi
if [ "$flag" = "-c" ]; then
	write_comment_source
elif [ "$flag" = "-ni" ]; then
	write_non_instanciable_source
elif [ "$flag" = "-t" ]; then
	write_template_source
else
	write_source
fi