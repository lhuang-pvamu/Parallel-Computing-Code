Parallel Computing Lab 1
------------------------

The lab 1 is to practice the first parallel construct in OpenMP that creates a parallel region in a C++ code. It is a parallel version of Hello World.::

    cd labs/lab1
    make
    make run

You will observe that the parallel version hello_omp.cpp prints Hello World with random order. It is because a parallel code runs with multiple threads with an arbitrary execution order. 