/* program membandingkan bilangan a dan b
    {program untuk menentukan bilangan terbesar}
    nama:burhanuddin dhika firmansyah
    nim:A11.2022.14679
    12-10-2022*/
#include <iostream>

using namespace std;

int main()
{
    //kamus
    int a,b;
    string hasil;

    //algoritma

    cout << "masukan bilangan A : ";
    cin >> a;
    cout << "masukan bilangan B : ";
    cin >> b;
    hasil = (a<=b)? b:a;
    cout << "bilangan yang terbesar adalah : "<<hasil;
    cout<<endl<<"cek selesai";

    return 0;
}
