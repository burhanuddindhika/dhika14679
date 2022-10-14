#include <iostream>

using namespace std;

int main()
{
    //kamus
    float ipk;

    //algoritma
    cout << "masukan IPK : ";
    cin>>ipk;
    if (ipk>=3.5&&ipk<=4){
        cout<<"lulus";
    }   else if(ipk<3.49 && ipk>=2.5){
        cout<<"dipertimbangkan";
    }   else if(ipk<2.5&&ipk>=0){
        cout<<"tidak lulus";
    }   else{
        cout<<"inputan salah";
    }
    return 0;
}
