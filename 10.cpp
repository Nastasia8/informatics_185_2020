#include <iostream>
#include <string>
using namespace std;

class Human
{
protected:
	string imya;
	int vozrast;
public:
	Human(string imya, int vozrast)
	{
		this->imya = imya;
		this->vozrast = vozrast;
	}
	void show()
	{
		cout << "imya " << imya << endl;
		cout << "vozrast " << vozrast << endl;
	}
};
class Uchitel : public Human
{
	int colichestvoClassov;
public:
	Uchitel(string imya, int vozrast, int colichestvoClassov) : Human(imya, vozrast)
	{
		this->colichestvoClassov = colichestvoClassov;
	}
	void colichestvoClassov()
	{
		cout << "Uchitel" << endl;
		cout << "colichestvoClassov = " << colichestvoClassov << endl;
	}
	class Uchenik : public Human
	{
		int gruppa;
	public:
		Uchenik(string imya, int vozrast, int gruppa) : Human(imya, vozrast)
		{
			this->gruppa = gruppa;
		}
		void gruppak()
		{
			cout << "Uchenik" << endl;
			cout << "gruppa = " << gruppa << endl;
		}
	};

	int main()
	{
		Uchitel Masha("Masha", 18, 17);
		Masha.show();
		Masha.colichestvoClassov();
		cout << endl;
		Uchenik Android("Android", 18, 185);
		Android.show();
		Android.gruppak();

		return 0;