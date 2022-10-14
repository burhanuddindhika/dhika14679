#include <iostream>

using namespace std;

int main()
{
    float cel, fah, kel, rea ;
    cout << "program konversi suhu" << endl;
    cout << "=======================" << endl;
    cout << "masukan suhu dalam celcius : ";

    cin >> cel;
    cout << endl;

    fah = (9.0/5.0 * cel) + 32;
    kel = cel + 273.15;
    rea = cel * (4.0/5.0) ;

    cout << cel << " derajat Celcius = " << fah <<" derajat Fahrenheit";
    cout << endl;
    cout << cel << " derajat Celcius = " << kel <<" derajat Kelvin";
    cout << endl;
    cout << cel << " derajat Celcius = " << rea <<" derajat Reamur";
    cout << endl;
    return 0;
}
