#include <iostream>
using namespace std;

struct detailAlamat{
    string desa;
    string kota;
};

struct orang{
    string nama;
    detailAlamat alamat;
    int umur;
};

int main (){
    //deklarasi variable struct
    orang mhs;
    //mengisi data
    cout<<" isikan data nama : ";
    cin>> mhs.nama;
    cout<<"isikan data desa : ";
    cin>> mhs.alamat.desa;
    cout<<"isikan data kota : ";
    cin>> mhs.alamat.kota;
    cout<<"isikan data umur : ";
    cin>> mhs.umur;
    cout<<endl;

    cout << "Data Tampil" << endl;
    cout << "nama : " << mhs.nama << endl;
    cout << "Desa : " << mhs.alamat.desa << endl;
    cout << "kota : " << mhs.alamat.kota << endl;
    cout << "umur : " << mhs.umur << endl;
}