/* program untuk memvalidasi bilangan absolut kelipatan 5
    {program untuk memvalidasi bilangan absolut kelipatan 5}
    nama:burhanuddin dhika firmansyah
    nim:A11.2022.14679
    12-10-2022*/
#include <iostream>

using namespace std;

int main()
{
    //kamus
    int bil,absolute;
    string mawar;
    //algoritma

    cout << "masukan bilangan : ";
    cin >> bil;
    /*if (bil<0){
        bil*=-1;
    }*/
    absolute=(bil<0)? bil*-1:bil;
    mawar=(bil%5==0)? " adalah bilangan kelipatan 5":" bukan bilangan kelipatan 5";
    cout<<absolute<<mawar;
    return 0;
}
