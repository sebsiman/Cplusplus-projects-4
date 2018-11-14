#include <iostream>

using namespace std;

const int MAX_ARR_SIZE = 7;

int main()
{
    // list initialization of an array
    string days[MAX_ARR_SIZE]={"Monday",
                               "Tuesday", "Wednesday",
                               "Thursday", "Friday",
                               "Saturday", "Sunday"};

    // display the array contents
    for (int i=0; i<MAX_ARR_SIZE; i++)
    {
        cout << days[i] << endl;
    }


    // list initialize an int array
    int quizzes[MAX_ARR_SIZE] = {100, 88, 99, 91, 78};

    // display the array contents
    for (int i=0; i<MAX_ARR_SIZE; i++)
    {
        cout << quizzes[i] << endl;
    }

    return 0;
}
