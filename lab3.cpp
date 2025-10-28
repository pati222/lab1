

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //Zad 1
    /*
    const int n=10;
    int tab[n];

    for (int i = 0; i < n; i++)
    {
        tab[i] = rand() % 2;
            cout << tab[i] << " ";
    }
    */

    //Zad 2
    /*const int n = 10;
    int tab[n];
    int min;

    for (int i = 0; i < n; i++)
    {
        tab[i] = rand() % 101;
        if (i == 0)     //wazne by tka to robic, kinda dont know why
        {
            min = tab[i];
        }
        cout << tab[i] << " ";
        if (tab[i] < min)
        {
            min = tab[i];
        }
    }
    cout << "Wartosc minimalan w danym zbiorze liczb to: " << min << endl;
    */

    //Zad 3
    /*const int n = 10;
    int tab[n];
    int temp = 0; 
    int m = n-1;

    for (int i = 0; i < n; i++)
    {
        tab[i] = rand() % 101;
        cout << tab[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n/2; i++)
    {
        temp = tab[m];
        tab[m] = tab[i];
        tab[i] = temp;
        m=m-1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << tab[i] << " ";
    }
    */

    //Zad 4
    /*int tab[10][10];
    const int n = 10;

    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            tab[i][j] = (i + 1) * (j + 1);
        }
    }

    cout << "Tabliczka mnozenia (10x10):\n\n";
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cout << setw(4) << tab[i][j];
        }
        cout << endl; 
    }
    */

    //Zad 5

}
