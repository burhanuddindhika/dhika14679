#include <iostream>

using namespace std;

int main()
{
    //kamus
    int b,k;
    cout<<"masukan kolom :";
    cin>>k;//kolom
    cout<<"masukan baris :";
    cin>>b;//baris
    int x[k][b];

    //algoritma2
    for(int i=0;i<k;i++){//i=kolom
        for(int a=0;a<b;a++){//a=baris
            cout<<"masukan kolom ke-"<<i+1<<" baris ke-"<<a+1<<" : ";
            cin>>x[i][a];
        }
        cout<<endl;
    }

    for(int i=0;i<k;i++){
        for(int a=0;a<b;a++){
            cout<<x[i][a];
            cout<<"\t";
        }
        cout<<endl;
    }

    return 0;
}
