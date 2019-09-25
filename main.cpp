#include <iostream>
#include "matrixADT.h"

using namespace std;

int main()
{
	int rows1;
	int columns1;

	while (true)
	{
		cout << "Enter the number of rows: ";
		cin >> rows1;
		cin.ignore(100, '\n');

		cout << "Enter the number of columns: ";
		cin >> columns1;
		cin.ignore(100, '\n');
		matrix test(rows1, columns1);
		test.randomize(-5, 10);
		test.display();

		test.transpose();
		test.display();

		cout << "\n\n";
	}
	return 0;
}
