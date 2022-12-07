#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n,i;
    string hari[7];

    for(i=1;i<=7;i++){
        cout<<"masukan hari ke-"<<i<<" ";
        cin>>hari[i-1];
    }
    cout<<"==========================\n";
    for(n=1;n<=7;n++){
        cout<<"hari ke "<<n<<" adalah "<<hari[n-1]<<endl;
    }
    return 0;
}
