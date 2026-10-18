#include <iostream>
using std::string;
class School
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
    string getName(){
        return Name;
    }
    void setAddress(string address)
    {
        Address = address;
    }
    string getAddress(){
        return Address;
    }
    void setEstablishedYear(int estd)
    {
        Estd = estd;
    }
    int getEstablishedYear(){
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
};
int main()
{
    School school1("Sukuna Secondary School", "Sundarharaincha-10, Morang", 2029);
    school1.introduceYourSchool();
    School school2("Shree Indrapur English Boarding School", "Sundarharaincha-12, Morang", 2064);
    school2.introduceYourSchool();

     school1.setEstablishedYear(2069);
     std::cout << "Sukuna secondary school was established on " << school1.getEstablishedYear() << std::endl;
    return 0;
}