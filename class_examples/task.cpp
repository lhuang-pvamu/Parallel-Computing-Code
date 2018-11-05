#include <iostream>
#include <omp.h>

using namespace std;

int main()
{
#pragma omp parallel
	{
#pragma omp single
		{
			cout << "I am thread " << omp_get_thread_num() << endl;
			for(int i=0; i<10; i++)
#pragma omp task firstprivate(i)
				cout << "Thread # "<< omp_get_thread_num() << " i= " << i << endl;
		}
	}
}


