#include <iostream>

using namespace std;

int main()
{
    int u;
    char m;

    cout << "apakan anda mahasiswa udinus (y/t)";
    cin>> m;
    if (m == "y"||m=="Y"){
        cout<<"masukan uang saku anda : ";
        cin>>u;
        if(u>1000000){
            cout<<"anda mahasiswa mampu";
        }else{
            cout<<"anda mahasiswa biasa";
        }
    }else if(m=="t"||m=="T"){
        cout<<"anda bukan mahasiswa udinus";
    }else{
        cout<<"inputan salah";
    }
    return 0;
}
