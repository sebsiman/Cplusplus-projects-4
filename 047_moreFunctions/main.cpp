#include <iostream>

using namespace std;

bool testValidInput (const int& minValue, const int& maxValue, int userValue);

int main()
{
    int minGrade = 0,
        maxGrade = 100;
    int minPress = 30,
        maxPress = 35;
    int minTemp = 32,
        maxTemp = 212;
    /*
    0, 100, 85, etc are all int literals (constants)
    passing constant to a function that expects a reference
    will result in a syntax error
    cout << testValidInput(0, 100, 85) << endl;
    cout << testValidInput(30, 35, 29) << endl;
    cout << testValidInput(30, 212, 58) << endl;
    */

    cout << testValidInput(minGrade, maxGrade, 85) << endl;
    cout << testValidInput(minPress, maxPress, 29) << endl;
    cout << testValidInput(minTemp, maxTemp, 58) << endl;

    return 0;
}

bool testValidInput (const int& minValue, const int& maxValue, int userValue)
{
    bool validInput = false;

    if(userValue >= minValue && userValue <= maxValue)
        validInput = true;
    return validInput;
}
