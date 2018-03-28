#include <iostream>
using namespace std;

int multiply(int x, int y)
{
	return x * y;
}

int sum(int x, int y)
{
	return x + y;
}

int subtract(int x, int y)
{
	return x - y;
}

int negate(int y)
{
	return 0 - y;
}

int main()
{
	cout << "Hello World " << multiply(4, 5) << endl;
	return 0;
}
