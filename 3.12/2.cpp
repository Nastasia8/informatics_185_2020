#include <iostream>
#include <fstream>

using namespace std;

class Employee
{
private:
    string name,second_name,address,post,number;
    int experience;
    float work_hours,cost_for_hour;
    float salary,aword;
    int calculate_salary () { //Метод определяющий зарплату сотрудника.

    salary=work_hours*cost_for_hour;

    return salary;
}


void calculate_aword () { //Метод рассчитывающий премию в зависимости от стажа работы
    aword=0;
    if (experience > 0)
    {
        if (experience<3 )
    {
       aword=salary*0.03;
    }
    else if (experience<10)
    {
        aword=salary*0.07;
    }
    else if (experience>=10)
    {
        aword=salary*0.13;
    }
    }
    
    
    
}

public:
    Employee (string name,string second_name,string address,string post,string number, int experience,int work_hours,int cost_for_hour){
        
    this->name=name;
    this->second_name=second_name;
    this->address=address;
    this->post=post;
    this->number=number;
    this->experience=experience;
    this->work_hours=work_hours;
    this->cost_for_hour=cost_for_hour;
    
    }

void Show (){ //Метод, отображающий всю информацию о сотруднике фирмы.
    calculate_salary();
    calculate_aword();
    cout<< "Employee:"<< endl;
    cout<< "Name: " << name <<endl<< "Second Name: " << second_name << endl;
    cout << "Post: " << post<< endl;
    cout << "Address: " << address <<endl<< "Phone number: " << number << endl;
    cout << "Expirience: " << experience << " years "<<endl ;
    cout << "Work hours this month: "<< work_hours <<endl<< "Cost for hour: " << cost_for_hour<< endl;
    cout << "Salary for this month: " << salary <<endl;
    cout << "Award for this month: " << aword<< endl;
}


void _ofstream (){ //Метод, позволяющий записать информацию в файл
    ofstream  fout;
    fout.open ("Employee.txt");
    fout<< "Employee:"<< endl;
    fout<< "Name: " << name <<endl<< "Second Name: " << second_name << endl;
    fout << "Post: " << post<< endl;
    fout << "Address: " << address <<endl<< "Phone number: " << number << endl;
    fout << "Expirience: " << experience << " years "<<endl ;
    fout << "Work hours this month: "<< work_hours <<endl<< "Cost for hour: " << cost_for_hour<< endl;
    fout << "Salary for this month: " << salary <<endl;
    fout << "Award for this month: " << aword<< endl;
    fout.close();
}


};








int main () {
    
   
    Employee vasya ("Vasya","Pupkin","Tashkentskaya,99","Manager","+89999999999",0,176,500);
    vasya.Show();
    vasya._ofstream();
    return 0;
}