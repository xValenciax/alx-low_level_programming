#!/bin/bash
gcc -fPIE -c *.c && gcc -shared -o liball.so *.o

