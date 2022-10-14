#include <iostream>

using namespace std;

int main()
{
    //kamus
    int s;

    //algoritma
    cout << "masukan suhu : ";
    cin >> s;
    if (s < 0){
        cout << "beku";
    }   else if(s==0){
        cout<<"beku cair";
    }   else if(0 < s && s < 100){
        cout << "cair";
    }   else if(s==100){
        cout<<"cair uap";
    }   else if(s>100){
        cout << "uap";
    }

    return 0;
}
