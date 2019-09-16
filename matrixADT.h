using namespace std;

class matrix
{
	public:
		matrix(int rows, int columns);
		~matrix();
		void display();
		void scale(float scalar);
		bool setValue(int row, int column, float value);
		float getValue(int row, int column);
		int getRows();
		int getColumns();
		bool addition(matrix* A, matrix* B);
	private:
		int rows = 0;
		int columns = 0;
		float** grid;
};
