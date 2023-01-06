#include <iostream>

using namespace std;

int main()
{
    //kamus
    char bki;

    //algoritma
    do{
    cout << "apa mau belok kiri : ";
    cin>>bki;
    }while ((bki != 'y')&&(bki !='Y'));
    cout << "selesai";
    return 0;
}
