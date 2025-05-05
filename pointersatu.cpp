#include <iostream>
using namespace std;

class mahasiswa
{
public :
    int nim;
    void showNim()
    {
        cout <<"NO induk = " <<nim << endl;
    }

};
int main()
{

    mahasiswa mhs;//object mhs
    mhs.nim =2024;
    mhs.showNim();//member access operator

    mahasiswa &refMhs =mhs;//pointer reference refmhs
}