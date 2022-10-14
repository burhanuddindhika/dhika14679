/*
    program validasi bilangan genap lebih dari 2
    ket: program untuk cek bilangan genap lebih daari 2
    By :burhanuddin dhika f.
    tgl: 5-10-2022
*/
#include <iostream>

using namespace std;

int main()
{
//kamus
    int x;

//algoritma
    cout <<"masukan bilangan :"
    cin >> x;
    if( (x%2==0)&&(x>2) )
    {
        cout << x << " adalah bilangan genap lebih dari 2";
        cout << endl;
    }
    cout <<"cek selesai";
    return 0;
}
