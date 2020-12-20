#include <iostream>
#include <cstdlib>
using namespace std;

class Massive
{
private:
	int** arr;
	int row;
	int col;
public:
	void SetRow()
	{
		cout << "row:"; cin >> row;
	}

	void SetCol()
	{
		cout << "Col: "; cin >> col;
	}
	void FillArray()
	{
		arr = new int* [row]; 
		for (int i = 0; i < row; i++)
		{
			arr[i] = new int[col];
		}

		for (int i = 0; i < row; i++) 
		{
			for (int j = 0; j < col; j++)
			{
				arr[i][j] = rand() % 101 - 50;
			}
		}
	}
	
		void ShowArray()
		{
			
			for (int i = 0; i < row; i++) 
			{
				for (int j = 0; j < col; j++)
				{
					cout << arr[i][j] << " ";
				}
				cout << endl;
			}
		}


	void ChangeMassive() 
	{
		int buff = 0;
		for (int i = 0; i < row; i++)
		{
			for (int j = 0; j < col; j++)
			{
				arr[i][j] = 0;
			}
		}
	}

	~Massive(){}
};

int main()
{
	Massive Massive1;
	Massive1.SetRow();
	Massive1.SetCol();
	Massive1.FillArray();
	Massive1.ShowArray();
	Massive1.ChangeMassive();
	cout << "Change Massive1:" << endl;
	Massive1.ShowArray();

	Massive Massive2;
	Massive2.SetRow();
	Massive2.SetCol();
	Massive2.FillArray();
	Massive2.ShowArray();
	Massive2.ChangeMassive();
	cout << "Change Massive2: " << endl;
	Massive2.ShowArray();
	
	return 0;
}