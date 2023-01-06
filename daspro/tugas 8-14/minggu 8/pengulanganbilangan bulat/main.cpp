#include <iostream>

using namespace std;

int main()
{
    //kamus
    int i,n;

    //algoritma
    i=1;
    cout<<"jumlah pengulangan : ";
    cin>>n;

    //for
    for(;n>0;n--;i++){
        cout<<"i: "<<i<<"  n: "<<n<<endl;
    }

    //while
    /*while(n--){
        cout<<i<<endl;
        i++;
        }
    */
    /*do{
        cout<<i<<endl;
        i++;
        n--;
    }while(n>0);
    */
    return 0;
}
