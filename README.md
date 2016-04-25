# Python-vs-CPP

Run time performance testing of floating point division of 1 million values.

On an Intel 4670K quad-core:  
Python took 2.38377952988 secs.  
C++ took 4.406 secs.  
I think the difference is because the way I/O is implemented in C++ using the std::cout object.  
********************* Any clarifications are most welcome. ******************************
