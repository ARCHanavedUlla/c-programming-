#include <iostream>
using namespace std;

int squareSum(int n)
{
	int sum = 0;
	for (int i = 1; i <= n; i++)
		sum += (2 * i) * (2 * i);
	return sum;
}
int main()
{
	cout << squareSum(8);
	return 0;
}

