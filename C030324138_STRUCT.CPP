#include <iostream>
#include "string.h"
using namespace std;

 struct mahasiswa{
	string nim;
	string nama;
	string alamat;
	float ipk;
 };

int inputData(string *nim, string *nama, string *alamat, float *ipk) {
    cout << "NIM = ";          getline(cin, *nim);
    cout << "Nama = ";         getline(cin, *nama);
    cout << "Alamat = ";       getline(cin, *alamat);
    cout << "IPK = ";          cin >> *ipk;
    cin.ignore();
}

void outputData(const mahasiswa &Lana) {
    system("cls");
    cout << "\n------------- Data Pribadi ------------- :\n";
    cout << "NIM    : " << Lana.nim << endl;
    cout << "Nama   : " << Lana.nama << endl;
    cout << "Alamat : " << Lana.alamat << endl;
    cout << "IPK    : " << Lana.ipk << endl;
    cout << "---------------------------------------\n";
}

int main() {
    mahasiswa Lana;
    inputData(&Lana.nim, &Lana.nama, &Lana.alamat, &Lana.ipk);
    outputData(Lana);
    return 0;
}