
#include <iostream>
#include <string>

using std::string;

class AbstractEmployee
{
public:
    virtual void AskForPromotion() = 0;
    virtual ~AbstractEmployee() = default;
};

class School : public AbstractEmployee
{
protected:
    string Name;

private:
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
        std::cout << "My school's name is: " << Name << '\n';
        std::cout << "My school's address is: " << Address << '\n';
        std::cout << "My school was established in: "
                  << Estd << " BS\n\n";
    }

    School(string name, string address, int estd)
        : Name(name), Address(address), Estd(estd)
    {
    }

    void AskForPromotion() override
    {
        if (Estd > 2050)
            std::cout << Name << " got promoted!\n";
        else
            std::cout << Name << ", no promotion for you!\n";
    }

    void Work()
    {
        std::cout << Name << " is working hard!\n";
    }
};

class Boarding : public School
{
public:
    string BoardingType;

    Boarding(string name, string address, int estd, string type)
        : School(name, address, estd),
          BoardingType(type)
    {
    }

    void FixBug()
    {
        std::cout << getName() << " teaches as a "
                  << BoardingType << " school\n";
    }
};

class Teacher : public School
{
public:
    string Subject;

    Teacher(string name, string address, int estd, string subject)
        : School(name, address, estd),
          Subject(subject)
    {
    }

    void PrepareLesson()
    {
        std::cout << getName() << " is preparing "
                  << Subject << " lesson\n";
    }
};

int main()
{
    Boarding b("Subijimur", "Biratchowk", 2054, "English Boarding");
    Teacher t("Jack", "Biratchowk", 35, "Math");

    b.Work();
    t.Work();

    b.AskForPromotion();
    t.AskForPromotion();

    return 0;
}
