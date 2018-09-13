#include <iostream>
#include "omp.h"

using namespace std;

int main()
{
	cout << "OpenMP test" << endl;
#pragma omp parallel
	{
		cout << "Hello World, I am thread no. " << omp_get_thread_num() << endl;
	}
	return 0;
}
