#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <string.h>
#define nmax 5

using namespace std;

int n = 0;
struct Tugas1
{
    int nilai;
    string nama;
    string matkul;
};

Tugas1 data_tugas[nmax];

void update_data()
{
    cout << "pilih data yang akan di update :";
    cin >> n;

    n = n - 1;
    if (n < nmax)
    {
        cout << "Nilai Mahasiswa : ";
        cin >> data_tugas[n].nilai;
        cout << "Nama Mahasiswa : ";
        cin >> data_tugas[n].nama;
        cout << " Masukkan Matkul : ";
        cin >> data_tugas[n].matkul;
    }
    else
    {
        cout << " Data yang anda ingin perbarui tidak ada ";
    }

}

int main()
{
    update_data();
}
