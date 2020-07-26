// EXCEPTION HANDLING  => try catch throw

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string i;
    cin >> i;

    try
    {
        if (i != "yes")
            throw i;
    }

    catch (...)
    {
        cout << "INVALID NO.";
    }
}
