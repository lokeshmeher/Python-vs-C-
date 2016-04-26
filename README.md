# Python-vs-CPP

A very basic run time performance testing of C++ vs Python codes.
Carries out 1 million floating point divisions.

On an Intel 4670K quad-core:  
Python took 2.38377952988 secs. (for both compilation, i.e., into byte code by the interpreter and then execution)  
C++ took 4.406 secs. (for just execution)  
I think the difference is because the way I/O is implemented in C++ using the std::cout object.  
**** Any clarifications are most welcome. ****
