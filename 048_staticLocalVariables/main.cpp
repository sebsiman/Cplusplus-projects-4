#include <iostream>

using namespace std;

void displaySum(int a);
void displayStaticSum();

int main()
{
    /*
    int a = 1;
    displaySum(a);
    */
    displayStaticSum();
    displayStaticSum();
    displayStaticSum();
    displayStaticSum();
    displayStaticSum();
    displayStaticSum();
    displayStaticSum();
    displayStaticSum();
    displayStaticSum();
    displayStaticSum();
    displayStaticSum();
    displayStaticSum();
    displayStaticSum();
    displayStaticSum();
    displayStaticSum();

    return 0;
}

void displaySum(int a)
{
    int sum = 0;
    sum = sum + a;

    cout << "This is sum: " << sum << endl;
}

void displayStaticSum()
{
    static int sum = 0;
    sum = sum + 10;
    cout << "This is sum: " << sum << endl;
}
