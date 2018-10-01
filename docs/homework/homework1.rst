Parallel Computing Homeowrk 1
========================

A prime pair or twin prime is a prime number that has a prime gap of two, in other words, the difference between the two prime numbers are two, for example the twin prime pair (41, 43). You need to write an OpenMP program to find the total number of prime pairs between 2 and 50,000,000. Your grade will be not only determined by the correctness of the total number, but also depends on your program performance. Your program should print the number of prime pairs and the total execution time of your program. Report the speedup of your program using 1, 2, 4, and 8 threads respectively.

Build your code::
	cd homework/hw1
	make
        
Run your sequential version::
        ./prime

Run your OpenMP parallel version::
        ./prime_omp

Run both of them::
	make run


You need to revise the prime.cpp and prime_omp.cpp files respectively to create a sequential program and an OpenMP parallel program to complete the homework.

The following is the grading percentage for evaluating your program.:: 
        Correctness: 60%
        Performance: 40%

Please submit all of your program source codes and a short report for performance observation.

