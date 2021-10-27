#include <iostream>
#include <math.h>
using namespace std;
void main()
{
	setlocale(LC_ALL, "ru");
	int const n = 10;
	int B[n];
	float S = 0;
	for (int i = 0; i < n; i++)
	{
		cout << "\nВведите B[" << i << "]=";
		cin >> B[i];


	}

	for (int i = 0; i < n; i++)
	{
		if (B[i] > 0) { S += B[i]; }
			
		

	}
	
	if (S > 5)
	{
		int t = B[0];
		B[0] = B[9];
		B[9] = t;
	}
	cout << "\n Вывод конечного массива\n";
	for (int i = 0; i < n; i++)
	{
		cout << "B[" << i << "]=" << B[i] << endl;

	}


}