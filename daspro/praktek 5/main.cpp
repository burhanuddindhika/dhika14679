#include <iostream>

using namespace std;

int main()
{
    int jari, volume, tinggi, keliling, luas;

    const float phi = 3.14;  jari = 7;

    tinggi = 21;
    keliling=2*jari*phi;
    luas=phi * jari * jari;
    volume = phi * jari * jari * tinggi;

    cout << "Program Mencari Keliling, luas, dan volume tabung"<<endl;
    cout << "================================================="<<endl;
    cout<<"keliling alas = "<<keliling<<endl;
    cout<<"luas alas     = "<<luas<<endl;
    cout<<"volume        = "<< volume;
}

