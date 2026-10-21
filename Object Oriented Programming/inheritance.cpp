#include <iostream>
using std::string;

class AbstractEmployee
{
    virtual void AskForPromotion() = 0;
};

class School : AbstractEmployee
{
private:
    string Name;
    string Address;
    int Estd;

public:
    void setName(string name)
    {
        Name = name;
    }
    string getName()
    {
        return Name;
    }
    void setAddress(string address)
    {
        Address = address;
    }
    string getAddress()
    {
        return Address;
    }
    void setEstablishedYear(int estd)
    {
        Estd = estd;
    }
    int getEstablishedYear()
    {
        return Estd;
    }
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
    void AskForPromotion()
    {
        if (Estd > 2050)
            std::cout << Name << " got promoted!" << std::endl;
        else
            std::cout << Name << ", no promotion for you!" << std::endl;
    }
};
int main()
{
    School school1("Sukuna Secondary School", "Sundarharaincha-10, Morang", 2029);
    School school2("Shree Indrapur English Boarding School", "Sundarharaincha-12, Morang", 2064);
    school1.AskForPromotion();
    school2.AskForPromotion();

    return 0;
}