#include <iostream>

using namespace std;

int main()
{
    /*string x;
    char c;
    int i=2;
    cin>>x;
    if(c>='a' && c <='z'){
        c-='a';
        c+=i+26;
        c%=26;
        c+='a';
    }else if(c>='A' && c <='Z'){
        c-='A';
        c+=i+26;
        c%=26;
        c+='A';
    }
    cout<<x.length();*/



    char j;
    string x;
    char b;
    int a,f,q;
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


    return 0;
}
