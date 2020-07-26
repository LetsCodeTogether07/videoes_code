#include <iostream>
using namespace std;

//friend fn/class => can access  private* member

class inputCurrency
{
    int rupee;

public:
    inputCurrency(int x)
    {
        rupee = x;
    }

    friend class convertToUSD;
};

class convertToUSD
{
public:
    void show(inputCurrency &temp)
    {
        cout << "USD: " << temp.rupee / 74.0;
    }
};
int main()
{
    inputCurrency obj(74);
    convertToUSD obj2;
    obj2.show(obj);
}
