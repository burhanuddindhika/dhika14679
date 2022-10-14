/*program positif genap ganjil
{program untuk sec bilangan genap atau ganjil}
by: burhanuddin dhika firmansyah
tgl: 14-10-2022
*/

#include <iostream>

using namespace std;

int main()
{
    //kamus
    int x;

    //algoritma
    cout << "masukan bilangan" << endl;
    cin>>x;
    if (x>0){
        if(x%2==0){
            cout<<x<<" adalah bilangan positif genap";
        }else{
            cout<<x<<" adalah bilangan positif ganjil";
        }
    }else{
        cout<<x<<" bukan bilangan positif";
    }
    return 0;
}
