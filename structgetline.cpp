#include <iostream>
#include <string>
using namespace std;

struct detailAlamat
{
    string desa;
    string kota;
};

struct orang
{
    string nama;
    detailAlamat alamat;
    int umur;
};

int main()
{
    // deklarasi variable struct
    orang mhs[3];

    // mengisi data
    for (int i = 0; i <= 2; i++)
    {cout << "Isikan data nama : ";
    getline(cin, mhs[i].nama);
    cout << "Isikan data desa : ";
    getline(cin, mhs[i].alamat.desa);
    cout << "Isikan data kota : ";
    getline(cin, mhs[i].alamat.kota);
    cout << "Isikan data umur : ";
    cin >> mhs[i].umur;
    cin.ignore();
    cout << endl;
}

    for (int i = 0; i <= 2; i++)
    {
    cout <<"Data Orang" << endl;
    cout << "Nama : " << mhs[i].nama << endl;
    cout << "Kota : " << mhs[i].alamat.kota << endl;
    cout << "Desa : " << mhs[i].alamat.desa << endl;
    cout << "Umur : " << mhs[i].umur << endl;
    cout << endl;
    }
}