#include <iostream>

using namespace std;

int main()
{
    int j,m,d;

    cout << "masukan jam";
    cin>>j;
    cout << "masukan menit";
    cin>>m;
    cout << "masukan detik";
    cin>>d;

    if(d==59){
        d=0;
        if(m==59){
            m=0;
            if(j==23){
                j=0;
                cout<<j<<":"<<m<<":"<<d;
            }   else{
                cout<<(j+1)<<":"<<m<<":"<<d;
                }

        }   else{
            cout<<j<<":"<<m+1<<":"<<d;
            }
    }   else{
        cout<<j<<":"<<m<<":"<<(d+1);
    }

    return 0;
}
