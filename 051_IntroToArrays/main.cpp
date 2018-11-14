#include <iostream>

using namespace std;

const int MAX_ARR_SIZE = 5;
int main()
{
    int quiz1,
        quiz2,
        quiz3,
        quiz4,
        quiz5;


    // declare an array of integers and give it size
    int quizzes[MAX_ARR_SIZE];

    // populate the array
    // 1. "hard code" values
    /*
    quizzes[0] = 100;
    quizzes[1] = 88;
    quizzes[2] = 91;
    quizzes[3] = 97;
    quizzes[4] = 82;
    */

    // 2. Interactive way to populate an array
    for (int i=0; i< MAX_ARR_SIZE; i++)
    {
        cout << "Score #" << i+1 << ": ";
        cin >> quizzes[i];
    }



    // display
    for (int i=0; i< MAX_ARR_SIZE; i++)
    {
        cout << quizzes[i] << endl;
    }

    return 0;
}
