

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    //Zad1
    /*
    int n;
    cout << " Podaj do ilu liczb wyliczac: " << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
    */

    //Zad2
    /*
    int n;
    cout << "Podaj od ilu liczb wyliczac: " << endl;
    cin >> n;
    while (n!=0)
    {
        cout << n << " " << endl;
        n--;
    }
    */

    //Zad3
    /*double n, min , max , ave, bank = 0, i = 1;
    char odp;
    do
    {
        cout << "Podaj liczbe: " << endl;
        cin >> n;
        cout << "Czy to juz koniec wprowadzania wartosci? (y/n)" << endl;
        cin >> odp;
        if (i == 1 )
        {
        min = n;
        max = n;
        }
        if (min > n)
        {
            min = n;
        }
        if (max < n)
        {
            max = n;
        }
        bank = bank + n;
        ave = bank / i;
        i++;
    } while (odp == 'n');

    {
        cout << "Wartosc maksymalna tych liczb wynosi: " << max << endl;
        cout << "Wartosc minimalna tych liczb wynosi: " << min << endl;
        cout << "Srednia tych liczb wynosi: " << ave << endl;
    }*/

    //Zad4
    int a, b, c;
    char odp;
    cout << "Wymysl sobie liczbe i podaj jej zakres, w ktorym ona sie znajduje" << endl;
    cin >> a >> b;
    if (a == b)
    {
        cout << "Twoja wymyslona liczba to: " << a << endl;
    }
    else
    {
        while (a!=b)
        {
            c = (a + b) / 2;
            cout << "Liczba jest mniejsza (-) czy wieksza (+) od " << c << "?" << endl;
            cin >> odp;
            if (odp == '-')
            {
                b = c;
            }
            else
            {
                a = c;
            }
        }
        cout << "Twoja liczba to: " << a << endl;

    }

}

