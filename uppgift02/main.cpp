#include <iostream>

using namespace std;

int main()
{
    // Declaring variables
    // I had issue with getting swedish charachters to show properly thats why i havnt used Ä Å Ö
    float saldo = 0;
    int uttag = 0;
    int insattning = 0;
    char choice;
    double ranta;
    int insattningsbelopp;
    int year;

    // while loop with true condition to comeback to switch menu
    while (true)
    {
        cout << "\nWELLKOMMEN TILL BANKSIMULATORN" << endl;
        cout << "==============================" << endl;
        cout << "[I]nsattning" << endl;
        cout << "[U]ttag" << endl;
        cout << "[S]aldo" << endl;
        cout << "[R]anta" << endl;
        cout << "[A]vsluta" << endl;
        cout << "==============================" << endl;
        cout << "Ditt val: ";
        cin >> choice;
        cout << endl;

        // switch statement
        switch (choice)
        {
        case 'I':
            cout << "Saldo: " << saldo << endl;
            cout << "Belopp for insattning: ";
            cin >> insattning;
            if (insattning > 0)
            {
                saldo += insattning;
            }

            break;
        case 'U':
            cout << "Saldo: " << saldo << endl;
            cout << "Belopp Uttag: ";
            cin >> uttag;
            if (uttag > 0)
            {
                saldo -= uttag;
            }

            break;
        case 'S':
            cout << "Saldo: " << saldo << endl;
            break;
        case 'R':
            cout << "Insattningsbelopp: " << endl;
            cin >> insattningsbelopp;
            cout << "Rantesats procent: " << endl;
            cin >> ranta;
            cout << "Antal ar: " << endl;
            cin >> year;
            ranta = ranta / 100;
            for (int i = 1; i < year + 1; i++)
            {
                int sum = ranta * insattningsbelopp;
                insattningsbelopp = insattningsbelopp + sum;
                cout << "Rantan efter " << i << " ar " << sum << "kr" << endl;
            }
            cout << "Total saldo efter " << year << " ar blir " << insattningsbelopp << "kr" << endl;
            break;
        case 'A':
            cout << "*** Thanks and wellcome back ***" << endl;
            exit(0);
            break;

        default:
            cout << "Fel val!" << endl;
            break;
        }
    }
    return 0;
}
