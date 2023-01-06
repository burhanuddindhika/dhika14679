#include <iostream>

using namespace std;

int main()
{
    int a[10];
    cout << "masukan data bilangan" << endl;
    for(int i=0;i<10;i++){
        cout<<"masukan bilangan ke-"<<i+1<<" : ";
        cin>>a[i];
    }
    for(int i=0;i<10;i++){
        cout<<a[i]<<"\t :";
        for (int x=0;x<a[i];x++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
