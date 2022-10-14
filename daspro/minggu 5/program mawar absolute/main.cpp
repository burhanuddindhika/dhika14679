/*
    program mawar absoolute
    ket: program untuk cek bilangan bulat negatif atau positif menjadi bil bulaat positif
    tgl: 5-10-2022
*/
#include <iostream>

using namespace std;

int main()
{
    //kamus
    int bil;

    //algoritma
    cout << "masukan bilangan" << endl;
    cin >>bil;
    if (bil<0)
    {
        bil*=-1; //bilangan = bilangan *-1
    }
    cout<<bil<<" adalah bilangan positif"<<endl;
    cout<<"cek selesai";
    return 0;
}
