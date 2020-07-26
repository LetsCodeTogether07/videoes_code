// fn overloading => whatif some fns have same name

#include <iostream>
using namespace std;
class functionOverloading
{

public:
    void display()
    {
        cout << "Hello World";
    }
    void display(int i)
    {
        cout << "Lets Code Together";
    }
};
int main()
{
    functionOverloading obj;
    obj.display();
    cout << endl;
    obj.display(5);

    return 0;
}