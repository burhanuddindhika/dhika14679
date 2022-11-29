#include <iostream>

using namespace std;
int main()
{
    int x,y,z=0,i;
    char b;
    string a;

    cout<<"anda ingin menjumlahkan bilangan (genap/ganjil) :";
    cin>>a;
    if(a=="genap"){
        cout << "masukan range : " ;
    cin>>x>>y;
    cout<<"apakah angka pertama dan terakahir dihitung(y/t) : ";
    cin>>b;
        if(b=='y'||b=='Y'){
            for(i=x;i<=y;i++){
                for(;i%2==0;i++){
                    z+=i;
                }
            }cout<<z;
        }else if(b=='t'||b=='T'){
            for(i=x;i<y;i++){
                for(;i%2==0;i++){
                    z+=i;
                }
            }
            if(x%2==0){
                cout<<z-x;
            }else cout<<z;

        }
    }else if(a=="ganjil"){
                if(b=='y'||b=='Y'){
            for(i=x;i<=y;i++){
                for(;i%2!=0;i++){
                    z+=i;
                }
            }cout<<z;
        }else if(b=='t'||b=='T'){
            for(i=x;i<y;i++){
                for(;i%2!=0;i++){
                    z+=i;
                }
            }
            if(x%2!=0){
                cout<<z-x;
            }else cout<<z;

        }
    }else {
        cout<<"input salah";
    }
    return 0;
}
