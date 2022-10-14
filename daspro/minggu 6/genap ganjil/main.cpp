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
    //algoritma
    cout << "masukan bilangan : ";
    cin >> bil;
    if (bil % 2 ==0){
        cout << bil<<" adalah bilangan genap";
    }   else{
        cout <<bil<<" adalah bilangan ganjil";
    }
    cout<<endl<<"cek selesai";

    return 0;
}
