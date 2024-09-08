#include <iostream>
#include <cmath>

using namespace std;

int calculatePrice()
{
    double price;
    double payed;
    int final;

    cout << "Please enter price" << endl;
    cin >> price;
    cout << "Please enter amount that has been payed:" << endl;
    cin >> payed;
    final = payed - price;

    // since final price is hole integer and mod gives 0, i have to create another double variable for holding Ore and decimals
    double decimal = payed - price;
    double ore = fmod(decimal, 1) * 100;

    if (final < 0)
    {
        final = price - payed;
        cout << "You have to pay " << final << " kr more" << endl;
    }
    else if (final == 0)
    {
        cout << "Price has been payed exactly, no change required" << endl;
    }
    else
    {
        // Rounding decimal
        if (ore < 25)
        {
            ore = 0;
        }
        else if (ore >= 25 && ore < 75)
        {
            ore = 50;
        }
        else
        {
            ore = 0;
            final = final + 1;
        }
        // Final calculations
        cout << "=================== Change to pay back ===================" << endl;
        cout << "                         " << decimal << " kr             \n"
             << endl;
        cout << "Tusen:\t\t " << final / 1000 << endl;
        final = final % 1000;
        cout << "Femhundra:\t " << final / 500 << endl;
        final = final % 500;
        cout << "Hundra:\t\t " << final / 100 << endl;
        final = final % 100;
        cout << "Femtio:\t\t " << final / 50 << endl;
        final = final % 50;
        cout << "Tjugo:\t\t " << final / 20 << endl;
        final = final % 20;
        cout << "Tio:\t\t " << final / 10 << endl;
        final = final % 10;
        cout << "Fem:\t\t " << final / 5 << endl;
        final = final % 5;
        cout << "En:\t\t " << final / 1 << endl;
        cout << "Ore:\t\t " << ore << endl;
    }

    return 0;
}
int main(void)
{
    calculatePrice();
}
