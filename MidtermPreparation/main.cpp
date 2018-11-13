#include <iostream>
#include <ctime>
#include <cstdlib>


using namespace std;

int main()
{
    unsigned seed = time(0);
    srand(seed);

    int numOfVoters;
    char voterParty;
    int dCounter = 0; // counter for democrat voters
    int rCounter = 0; // counter for republican voters
    int iCounter = 0;// counter for independent voters
    int voterPartyNum;
    int voterSexNum;
    char voterSex;
    int maleCounter = 0; // male voter counter
    int femaleCounter = 0; // female voter counter
    int bMonth;
    const int MAX_MONTH = 12;
    const int MIN_MONTH = 1;
    int bDay;
    const int MIN_DAY = 1;
    int bYear;
    const int MAX_YEAR = 2000;
    const int MIN_YEAR = 1900;
    int userChoice;

    cout << "How many voters?" << endl;
    cin >> numOfVoters;

    while(cin.fail())
    {
        cout << "Please enter a number value." << endl;
        cin.clear();
        cin.sync();
        cin >> numOfVoters;
    }
    while(numOfVoters < 0)
    {
        cout << "Please enter positive values." << endl;
        cin >> numOfVoters;
    }

    cout << "\nVoter \t\tSex \tDOB \t\tParty Affiliation" << endl;

    for(int voter = 1; voter <= numOfVoters; voter++)
    {
        bYear = rand()%(MAX_YEAR-MIN_YEAR + 1) + MIN_YEAR;
            //cout << "Random Year: " << bYear << endl;
        bMonth = rand()%(MAX_MONTH-MIN_MONTH + 1) + MIN_MONTH;
            //cout << "Random Month: " << bMonth << endl;
        switch(bMonth)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            bDay = rand()%(31 - MIN_DAY + 1) + MIN_DAY;
            //cout << "Random Day: " << bDay << endl;
            break;
        case 2:
            bDay = rand()%(28 - MIN_DAY + 1) + MIN_DAY;
            //cout << "Random Day: " << bDay << endl;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            bDay = rand()%(30 - MIN_DAY + 1) + MIN_DAY;
            //cout << "Random Day: " << bDay << endl;
            break;

        }

        voterPartyNum = rand() % 3 + 1;
        //cout << voterPartyNum;
        switch(voterPartyNum)
        {
        case 1:
            voterParty = 'D';
            dCounter++;
            break;
        case 2:
            voterParty = 'R';
            rCounter++;
            break;
        case 3:
            voterParty = 'I';
            iCounter++;
            break;
        }

        voterSexNum = rand() % 2 + 1;
        switch(voterSexNum)
        {
        case 1:
            voterSex = 'M';
            maleCounter++;
            break;
        case 2:
            voterSex = 'F';
            femaleCounter++;
            break;
        }

        cout << "Voter #" << voter << "\t" << voterSex << "\t" << bMonth << "/" << bDay << "/" << bYear << "\t" << voterParty << endl;


    }

    cout << "\nVoter Statistics" << endl;
    cout << "1. Party Affiliation Breakdown." << endl;
    cout << "2. Gender Breakdown." << endl;
    cout << "3. Exit." << endl;
    cin >> userChoice;

    switch(userChoice)
    {
    case 1:
        cout << "Party Affiliation Breakdown:" << endl;
        cout << dCounter << " citizens voted Democrat." << endl;
        cout << rCounter << " citizens voted Republican." << endl;
        cout << iCounter << " citizens voted Independent." << endl;
        break;
    case 2:
        cout << "Gender Breakdown:" << endl;
        cout << maleCounter << " male voters." << endl;
        cout << femaleCounter << " female voters." << endl;
        cout << numOfVoters << " total voters." << endl;
    case 3:
        cout << "Goodbye." << endl;
    default:
        cout << "Please select a valid option." << endl;
    }



    return 0;
}
