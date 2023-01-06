#include <iostream>

using namespace std;

int main()
{
    int b,k,l;
    cout<<"masukan kolom :";
    cin>>k;//kolom
    cout<<"masukan baris :";
    cin>>b;//baris
    cout<<"masukan layer :";
    cin>>l;
    int x[b][k][l];

    for(int i=0;i<b;i++){
        for(int a=0;a<k;a++){
            for(int c=0;c<l;c++){
            cout<<"masukan kolom ke-"<<a+1<<" baris ke-"<<i+1<<" layer ke-"<<c+1<<" : ";
            cin>>x[i][a][c];
            }
            cout<<endl;
        }
        cout<<endl;
    }

    for(int i=0;i<b;i++){
        for(int a=0;a<k;a++){
            for(int c=0;c<l;c++){
            cout<<x[i][a][c];
            cout<<"\t";
            }
            cout<<endl;
        }
        cout<<endl;
    }



    return 0;
}
