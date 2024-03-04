
#include <iostream>
using namespace std;

int main()
{
    float nMat, nFisika, rerata;
    string status;

    cout << "masukan nilai matematika";
    cin >> nMat;
    cout << "Masukkan nilai fisika ";
    cin >> nFisika;

    rerata = (nFisika + nMat) / 2;

    if (rerata >= 60) {
        status = "Lulus jalur rerata";
    }
    else if (nMat >= 70) {
        status = "Lulus jalur matematika";
    }
    else
    {
        status = " Tidak Lulus";
    }

    cout << "Statusnya adalah" << status << endl;

    system("pause");
}
