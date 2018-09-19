#include <iostream>

using namespace std;

int main()
{
	long max=1000000000;
	long result=0;
	for(long i=0; i<max; i++)
		result += i;
	cout << result << endl;
	return 0;
}
