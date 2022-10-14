#include <iostream>

using namespace std;

int main()
{
    //kamus
    int code;

    //algoritma
    cout << "masukan code pesanan" << endl;
    cin>>code;

    switch (code)
    {
        case 1 :cout<<"anda memesan nasi ";break;
        case 2 :cout<<"anda memesan pepes";break;
        case 3 :cout<<"anda memesan kepiting";break;
        default :cout<<"kode salah";break;

    }

    return 0;
}
