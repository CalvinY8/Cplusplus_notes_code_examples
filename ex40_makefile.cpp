/*
makefile
https://youtu.be/_bYFu9mBnr4?t=28098

automate the build process for app
minimize compilation necessary

---normal build process---
file1.cpp->file1.o

file2.cpp->file2.o

both .o files link to create a.out


if you make a change to file 1,
and the makefile will only recompile the changed .cpp file
and relink the .o files to a new a.out

with a makefile, you don't need to compile the whole thing, which would be terrible.


Simple example of makefile
https://youtu.be/_bYFu9mBnr4?t=28389


//define what files we need and their dependencies

file1.o:file1.cpp
//if file1.cpp changes, recompile file1.o

    g++ file1.cpp
    //how to compile .cpp into .o file


How to make a makefile?
https://youtu.be/_bYFu9mBnr4?t=28485

*/

