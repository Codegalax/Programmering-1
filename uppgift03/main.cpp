/* Thanks for good and the procedural explanation for this challenge. This challenge was very nice and easier and the explanation helped me alot specielly the global variables that was mentioned in the beginning. */
#include <iostream>
#include <iomanip> // This library is used for setw()

using namespace std;

// Declaring global variables
string amnen[5] = {"Matematik", "Svenska", "Engelska", "Historia", "Fysik"};

int poang[5];
char betyg[5];

// reading points for each subject
void lasPoang()
{
    for (int i = 0; i < 5; i++)
    {
        cout << "Insert points: " << amnen[i] << endl;
        cin >> poang[i];
    }
};

// converting number of points to grade A-F
void omvandlaPoang()
{
    for (int i = 0; i < 5; i++)
    {
        if (poang[i] >= 90)
        {
            betyg[i] = 'A';
        }
        else if (poang[i] >= 80 && poang[i] < 90)
        {
            betyg[i] = 'B';
        }
        else if (poang[i] >= 70 && poang[i] < 80)
        {
            betyg[i] = 'C';
        }
        else if (poang[i] >= 60 && poang[i] < 70)
        {
            betyg[i] = 'D';
        }
        else if (poang[i] >= 50 && poang[i] < 60)
        {
            betyg[i] = 'E';
        }
        else
        {
            betyg[i] = 'F';
        }
        // cout << betyg[i] << endl;
    }
};

/* After converting points to grade A-F, this function prints grades of each subject */
void skrivutBetyg()
{
    cout << "\n=========================\n"
         << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << left << setw(10) << amnen[i] << " : " << betyg[i] << endl;
    }
};

/* Function to print total points a student gets and number of a particular grade */
void statistik()
{
    /* declaring variable for holding number of A-F grades one gets */
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    int f = 0;
    int totalAntalPoang = 0; // Variable to store Total points in
    for (int i = 0; i < 5; i++)
    {
        if (betyg[i] == 'A')
        {
            a++;
        }
        else if (betyg[i] == 'B')
        {
            b++;
        }
        else if (betyg[i] == 'C')
        {
            c++;
        }
        else if (betyg[i] == 'D')
        {
            d++;
        }
        else if (betyg[i] == 'E')
        {
            e++;
        }
        else if (betyg[i] == 'F')
        {
            f++;
        }
        totalAntalPoang += poang[i];
    }
    cout << "\nA =    " << a << endl;
    cout << "B =    " << b << endl;
    cout << "C =    " << c << endl;
    cout << "D =    " << d << endl;
    cout << "E =    " << e << endl;
    cout << "F =    " << f << endl;

    cout << "\nTotal antal poang: " << totalAntalPoang << endl;

    cout << "\n=========================\n"
         << endl;
};

int main()
{
    lasPoang();
    omvandlaPoang();
    skrivutBetyg();
    statistik();
    return 0;
}
