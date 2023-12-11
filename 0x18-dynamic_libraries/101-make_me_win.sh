#!/bin/bash
echo -e '#include <stdlib.h>\n\nint rand(void) { return 1; }' > myrand.c
gcc -shared -o myrand.so myrand.c
export LD_PRELOAD=$PWD/myrand.so
