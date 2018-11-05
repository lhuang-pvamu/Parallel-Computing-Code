#include <iostream>
#include <omp.h>

using namespace std;

int fib(int num)
{
	int x,y;
	if (num<2) return num;
	x = fib(num-1);
	y = fib(num-2);
	return x+y;
}


int main()
{
	int N=30;
	int f = fib(N);
	cout << "Fibonacci number " << N << " is " << f << endl;
	return 0;
}

