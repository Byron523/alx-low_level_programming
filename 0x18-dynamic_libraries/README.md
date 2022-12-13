##This folder contains Tasks on Static And Dynamic Libraries

#GCC

-> is the compiler used to create the libraries

#GCC *.c -c -fpic

-> .c is the source file to be prepared for dynmaic


#GCC *0 -shared -o liball.so


#Export LD_LIBRARY_PATH=$PWD:$LD_LIBRARY_PATH

-> LD_LIBRARY_PATH - is an environmental variable
