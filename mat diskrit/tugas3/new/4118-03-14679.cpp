#include <iostream>

using namespace std;

int main()
{
    char j;
    string x;
    char b;
    int a,f,q;
    cout<<"apakah anda ingin melakukan encrypt atau decrypt (e/d) : ";
    cin>>j;
    if(j=='e'){
        cout<<"anda ingin menggeser huruf berapa kalimat : ";
        cin>>q;

        cout<<"masukan kata yang ingin di encrypt : ";
        cin>>x;
        f=x.length();
        cout<<"kalimat anda terencrypt menjadi : ";
        for(a=1;a<=f;a++){
            b=x[a-1];
            b-='a';
            b+=q+26;
            b%=26;
            b+='a';
            cout<<b;
            }
    }else if(j=='d'){
        cout<<"anda ingin menggeser huruf berapa kalimat : ";
        cin>>q;
        cout<<"masukan kata yang ingin di decrypt : ";
        cin>>x;
        f=x.length();
        cout<<"kalimat anda yang sebenarnya : ";
        for(a=1;a<=f;a++){
            b=x[a-1];
            b-='a';
            b+=26-q;
            b%=26;
            b+='a';
            cout<<b;
        }
    }else{
        cout<<"inputan salah";
    }
    return 0;
}
