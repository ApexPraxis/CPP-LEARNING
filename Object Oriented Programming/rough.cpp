#include <iostream>
using std::string;
class Employee
{
public:
    string Name;
    string Company;
    int Age;
    void IntroduceYourself()
    {
        std::cout << "My name is " << Name << std::endl;
        std::cout << "I work at " << Company << std::endl;
        std::cout << "I am " << Age << " years old" << std::endl;
    }
};
int main()
{
    Employee emp1;
    emp1.Name = "John";
    emp1.Company = "Google";
    emp1.Age = 30;
    emp1.IntroduceYourself();

    return 0;
}