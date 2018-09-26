/*

This program will numerically compute the integral of

                  4/(1+x*x) 
				  
from 0 to 1.  The value of this integral is pi -- which 
is great since it gives us an easy way to check the answer.

The is the original sequential program.  It uses the timer
from the OpenMP runtime library

History: Written by Tim Mattson, 11/99.

*/
#include <iostream>
#include <ctime>
using namespace std;

static long num_steps = 1000000000;
double step;
int main ()
{
	  int i;
	  double x, pi, sum = 0.0;

	  step = 1.0/(double) num_steps;

          clock_t start_time = clock();	 

	  for (i=1;i<= num_steps; i++){
		  x = (i-0.5)*step;
		  sum = sum + 4.0/(1.0+x*x);
	  }

	  pi = step * sum;
	  double run_time =(double) (clock() - start_time) / CLOCKS_PER_SEC;;
	  cout << "\n pi with " << num_steps << " steps is " << pi << " in " << run_time << " seconds\n ";
	  return 0;
}	  





