/*
    program validasi bilangan ganjil antara 75 dan 90
    ket: program untuk cek bilangan ganjil antara 75 dan 90
    tgl: 5-10-2022
*/
#include <iostream>

using namespace std;

int main()
{
//kamus
    int x;

//algoritma
cout <<"masukan bilangan :";
    cin >> x;
    if( (x%2==1)&&(x>75)&&(x<90) )
    {
        cout << x << " adalah bilangan ganjil antara 75 dan 90"<<endl;
        cout <<endl;

    }
    cout <<"cek selesai";
    return 0;
}
