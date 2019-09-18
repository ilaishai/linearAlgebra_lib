#include <iostream>
#include "matrixADT.h"

using namespace std;

int main()
{
	int rows1;
	int columns1;
	int rows2;
	int columns2;
	float scalar;

	while (true)
	{
		cout << "Enter the number of rows: ";
		cin >> rows1;
		cin.ignore(100, '\n');

		cout << "Enter the number of columns: ";
		cin >> columns1;
		cin.ignore(100, '\n');
		matrix test(rows1, columns1);
		test.randomize();
		test.display();

		cout << "Enter the number of rows: ";
		cin >> rows2;
		cin.ignore(100, '\n');

		cout << "Enter the number of columns: ";
		cin >> columns2;
		cin.ignore(100, '\n');
		matrix test2(rows2, columns2);
		test2.randomize();
		test2.display();

		matrix test3(rows1,columns2);

		test3.multiplication(&test, &test2);
		test3.display();

		//test.display();
		cout << "\n\n";
	}
	return 0;
}
