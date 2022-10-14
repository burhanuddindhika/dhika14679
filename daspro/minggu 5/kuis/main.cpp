#include <iostream>

using namespace std;

int main()
{
    int jam,lembur,gaji,total1,total2,jamlembur;
    cout <<"masukan jam kerja 1 minggu";
    cin>> jam;

    if (jam>48)
    {
        jamlembur=jam-48;
        cout <<"upah lembur"<<(48*150000)+(jamlembur*100000)<<endl;
    }

    cout<<"6upah non lembur"<<jam*150000;
    return 0;
}
