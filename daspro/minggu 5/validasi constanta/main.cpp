/*
    program validasi constanta
    ket: program untuk cek bilangan >constanta
    By :burhanuddin dhika f.
    tgl: 5-10-2022
*/
#include <iostream>

using namespace std;

int main()
{
    //kamus
    int a;
    const int x = 10;

    //algoritma
    cout <<"masukan bilangan :";
    cin >>a;
    if (a>x)
    {
        cout<<a<<" lebih besar dari "<<x;
        cout<<endl;
    }
    cout<<"cek selesai";
    return 0;
}
