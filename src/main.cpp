


#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

void getMenu();
void getSqrNumber(float a);
float getCubedNumber(float a);
float getSquareRoot(float a);

//cout << setprecision(15) << double();

int main () 
{
    int opt = 1;
    int usrNumber;

    while( opt != 9)
    {
        getMenu();
        cin >> opt;
        
        switch (opt)
        {
        case 1:
            cout << "write the number you would like squared: ";
            cin >> usrNumber;
            getSqrNumber(usrNumber);
            cout << "\n\nPRESS ANY KEY TO RETURN TO MENU";
            getch();
            system("cls");
        break;
        case 2:
            cout << "write the number you would like cubed: ";
            cin >> usrNumber;
            cout << "\nYour cubed number is " << getCubedNumber(usrNumber);
            cout << "\n\nPRESS ANY KEY TO RETURN TO MENU";
            getch();
            system("cls");
        break;
        case 3:
            cout << "write the number you would like to get the square root of: ";
            cin >> usrNumber;
            cout << "\nThe square root of your number is " << getSquareRoot(usrNumber);
            cout << "\n\nPRESS ANY KEY TO RETURN TO MENU";
            getch();
            system("cls");
        default:
            cout << "INVALID OPTION";
            break;
        }
    }
}

void getMenu()
{

    cout << "CALCULATOR\n1.-GET THE SQUARE OF A NUMBER\n2.-GET THE CUBE OF A NUMBER\n3.-GET THE SQUARE ROOT OF A NUMBER\n4.-GET THE ABSOLUTE VALUE OF A NUMBER\n9.- EXIT\n\nOPTION: ";
}

void getSqrNumber(float a)
{
    int numberSquared;
    numberSquared = a*a;
    cout << "Your number squared is: " << numberSquared;
}
float getCubedNumber(float a)
{
    int numberCubed;
    numberCubed = a*a*a;
    return numberCubed;
}
float getSquareRoot(float a)
{
    int squareRoot = sqrt(a); 
}