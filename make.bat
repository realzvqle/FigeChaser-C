@echo off


windres src/resources/res.rc -O coff -o src/resources/res.o

gcc -o figechaser.exe src/resources/*.o src/*.c lib/libraylibdll.a lib/libraylib.a -lopengl32 -lgdi32 -lwinmm -mwindows
start figechaser.exe