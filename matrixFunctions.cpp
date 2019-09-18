#include <iostream>
#include "matrixADT.h"

using namespace std;


void matrix::scale(float scalar)
{
	for (int r = 0; r < rows; ++r)
		for (int c = 0; c < columns; ++c)
			grid[r][c] *= scalar;	
}


bool matrix::addition(matrix* A, matrix* B)
{
	int Arow = A -> getRows();
	int Brow = B -> getRows();
	int Acol = A -> getColumns();
	int Bcol = B -> getColumns();

	if (Arow != Brow || Arow != rows)
		return false;

	if (Acol != Bcol || Acol != columns)
		return false;


	for (int r = 0; r < Arow; ++r)
	{
		for (int c = 0; c < Acol; ++c)
		{
			grid[r][c] = A -> getValue(r, c) + B -> getValue(r, c);
		}
	}

	return true;
}


bool matrix::multiplication(matrix* A, matrix* B)
{	
	int Arow = A -> getRows();
	int Brow = B -> getRows();
	int Acol = A -> getColumns();
	int Bcol = B -> getColumns();

	if (rows != Arow)
		return false;
	
	if (columns != Bcol)
		return false;
	
	if (Acol != Brow)
		return false;


	for (int i = 0; i < Arow; ++i)
		for (int k = 0; k < Bcol; ++k)
			for (int j = 0; j < Acol; ++j)
				grid[i][k] += A -> getValue(i, j) * B -> getValue(j, k);

	return true;
}
