#include <iostream>
using std::string;
class School
{
public:
    string Name;
    string Address;
    int Estd;
    void introduceYourSchool()
    {
        std::cout << "My school's name is : " << Name << '\n';
        std::cout << "My school's Address is : " << Address << '\n';
        std::cout << "My school was established in : " << Estd << " BS " << '\n';
        std::cout << '\n';
    }
    School(string name, string address, int estd)
    {
        Name = name;
        Address = address;
        Estd = estd;
    }
};
int main()
{
    School school1("St. Xavier's College", "Kathmandu, Nepal", 1980);
    return 0;
}