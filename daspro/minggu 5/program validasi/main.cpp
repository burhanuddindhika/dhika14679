/*
    program validasi
    ket: program untuk cek bilangan >0
    By :burhanuddin dhika f.
    tgl: 5-10-2022
*/

#include <iostream>

using namespace std;

int main()
{
    //kamus
   int bilangan;

   //algoritma

   cout <<"masukan bilangan :";
   cin >>bilangan;
   if (bilangan > 0)
   {
       cout << bilangan <<"lebih besar dari 0";
       cout<<endl;
   }
    cout << "cek selesai" << endl;
    return 0;
}
