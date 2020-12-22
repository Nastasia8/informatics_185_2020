#include <iostream>

using namespace std;

class Massive {
private:
	int** arr;
	int col;
	int row;
public:
	Massive()
	{
		col = 0;
		row = 0;
	}
	~Massive()
	{
		delete arr;
	}
public:
	void setRow(int Row)
	{
		row = Row;
	}
	void setCol(int Col)
	{
		col = Col;
	}
	void Show()
	{
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
				cout << arr[i][j] << " ";
			cout << endl;
		}
	}

	void createMassive()
	{
		arr = new int* [row];
		for (int i = 0; i < row; i++)
			arr[i] = new int[col];
		for (int i = 0; i < col; i++)
			for (int j = 0; j < col; j++)
				arr[i][j] = pow(-1, j % 2) * (rand() % 1000);
		Show();
	}

	void changeMassive()
	{
		for (int i = 0; i < col; i++)
		{
			int Min = 10000000000000000;
			for (int j = 0; j < row; j++)
			{
				if (arr[j][i] < Min)
					Min = arr[j][i];
			}
			for (int j = 0; j < row; j++)
			{
				if (arr[i][j] == Min)
					arr[i][j] = 0;
			}
		}
		Show();
	}
private:
};