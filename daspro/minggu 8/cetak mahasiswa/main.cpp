#include <iostream>

using namespace std;

int main()
{
    //kmaus
    int n;


    cout<<"masukan jumlah pengulangan : ";
    cin>>n;

    //for
    for(;n>0;n--){
        cout<<"mahasiswa"<<endl;
    }

    //do while
    do{
        n--;
        cout<<"mahasiswa"<<endl;
    }while(n>0);


    //while
    while(n>0){
        cout<<"mahasiswa"<<endl;;
        n--;
    }
    return 0;
}
