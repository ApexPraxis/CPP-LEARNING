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

class Boarding : public School
{
public:
    string BoardingType;
    Boarding(string name, string address, int estd, string Type)
        : School(name, address, estd)
    {
        BoardingType = Type;
    }
    void FixBug()
    {
        std::cout << getName() << " teaches as a " << BoardingType << " School" << std::endl;
    }
};

class Teacher:public School {
    public:
   string Subject;
   void PrepareLesson(){
    std::cout<< getName() << " is preparing " << Subject << " lesson" << std::endl;
   }
   Teacher(string name, string address, int estd, string subject)
   :School(name, address, estd)
   {
    Subject = subject;


   }
};
int main()
{
    Boarding b = Boarding("Subijimur", "Biratchowk", 2054, "English Boarding");
    b.FixBug();
    b.FixBug();
    b.FixBug();
    Teacher t = Teacher("Jack", "Biratchowk", 35, "Math");
    t.PrepareLesson();
    return 0;
}