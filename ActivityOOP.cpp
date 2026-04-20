#include <iostream>
using namespace std;

class Barang {
public:
    string nama;
    int jumlah;
    string kategori;
    string tanggalproduksi;

    void printData(){
        cout << "Nama Barang       : " << nama << endl;
        cout << "Jumlah Barang     : " << jumlah << endl;
        cout << "Kategori Barang   : " << kategori << endl;
        cout << "Tanggal Produksi  : " << tanggalproduksi << endl;
    } 
};