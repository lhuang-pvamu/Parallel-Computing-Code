Parallel Computing Lab 2
========================

The lab 2 is to practice how to write a SPMD (Single Instruction Multiple Data) parallel program in OpenMP. The lab computes the sum of a billion numbers.:: 

	cd labs/lab2
	make
	make run

You need to revise the loop_omp.cpp file by adding OpenMP parallel region inside. 

In this lab, the total number of loop iterations is max=1,000,000,000. You need to split the work and distribute them to all available threads as fair as possible. Think about the workload is 1 billion and the total number of threads, each thread should perform ::

	long length =  max / (the number of threads); 

OpenMP provides the runtime functions to tell you how many threads you have, and assign a unique thread number to each thread. ::

     int threads = omp_get_num_threads();
     int myID = omp_get_thread_num();


Based on the number of threads and the each thread ID, you can compute the range of loop each thread needs to perform::

     long start = myID * length;
     long end = (myID+1) * length;

You need to take care of the non-divisible case, in which the last thread will do more or less work depending on the division of loop iterations and the number of threads. Now each thread will do a partial loop from start to end::

     for (long i=start; i<end; i++)
         ....


At the end, you need to summarize all threads' sum to get the final result. Keep in mind that each thread has its own partial sum at the end. You need to consider how to store them separately in memory. It may be a race condition if you summarize them in parallel without a protection. 





