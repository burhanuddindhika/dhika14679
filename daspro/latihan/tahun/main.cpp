#include <iostream>

using namespace std;

int main()
{
    //kamus
    int th;

    //algoritma
    cout <<"masukan tahun :";
    cin>>th;
    if(th>100){
        if(th%100!=0){
            if(th%4 == 0){
            cout<<th<<" adalah tahun kabisat";
            }   else {cout<<th<<" bukan tahun kabisat";
            }
    }   else{
        cout<<th<<" bukan tahun kabisat";
    }
    }   else if(th%4 == 0){
            cout<<th<<" adalah tahun kabisat";
            }   else {cout<<th<<" bukan tahun kabisat";
            }
    return 0;
}
