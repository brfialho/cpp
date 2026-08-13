#!/usr/bin/env bash

set -euo pipefail

if [ "$#" -ne 1 ]; then
	echo "Usage: $0 ClassName" >&2
	exit 1
fi

class_name=$1
guard_name=$(printf '%s' "$class_name" | tr '[:lower:]' '[:upper:]')_H

# write_padding() {
# 	for _ in $(seq 1 13); do
# 		printf '\n'
# 	done
# }

write_header() {
	{
		# write_padding
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

write_source() {
	{
		# write_padding
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

write_header
write_source
