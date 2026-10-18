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
        std::cout << std::endl;
    }
    Employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
};
int main()
{
    Employee emp1 = Employee("John", "Google", 30);
    emp1.IntroduceYourself();

    Employee emp2 = Employee("Jane", "Amazon", 32);
    emp2.IntroduceYourself();
    return 0;
}