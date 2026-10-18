#include<iostream>
using std::string;
class Employee{
    public:
 string Name;
 string Company;
 int Age;
};
int main()
{
 Employee emp1;
 emp1.Name = "John";
 emp1.Company = "Google";
    emp1.Age = 30;



    return 0;
}