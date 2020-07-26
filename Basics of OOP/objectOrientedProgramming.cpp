// Class => user defined type which contain all fundemental types,//function,operators all in one place
// scope resolution  => ::

// function =>

//1. take a number
// 2.increase the number
// 3. show the number
#include <iostream>
#include <string>

using namespace std;

// class nameofTheClass
// {
//     int ourInput; // data members
//     // void displayNumber();

// public:
//     // nameoffTheClass(int a, int b); // whenever object is created constructor is acalled and all the condition are passed to it
//     // int publicNumber;

//     void inputNumber(); // data function
//     void incrementNumber();
//     void displayNumber();
// };

// // nameoffTheClass::nameoffTheClass(int a, int b)
// // {
// //     privateNumber = a;
// //     publicNumber = b;
// // }

// void nameofTheClass ::inputNumber() // 1.return_type_of_fun 2.name_of_class :: 3.fn
// {
//     cout << "Enter The Number: ";
//     cin >> ourInput;
// }
// void nameofTheClass ::incrementNumber()
// {
//     ourInput++; // ourInput = ourinput + 1
// }

// void nameofTheClass ::displayNumber()
// {
//     cout << "Resulting Number:" << ourInput;
// }

// int main()
// {

//     nameofTheClass obj; //object is an instance of class

//     // // cout << "Public Number: " << obj1.publicNumber << endl;
//     // cout << obj1.privateNumber;

//     obj.inputNumber();
//     obj.incrementNumber();
//     obj.displayNumber();

//     return 0;
// }

class className
{
    string name;
    int age;

public:
    className(){};
    // className(int n); // constructor
    // ~className();     // classNameuctor
    void inputDetails(int x);
    void display();
};

// // className ::className(int n)
// // {
// //     data = n;
// //     cout << "Constructed => " << data << endl;
// // }

// // className ::~className()
// // {
// //     cout << "classNameucted => " << data << endl;
// // }

// void className ::inputDetails(int x)

// {
//     cout << "Name : ";
//     cin >> name;
//     cout << "\n";
//     cout << "Age: ";
//     cin >> age;
// }

// void className ::display()
// {
//     cout << name << endl;
// }

int main()
{
    className *objs; //DMA => new and delete to create and delete memoryresp.
    objs = new className[10];

    for (int i = 0; i < 3; i++)
    {
        objs[i].inputDetails(i);
    }

    for (int i = 0; i < 3; i++)
    {
        objs[i].display();
    }
    delete[] objs;
    return 0;
}
