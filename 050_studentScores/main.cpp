#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

void randomize(int& randNumber);
void randGradeAssignment(int& randNumber, int& grade);
void studentGradeGenerator(int& randNumber, int& quiz1, int& quiz2, int& quiz3, int& quiz4, int& quiz5,
                           int& hw1, int& hw2, int& hw3,int& hw4, int& hw5, int& midterm, int& finalExam);

int main()
{
    int randNumber = 0;
    int quiz1, quiz2, quiz3, quiz4, quiz5, hw1, hw2,
        hw3, hw4, hw5, midterm, finalExam;

    studentGradeGenerator(randNumber, quiz1, quiz2, quiz3, quiz4, quiz5);
    cout << quiz1 << endl;
    cout << quiz2 << endl;
    cout << quiz3 << endl;
    cout << quiz4 << endl;
    cout << quiz5 << endl;



    return 0;
}

void randomize(int& randNumber)
{
    unsigned seed = time(0);
    srand(seed);
}

void studentGradeGenerator(int& randNumber, int& quiz1, int& quiz2, int& quiz3, int& quiz4, int& quiz5,
                           int& hw1, int& hw2, int& hw3,int& hw4, int& hw5, int& midterm, int& finalExam)
{
    randNumber = 0 + rand() % 100;
    for(int x = 1; x < 13; x++)
    {
        switch(x)
        {
            case 1:
                randGradeAssignment(randNumber, quiz1);
                break;
            case 2:
                randGradeAssignment(randNumber, quiz2);
                break;
            case 3:
                randGradeAssignment(randNumber, quiz3);
                break;
            case 4:
                randGradeAssignment(randNumber, quiz4);
                break;
            case 5:
                randGradeAssignment(randNumber, quiz5);
                break;
            case 6:
                randGradeAssignment(randNumber, hw1);
                break;
            case 7:
                randGradeAssignment(randNumber, hw2);
                break;
            case 8:
                randGradeAssignment(randNumber, hw3);
                break;
            case 9:
                randGradeAssignment(randNumber, hw4);
                break;
            case 10:
                randGradeAssignment(randNumber, hw5);
                break;
            case 11:
                randGradeAssignment(randNumber, midterm);
                break;
            case 12:
                randGradeAssignment(randNumber, finalExam);
                break;
        }
    }
}

void randGradeAssignment(int& randNumber, int& grade)
{
    randNumber = 0 + rand() % 100;
    grade = randNumber;
}
