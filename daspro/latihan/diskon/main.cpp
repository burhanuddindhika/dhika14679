#include <iostream>

using namespace std;

int main()
{
    //kamus
    int t;

    //algoritma
    cout << "masukan total belanja anda : ";
    cin>>t;
    if (t>0&&t<=100000){
        cout<<"total harga belanjaan anda :Rp."<<t;
    }else if (t>100000&&t<=500000){
        t-=0.1*t;
        cout<<"total harga belanjaan anda :Rp."<<t;
    }else if(t>500000&&t<1000000){
        t-=0.2*t;
        cout<<"total harga belanjaan anda :Rp."<<t;
    }else if(t>=1000000){
        t-=0.3*t;
        cout<<"total harga belanjaan anda :Rp."<<t;
    }else {
        cout<<"inputan salah";
    }
    return 0;
}
