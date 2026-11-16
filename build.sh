TARGET="ksh"

CC="${CC:-cc}"
DEBUG="${DEBUG:-0}"

set -- -Iinclude -std=c23

if [ "$DEBUG" -eq 0 ]; then
	set -- "$@" -O2
elif  [ "$DEBUG" -eq 1 ]; then
	set -- "$@" -g -O0
else
	printf 'build.sh: invalid DEBUG range\n'
	exit 1
fi

"$CC" "$@" src/*.c -o "$TARGET"
