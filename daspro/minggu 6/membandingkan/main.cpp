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

    //algoritma

    cout << "masukan A : ";
    cin >> a;
    cout<<"masukan nilai B : ";
    cin>> b;
    if (a>=b){
        cout<<"bilangan yang terbesar adalah : "<<a;

    }
        else {cout<<"bilangan terbesar adalah : "<<b;
    }
    return 0;
}
