#include <iostream>

using namespace std;

int main()
{
    // list initialization of an array
    string days[]={"Monday","Tuesday", "Wednesday", "Thursday", "Friday","Saturday", "Sunday"};

    // display the array contents
    for (int i=0; i<8; i++)
    {
        cout << days[i] << endl;
    }
    return 0;
}
