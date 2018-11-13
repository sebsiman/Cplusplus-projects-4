#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    unsigned seed =  time(0);
    srand(seed);

    int bDay;
    int bMonth;
    int numOfPeople;
    const int MAX_MONTH = 12;
    const int MIN_MONTH = 1;
    const int MIN_DAY = 1;
    const int MAX_DAY1 = 31;
    const int MAX_DAY2 = 30;
    const int MAX_DAY3 = 28;
    string zodiacSign;
    char userChoice;

    do
    {
        int capricornCounter = 0;
        int aquariusCounter = 0;
        int piscesCounter = 0;
        int ariesCounter = 0;
        int taurusCounter = 0;
        int geminiCounter = 0;
        int cancerCounter = 0;
        int leoCounter = 0;
        int virgoCounter = 0;
        int libraCounter = 0;
        int scorpioCounter = 0;
        int sagittariusCounter = 0;

        cout << "Welcome to the COP 1334 Zodiac Sign App!" << endl;
        cout << "How many people?" << endl;
        cin >> numOfPeople;

        while(cin.fail())
        {
            cout << "Please enter a number value." << endl;
            cin.clear();
            cin.sync();
            cin >> numOfPeople;
        }
        while(numOfPeople < 1)
        {
            cout << "Please enter a number greater than Zero." << endl;
            cin >> numOfPeople;
        }

        cout << "\nBorn on\t\t Horoscope Sign" << endl;
        cout << "-------------------------------" << endl;

        for(int people = 1; people <= numOfPeople; people++)
        {
            bMonth = rand()%(MAX_MONTH-MIN_MONTH + 1) + MIN_MONTH;
            switch(bMonth)
            {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                bDay = rand()%(MAX_DAY1 - MIN_DAY + 1) + MIN_DAY;
                break;
            case 2:
                bDay = rand()%(MAX_DAY3 - MIN_DAY + 1) + MIN_DAY;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                bDay = rand()%(MAX_DAY2 - MIN_DAY + 1) + MIN_DAY;
                break;
            }
            switch(bMonth)
            {
            case 1: // January
                if(bDay < 20)
                {
                    zodiacSign = "Capricorn";
                    capricornCounter++;
                }
                else if(bDay > 19)
                {
                    zodiacSign = "Aquarius";
                    aquariusCounter++;
                }
                break;
            case 2: // February
                if(bDay < 19)
                {
                    zodiacSign = "Aquarius";
                    aquariusCounter++;
                }
                else if(bDay > 18)
                {
                    zodiacSign = "Pisces";
                    piscesCounter++;
                }
                break;
            case 3: // March
                if(bDay < 21)
                {
                    zodiacSign = "Pisces";
                    piscesCounter++;
                }
                else if(bDay > 20)
                {
                    zodiacSign = "Aries";
                    ariesCounter++;
                }
                break;
            case 4: // April
                if(bDay < 20)
                {
                    zodiacSign = "Aries";
                    ariesCounter++;
                }
                else if(bDay > 19)
                {
                    zodiacSign = "Taurus";
                    taurusCounter++;
                }
                break;
            case 5: // May
                if(bDay < 21)
                {
                    zodiacSign = "Taurus";
                    taurusCounter++;
                }
                else if(bDay > 20)
                {
                    zodiacSign = "Gemini";
                    geminiCounter++;
                }
                break;
            case 6: // June
                if(bDay < 22)
                {
                    zodiacSign = "Gemini";
                    geminiCounter++;
                }
                else if(bDay > 21)
                {
                    zodiacSign = "Cancer";
                    cancerCounter++;
                }
                break;
            case 7: // July
                if(bDay < 23)
                {
                    zodiacSign = "Cancer";
                    cancerCounter++;
                }
                else if(bDay > 22)
                {
                    zodiacSign = "Leo";
                    leoCounter++;
                }
                break;
            case 8: // August
                if(bDay < 23)
                {
                    zodiacSign = "Leo";
                    leoCounter++;
                }
                else if(bDay > 22)
                {
                    zodiacSign = "Virgo";
                    virgoCounter++;
                }
                break;
            case 9: // September
                if(bDay < 23)
                {
                    zodiacSign = "Virgo";
                    virgoCounter++;
                }
                else if(bDay > 22)
                {
                    zodiacSign = "Libra";
                    libraCounter++;
                }
                break;
            case 10: // October
                if(bDay < 23)
                {
                    zodiacSign = "Libra";
                    libraCounter++;
                }
                else if(bDay > 22)
                {
                    zodiacSign = "Scorpio";
                    scorpioCounter++;
                }
                break;
            case 11: // November
                if(bDay < 22)
                {
                    zodiacSign = "Scorpio";
                    scorpioCounter++;
                }
                else if(bDay > 21)
                {
                    zodiacSign = "Sagittarius";
                    sagittariusCounter++;
                }
                break;
            case 12: // December
                if(bDay < 22)
                {
                    zodiacSign = "Sagittarius";
                    sagittariusCounter++;
                }
                else if(bDay > 21)
                {
                    zodiacSign = "Capricorn";
                    capricornCounter++;
                }
                break;
            }

            cout << bMonth << "/" << bDay << "\t\t " << zodiacSign << endl;
        }

        cout << "-------------------------------" << endl;
        cout << "\tStatistics" << endl;
        cout << "Count \t\tSign" << endl;
        cout << "-------------------------------" << endl;
        if(capricornCounter > 0)
            cout << capricornCounter << "\t\t" << "Capricorn" << endl;
        if(aquariusCounter > 0)
            cout << aquariusCounter << "\t\t" << "Aquarius" << endl;
        if(piscesCounter > 0)
            cout << piscesCounter << "\t\t" << "Pisces" << endl;
        if(ariesCounter > 0)
            cout << ariesCounter << "\t\t" << "Aries" << endl;
        if(taurusCounter > 0)
            cout << taurusCounter << "\t\t" << "Taurus" << endl;
        if(geminiCounter > 0)
            cout << geminiCounter << "\t\t" << "Gemini" << endl;
        if(cancerCounter > 0)
            cout << cancerCounter << "\t\t" << "Cancer" << endl;
        if(leoCounter > 0)
            cout << leoCounter << "\t\t" << "Leo" << endl;
        if(virgoCounter > 0)
            cout << virgoCounter << "\t\t" << "Virgo" << endl;
        if(libraCounter > 0)
            cout << libraCounter << "\t\t" << "Libra" << endl;
        if(scorpioCounter > 0)
            cout << scorpioCounter << "\t\t" << "Scorpio" << endl;
        if(sagittariusCounter > 0)
            cout << sagittariusCounter << "\t\t" << "Sagittarius" << endl;

        cout << "Would you like to try again? <Y/N>:";
        cin >> userChoice;

        switch(userChoice)
        {
        case 'Y':
        case 'y':
            break;
        case 'N':
        case 'n':
            cout << "Goodbye. Thank you for using the COP 1334 Zodiac App." << endl;
            break;
        }

    }while(userChoice == 'Y' || userChoice == 'y');



    return 0;
}
