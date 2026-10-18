#include <iostream>
using std::string;
class Employee
{
public:
    string Name;
    string Company;
    int Age;
};
void IntroduceYourself(Employee emp)
{
    std::cout << "My name is " << emp.Name << std::endl;
    std::cout << "I work at " << emp.Company << std::endl;
    std::cout << "I am " << emp.Age << " years old" << std::endl;
}
int main()
{
    Employee emp1;
    emp1.Name = "John";
    emp1.Company = "Google";
    emp1.Age = 30;
    IntroduceYourself(emp1);

    return 0;
}