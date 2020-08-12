// sorting =>  1 2 3 4 5 => 5 4 3 2 1;

//     ASCII code
// A: 65
// Z: 90
// a: 97
// z: 122

#include <iostream>
using namespace std;

int main()
{
    char arr[] = {'B', 'C', 'D', 'a', 'E', 'H', 'G', 'F'};

    for (int j = 0; j < 8; j++)
    {
        for (int i = 0; i < 7; i++)
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
    }

    for (int i = 0; i < 8; i++)
        cout << arr[i] << endl;
}
