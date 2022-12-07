#include <iostream>

using namespace std;

int main()
{
    string x;
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
    cout<<x.length();
    return 0;
}
