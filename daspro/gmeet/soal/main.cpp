#include <iostream>

using namespace std;

int main()
{
    //kamus
    int th;
    //algoritma
    cout << "masukan tahun" << endl;
    cin>>th;
    if ((th%100!=0)&&(th%4==0)){
        cout<<th<<" merupakan tahun kabisat";
    }else{
        cout<<th<<" bukan tahun kabisat";
    }
    return 0;
}
