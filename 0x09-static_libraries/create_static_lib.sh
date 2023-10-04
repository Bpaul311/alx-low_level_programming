#!/bin/bash

# Compile each .c file into a corresponding .o file
for file in *.c; do
    gcc -c "$file" -o "${file%.c}.o"
done

# Create a static library from all the .o files
ar rcs liball.a *.o
