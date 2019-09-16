#include <iostream>
#include "matrixADT.h"

using namespace std;

int main()
{
	int rows;
	int columns;
	float scalar;

	while (true)
	{
		cout << "Enter the number of rows: ";
		cin >> rows;
		cin.ignore(100, '\n');

		cout << "Enter the number of columns: ";
		cin >> columns;
		cin.ignore(100, '\n');

		matrix test(rows, columns);
		test.display();

		matrix test2(rows, columns);
		test2.display();

		matrix test3(rows,columns);
		test3.display();

		test3.addition(&test, &test2);
		test3.display();
		//test.display();
		cout << "\n\n";
	}
	return 0;
}
