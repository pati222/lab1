#include <iostream>

using namespace std;
int main()
{
    //zad1
    /* double a = 5;
    double b = 12;
    double c = a + b;
    cout << c << endl; */

    //zad2
    /*double a, b, c;
    cin >> a;
    cin >> b;
    c = a + b;
    cout << "Suma tych dowch liczb wynosi: " << c << endl;*/

    //zad3
    /*double a, b, x;
    cout << "Wprowadz a, a potem wartosc b: " << endl;
    cin >> a >> b;
    if (a == 0)
    {
        cout << "Funkcja ta nie jest liniowa." << endl;
    }
    else
    {
        x = -b / a;
    }
    cout << "Rozwiazaniem rownania jest: " << x << endl;*/

    //zad4 - metoda wyznacznikow
    /*double a, b, c, d, e, f, w, wx, wy, x, y;
    cout << "Wprowadz dane a,b i c dla pierwszej funkcji w postaci rownania ax + by = c: " << endl;
    cin >> a >> b >> c;
    cout << "Wprowadz dane a,b i c dla drugiej funkcji: " << endl;
    cin >> e >> d >> f;
    w = a * d - e * b;
    wx = c * d - f * b;
    wy = a * f - e * c;
    x = wx / w;
    y = wy / w;
    if (w == 0 && wx == 0 && wy == 0)
    {
        cout << "Uklad ten jest nieoznaczony." << endl;
    }
    else if (w == 0 && wx != 0 && wy != 0)
    {
        cout << "Uklad ten jest sprzeczny." << endl;
    }
    else
    {
        cout << "Rozwiazaniami ukladu sa: x=" << x << ", y=" << y << endl;
    }*/


    //zad5
    double a, b, c, x1, x2, d;
    cout << "Podaj dance a, b i c dla funkcji: ax^2 + bx + c = 0" << endl;
    cin >> a >> b >> c;
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                cout << "Funkcja ta jest tozsamosciowa." << endl;
            }
            else
            {
                cout << "Funkcja jest sprzeczna." << endl;
            }
        }
        else
        {
            x1 = -b / c;
        }
    }

}


