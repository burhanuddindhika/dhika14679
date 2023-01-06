#include <iostream>

using namespace std;

int main()
{
    //kamus
    int x[3][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    for(int i=0;i<3;i++){
        for(int a=0;a<4;a++){
            cout<<x[i][a];
            cout<<"\t";
        }
        cout<<endl;
    }

    return 0;
}
