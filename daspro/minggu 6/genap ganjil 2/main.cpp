/* program genap ganjil
    {program untuk mengecek apakah bilangan genap/ganjil}
    nama:burhanuddin dhika firmansyah
    nim:A11.2022.14679
    12-10-2022*/
#include <iostream>

using namespace std;

int main()
{
    //kamus
    int bil;
    string hasil;

    //algoritma

    cout << "masukan bilangan : ";
    cin >> bil;
    hasil = (bil%2==0)? " bilangan genap":"bilangan ganjil";
    cout << bil<<" adalah "<<hasil;
    cout<<endl<<"cek selesai";

    return 0;
}
