#include <iostream>

using namespace std;

struct tiket {
    string nama;
    int no_id;
    string nama_kereta;
    string berangkat;
    string kode_book;
    string tipe_kursi;
    string no_kursi;
    string tiba;
};

tiket kereta;

int main () {

    kereta.nama = "FAUZI IRFAN SYAPUTRA";
    kereta.no_id = 21103071;
    kereta.nama_kereta = "ARGO ANGGREK PAGI / 2";
    kereta.berangkat = "GAMBIR (GMR)\n28 JUNI 2017; 09:30 WIB";
    kereta.kode_book = "WIK151";
    kereta.tipe_kursi = "UMUM";
    kereta.no_kursi = "EKS 7 ; 12A";
    kereta.tiba = "SURABAYA PASAR TURI (SBI)\n28 JUNI 2017; 18:30 WIB";


    cout << "\t\tBOARDING PASS" << endl;
    cout << "Nama :  " << endl;
    cout << kereta.nama << endl << endl;
    cout << "Nomor Identitas :  " << endl;
    cout << kereta.no_id << endl << endl;
    cout << "Kereta Api :  " << endl;
    cout << kereta.nama_kereta << endl << endl;
    cout << "Berangkat :  " << endl;
    cout << kereta.berangkat << endl << endl;
    cout << "Kode Booking :  " << endl;
    cout << kereta.kode_book << endl << endl;
    cout << "Tipe Penumpang :  " << endl;
    cout << kereta.tipe_kursi << endl << endl;
    cout << "No Tempat Duduk :  " << endl;
    cout << kereta.no_kursi << endl << endl;
    cout << "Perikiraan Tiba :  " << endl;
    cout << kereta.tiba << endl << endl;

    return 0;

}
