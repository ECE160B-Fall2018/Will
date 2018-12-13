#include <iostream>

using namespace std;

int main()
{
	double dd;
	for (dd = 1.4; dd*dd < 2.0; dd += 0.000001)
	{
		;
	}
	cout << dd;
}
