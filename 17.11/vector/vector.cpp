#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
int main()
{
    vector<int> num{2, 4, 6, 8, 10};
    cout << "Before: " << endl;
    for (int n : num)
    {
        cout << n << endl;
    }
    num.push_back(13);
    num.emplace_back(100);
    cout << "After One: " << endl;
    for (int n : num)
    {
        cout << n << endl;
    }
    // ofstream out; // поток для записи
    // out.open("C:\\Users\\Олег\\Desktop\\vector\\test.txt");
    // out.close();
    ofstream out; // поток для записи
    out.open("D:\\test.txt");
    for (int n : num)
    {
        out << n << endl;
    }
    out.close();
    return 0;
}