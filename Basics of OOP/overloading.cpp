//        Overloading => fn/operator  +  print print

//fn overloading =>  fn have same, changing the arguments type or nos.

#include <iostream>
using namespace std;

class overloading
{
    int m;

public:
    overloading() {}
    overloading(int i)
    {
        m = i;
    }

    overloading operator+(overloading &x)
    {
        overloading temp;
        temp.m = this->m + x.m;

        return temp;
    }

    void display()
    {
        cout << m;
    }

    friend ostream &operator<<(ostream &os, overloading &obj);
};

ostream &operator<<(ostream &os, overloading &obj)
{
    os << obj.m;
    return os;
}

int main()
{
    overloading obj1(1), obj2(2), obj3;

    obj3 = obj1 + obj2;
    // obj3.display();
    cout << obj3;

    return 0;
}