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
{}

${class_name}::${class_name}( const ${class_name} &other )
{}

${class_name}&	${class_name}::operator=(const ${class_name}& other)
{

	return *this;
}

${class_name}::~${class_name}()
{}

EOF
	} > "${class_name}.cpp"
}

write_header
write_source
