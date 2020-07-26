// inheritance => connecting classes
#include <iostream>
#include <string>

using namespace std;

// specifier=> public,private and Protected

class person
{
protected:
    int id;

public:
    person()
    {
        id = 10;
    }
    void getPerson()
    {
        cout << "PERSON PRINTED" << endl;
    }
};

class name : public person //name of our class : access class
{
    string Name;

public:
    name()
    {
        Name = "Hello World\n";
    }

    void getName()
    {
        cout << "NAME PRINTED     " << id << endl;
    }
};

int main()
{
    person p;

    // name n;
    // p.getPerson();
    // n.getName();
    // n.getPerson();
    // p.getName();
}
