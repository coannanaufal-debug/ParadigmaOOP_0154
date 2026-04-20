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
int main() {
    Barang eletronik;
    eletronik.nama = "Laptop";
    eletronik.jumlah = 10;
    eletronik.kategori = "Elektronik";
    eletronik.tanggalproduksi = "2023-01-01";
    eletronik.printData();
    cout << endl;

    Barang nonEletronik;
    nonEletronik.nama = "Buku";
    nonEletronik.jumlah = 5;
    nonEletronik.kategori = "nonElektronik";
    nonEletronik.tanggalproduksi = "2024-01-01";
    nonEletronik.printData();
    
}
