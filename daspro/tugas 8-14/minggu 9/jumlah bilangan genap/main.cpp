#include <iostream>

using namespace std;

int main()
{
    int y,x,n,i,sum=0;
    cout << "masukan range bilangan : ";
    cin>>x>>n;
    y=x;
    for(i=x;i<n;i++){
        if(i==y||i==n){
            continue;

        } if(i%2==0){
                sum+=i;
        }
    }
    cout<<"jumlah bilangan genap antara "<<x<<" sampai "<<n<<" adalah : "<<sum;
    return 0;
}
