//polymorphism => many forms    *atleast one virtual fn
// virtual fn => can be overriden in derived class

#include <iostream>

using namespace std;

class Base
{
public:
    virtual void print() { cout << "BASE CLASS" << endl; }
};

class Derived : public Base
{
public:
    void print()
    {
        cout << "DERIVED CLASS" << endl;
    }
};
int main()
{
    Base *p;
    p = new Derived();
    p->print();

    return 0;
}