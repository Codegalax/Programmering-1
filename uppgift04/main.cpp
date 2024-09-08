/* This was the hardest assignment and the documentation and guid didnt help me that much thats why i am late to upload the assignment. The class and object in c++ is very hard to grasp and understand for me*/

#include <iostream>

using namespace std;

class City
{

public:
    string name;
    int temp;
    // A function that only returns name and temp values
    string ToString()
    {
        /* Checking if temp value is outside -60 to 60 degrees. if so then temp is converted
        to invalid */
        if (temp >= 60 || temp <= -60)
        {
            string str = to_string(temp);
            str = "invalid";
            return name + " " + str;
        }
        return name + " " + to_string(temp);
    }

    /* Getting city and teperature input from user */
    void getData()
    {
        cout << "Enter city name: " << endl;
        cin >> name;
        cout << "Enter city temp: " << endl;
        cin >> temp;
    }
    /* Sorting cities base on temperature value. Coldest city is indexed first then calling
    ToString() function to print each city and their temperature value*/
    void bubbleSort(City cities[], int n)
    {
        // Creating a temporary City object to hold a value while sorting
        City temp;
        int i, j;
        for (i = 0; i < n; i++)
        {
            for (j = n - 1; j > i; j--)
            {
                if (cities[j].temp < cities[j - 1].temp)
                {
                    temp = cities[j];
                    cities[j] = cities[j - 1];
                    cities[j - 1] = temp;
                }
            }
            // Here calling ToString() function
            cout << cities[i].ToString() << endl;
        }
        cout << endl;
    }
    /* Searching in object array to find a city with a specific temperature*/
    int linierSearch(City cities[], int n, int searchTemp)
    {
        for (int i = 0; i < n; i++)
        {
            if (cities[i].temp == searchTemp)
            {

                return i + 1; // I had to plus 1 or the index returned starts from 0
            }
        }
        return -1;
    }
};

/* Main function to run the program */
int main()
{
    /* Creating 4 City object called cities */
    City cities[4];
    /*  Calling getData() function witch takes user input for each city */
    for (int i = 0; i < 4; i++)
    {
        cout << "City : " << (i + 1) << endl;
        cities[i].getData();
    }
    /*  Calling bubbleSort() and linearSearch() functions */
    cout << "================" << endl;
    cities->bubbleSort(cities, 4);
    cout << "================" << endl;
    cout << cities->linierSearch(cities, 4, 10) << endl;
    cout << "================" << endl;
}