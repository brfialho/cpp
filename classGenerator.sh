#!/usr/bin/env bash

set -euo pipefail

flag="0"
if [ "$#" -eq 2 ]; then
    if [ "$2" != "-c" ] && [ "$2" != "-ni" ]; then
        echo "Usage: $0 ClassName [flag]" >&2
        exit 1
    fi
    flag="$2"
elif [ "$#" -ne 1 ]; then
    echo "Usage: $0 ClassName [flag]" >&2
    exit 1
fi

class_name=$1
guard_name=$(printf '%s' "$class_name" | tr '[:lower:]' '[:upper:]')_H

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
	${class_name}& operator=( const ${class_name} &other );
	~${class_name}();

};

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

${class_name}&	${class_name}::operator=(const ${class_name}& other)
{
	std::cout << "${class_name} Assignment Operator has been called\n";
	if (this == &other)
		return *this;

	return *this;
}

${class_name}::~${class_name}()
{
	std::cout << "${class_name} Destructor has been called\n";
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

${class_name}&	${class_name}::operator=(const ${class_name}& other)
{
	if (this == &other)
		return *this;

	return *this;
}

${class_name}::~${class_name}()
{}

EOF
	} > "${class_name}.cpp"
}

write_non_instanciable_source() {
	{
		cat <<EOF
#include "${class_name}.hpp"

${class_name}::${class_name}(){}
${class_name}::${class_name}( const ${class_name} &other ){(void)other;}
${class_name}&	${class_name}::operator=(const ${class_name}& other){(void)other;return *this;}
${class_name}::~${class_name}(){}

EOF
	} > "${class_name}.cpp"
}


write_header
if [ "$flag" = "-c" ]; then
	write_comment_source
elif [ "$flag" = "-ni" ]; then
	write_non_instanciable_source
else
	write_source
fi