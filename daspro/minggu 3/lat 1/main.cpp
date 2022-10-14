

#include <iostream>

using namespace std;

int main()
{
    //kamus
    float p;//panjang
    float l;//lebar
    float hasilkeliling;
    float hasilluas;

    //algoritma
    cout<<"masukan panjang :";
    cin>>p;
    cout<<"masukan lebar :";
    cin>>l;
    cout<<"======================"<<endl;
    hasilkeliling = 2*(p+l);
    hasilluas = p*l;
    cout << "hasil keliling ="<<hasilkeliling << endl;
    cout << "hasil luas ="<<hasilluas;
    return 0;
}
