#include <iostream>
#include "matrixADT.h"
#include <cstdlib>

using namespace std;

matrix::matrix(int rows, int columns)
{
	this -> rows = rows;
	this -> columns = columns;
	grid = new float*[rows];
	for (int r = 0; r < rows; ++r)
		grid[r] = new float[columns];
	
	for (int r = 0; r < rows; ++r)
		for (int c = 0; c < columns; ++c)
			grid[r][c] = 0;
}

matrix::~matrix()
{
	for (int r = 0; r < rows; ++r)
		delete[] grid[r];
	delete[] grid;
}


bool matrix::setValue(int row, int column, float value)
{
	if (rows < row || columns < column)
		return false;
	
	grid[row][column] = value;
	return true;
}



float matrix::getValue(int row, int column)
{
	if (rows < row || columns < column)
		return false;
	
	return grid[row][column];
}



int matrix::getRows()
{
	return rows;
}


int matrix::getColumns()
{
	return columns;
}

void matrix::display()
{
	cout << "Rows: " << rows << "\n" << "Columns: " << columns << endl;
	
	for (int r = 0; r < rows; ++r)
	{
		cout << "| ";
		for (int c = 0; c < columns; ++c)
		{
			cout << grid[r][c] <<  " ";
		}
		cout << "|" << endl;
	}
}


void matrix::randomize()
{
	for (int r = 0; r < rows; ++r)
		for (int c = 0; c < columns; ++c)
		{
			grid[r][c] = rand() % 100;
		}
}


void matrix::randomize(int lowNum, int highNum)
{
	for (int r = 0; r < rows; ++r)
		for (int c = 0; c < columns; ++c)
		{
			grid[r][c] = ((float) rand() / (float) RAND_MAX) * (highNum - lowNum) + lowNum;
			cout << grid[r][c] << endl;
		}
}
