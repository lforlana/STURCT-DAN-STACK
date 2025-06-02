#include "conio.h"
#include "stdio.h"
#include "string.h"
#include <iostream>

using namespace std;

struct Mahasiswa
{
    float ipk;
    string nim;
    string nama;
    string alamat;
    string jurusan;
    string kelas;
};


int main() {
    struct Mahasiswa Lana;
    Lana.ipk = 3.45;
    Lana.nim = "C030324138";
    Lana.nama = "Lana";
    Lana.alamat = "Sungai Lulut";
    Lana.jurusan = "Teknik Informatika";
    Lana.kelas = "2B";
    

    cout << "NIM: " << Lana.nim << endl;
    cout << "IPK: " << Lana.ipk << endl;
    cout << "Nama: " << Lana.nama << endl;
    cout << "Alamat: " << Lana.alamat << endl;
    cout << "Jurusan: " << Lana.jurusan << endl;
    cout << "Kelas: " << Lana.kelas << endl;
}