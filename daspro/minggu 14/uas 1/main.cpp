#include <iostream>

using namespace std;

int main()
{
    int n,x=1,y=1;
    cout << "input jumlah pengulangan (n) = ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<y<<endl;
        x+=2;
        y+=x;
    }
    return 0;
}
