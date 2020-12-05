#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
int main()
{
    
vector<int> numbers = { 1, 2, 3, 4, 5 };
    numbers.push_back(6);
    numbers.push_back(7);
    numbers.push_back(8);
    for(int n : numbers)
        cout << n << "\t";  
    cout << endl;
    int x;
        x = numbers.size();
    ofstream out;          // поток для записи
    out.open("C:\\new.txt"); // окрываем файл для записи
    if (out.is_open())
    {
         for(int n : numbers)
        out <<n << "\t";
        out<<endl<<"size = "<< x;
    }
    cout << endl;
numbers.clear();
    return 0;
}