@echo off


windres src/resources/res.rc -O coff -o src/resources/res.o

gcc -o figechaser.exe src/resources/*.o src/*.c -lraylib -lopengl32 -lgdi32 -lwinmm -mwindows
start figechaser.exe