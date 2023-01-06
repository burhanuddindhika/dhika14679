#include <iostream>

using namespace std;

int main()
{
    int n,a=0,b;
    cout<<"masukan jumlah array : ";
    cin>>n;
    cout<<endl;
    int nilai[n];
    for(int i=0;i<n;i++){
        cout<<"input nama hari ke-"<<i+1<<" : ";
        cin>>nilai[i];
    }
    //algoritma
    //input array
    cout<<endl;
    for(int i=0;i<n;i++){
        if(nilai[i]%2==0){
            cout<<nilai[i]<<endl;
            a+=nilai[i];
        }
    }
    cout<<a;
    //cout<<a<<endl;
    //cout<<b;
    return 0;
}
