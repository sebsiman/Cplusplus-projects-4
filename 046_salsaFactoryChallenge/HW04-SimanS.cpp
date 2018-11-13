/*
Programmers: Sebastian Siman & Chabeli Castano
Date: 10/31/18
Purpose: Tally amount of salsa jars user purchased and then display total price and total jars bought.
*/

#include <iostream>
#include <iomanip>

using namespace std;

const double MILD_PRICE = 1.99; // constant values for each salsa
const double MED_PRICE = 2.99;
const double SWEET_PRICE = 4.99;
const double HOT_PRICE = 3.99;
const double ZEST_PRICE = 7.99;

void displayMenu(); // displays prices and prompts user for choice
void validateInput(int& userChoice); // gets user input while also validating
void cinFail(int& userChoice); // modulated cin.fail function
void switchMenu(int& userChoice, int jarsBought, int& mildAccumulator, double& mildTotalPrice,
                int& mediumAccumulator, double& mediumTotalPrice, int& sweetAccumulator, double& sweetTotalPrice,
                int& hotAccumulator, double& hotTotalPrice, int& zestyAccumulator, double& zestyTotalPrice);
              /*
                Switch based on user choice that prompts the user for the number of jars bought for each salsa type
                while also keeping accumulators to update the total for each jar type and the price based on the total
              */
void jarsPurchased(int jarsBought, int& accumulator, int& totalPrice, double& price); // modulated function to get user input and calculate total for jar accumulator
void salesReceipt(int mildAccumulator, double mildTotalPrice, int mediumAccumulator, double mediumTotalPrice,
                  int sweetAccumulator, double sweetTotalPrice, int hotAccumulator, double hotTotalPrice, int zestyAccumulator, double zestyTotalPrice);
                  // prints the receipt and the total prices / total jars bought for each salsa

int main()
{
    int userChoice; // variable for user choice
    int mildAccumulator = 0; // accumulators to keep total of each jar bought
    double mildTotalPrice = 0; // initialized for when jars bought * price
    int mediumAccumulator = 0;
    double mediumTotalPrice = 0;
    int sweetAccumulator = 0;
    double sweetTotalPrice = 0;
    int hotAccumulator = 0;
    double hotTotalPrice = 0;
    int zestyAccumulator = 0;
    double zestyTotalPrice = 0;
    int jarsBought = 0; //  stores the number the user inputs for each jar purchase

    do
    {
        displayMenu();
        validateInput(userChoice);
        switchMenu(userChoice, jarsBought, mildAccumulator, mildTotalPrice,
                   mediumAccumulator, mediumTotalPrice, sweetAccumulator, sweetTotalPrice,
                   hotAccumulator, hotTotalPrice, zestyAccumulator, zestyTotalPrice);
    }while(userChoice != 6);

    return 0;
}

void displayMenu() // displays the menu and prices
{
    cout << "Welcome to the Miami Salsa Factory" << endl;
    cout << "Please choose from the following options: " << endl;
    cout << "1. Mild Salsa\t $1.99" << endl;
    cout << "2. Medium Salsa\t $2.99" << endl;
    cout << "3. Sweet Salsa\t $4.99" << endl;
    cout << "4. Hot Salsa\t $3.99" << endl;
    cout << "5. Zesty Salsa\t $7.99" << endl;
    cout << "6. Exit" << endl;
    cout << "Your choice: ";
}

void validateInput(int& userChoice) //  validates input for both incorrect data types and incorrect numbers
{
    cin >> userChoice;
    cinFail(userChoice);
    while(userChoice < 1 || userChoice > 6)
    {
        cout << "Please enter a number between 1 and 6." << endl;
        cin >> userChoice;
        cinFail(userChoice);
    }
}

void cinFail(int& userChoice) // modulated cin.fail function
{
    while(cin.fail())
    {
        cin.clear();
        cin.sync();
        cout << "Please enter a number value." << endl;
        cin >> userChoice;
    }
}

void switchMenu(int& userChoice, int jarsBought, int& mildAccumulator, double& mildTotalPrice,
                int& mediumAccumulator, double& mediumTotalPrice, int& sweetAccumulator, double& sweetTotalPrice,
                int& hotAccumulator, double& hotTotalPrice, int& zestyAccumulator, double& zestyTotalPrice)
{
    cout << "How many jars would you like to purchase: ";
    switch(userChoice)
    {
    case 1: // Mild Salsa
        {
            jarsPurchased(jarsBought, mildAccumulator, mildTotalPrice, MILD_PRICE);
            break;
        }
    case 2: // Medium Salsa
        {
            jarsPurchased(jarsBought, mediumAccumulator, mediumTotalPrice, MED_PRICE);
            break;
        }
    case 3: // Sweet Salsa
        {
            jarsPurchased(jarsBought, sweetAccumulator, sweetTotalPrice, SWEET_PRICE);
            break;
        }
    case 4: // Hot Salsa
        {
            jarsPurchased(jarsBought, hotAccumulator, hotTotalPrice, HOT_PRICE);
            break;
        }
    case 5: // Zesty Salsa
        {
            jarsPurchased(jarsBought, zestyAccumulator, zestyTotalPrice, ZEST_PRICE);
            break;
        }
    default: // Exit
        {
            salesReceipt(mildAccumulator, mildTotalPrice, mediumAccumulator, mediumTotalPrice, sweetAccumulator, sweetTotalPrice, hotAccumulator, hotTotalPrice, zestyAccumulator, zestyTotalPrice);
        }
    }
}

void jarsPurchased(int jarsBought, int& accumulator, int& totalPrice, double price) // prompts user for total numbers of jars purchased for each salsa and then adds the number to the accumulator
{
    cin >> jarsBought;
    accumulator = accumulator + jarsBought;
    totalPrice = accumulator * price;

}

void salesReceipt(int mildAccumulator, double mildTotalPrice, int mediumAccumulator, double mediumTotalPrice,
                  int sweetAccumulator, double sweetTotalPrice, int hotAccumulator, double hotTotalPrice, int zestyAccumulator, double zestyTotalPrice)
                  // prints the sales receipt as well as calculating the subtotal of the transaction
{
    double total = 0;
    total = mildTotalPrice + mediumTotalPrice + sweetTotalPrice + hotTotalPrice + zestyTotalPrice;
    cout << "Thank you for using the Salsa Factory Application" << endl;
    cout << "Have a nice day!" << endl;
    cout << setw(7) << "# Jars" << setw(14) << "Salsa Type" << setw(20) << "Unit $" << setw(19) << "Subtotal" << endl;
    cout << setw(2) << mildAccumulator << setw(13) << " Mild" << setw(37) << "@ $1.99 ...... $ " << mildTotalPrice << endl;
    cout << setw(2) << mediumAccumulator << setw(15) << " Medium" << setw(35) << "@ $2.99 ...... $ " << mediumTotalPrice << endl;
    cout << setw(2) << sweetAccumulator << setw(14) << " Sweet" << setw(36) << "@ $4.99 ...... $ " << sweetTotalPrice << endl;
    cout << setw(2) << hotAccumulator << setw(12) << " Hot" << setw(38) << "@ $3.99 ...... $ " << hotTotalPrice << endl;
    cout << setw(2) << zestyAccumulator << setw(14) << " Zesty" << setw(36) << "@ $7.99 ...... $ " << zestyTotalPrice << endl;
    cout << "Your total is" << setw(39) << "$: " << total;
}



