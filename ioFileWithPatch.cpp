#include <fstream>
#include <iostream>
#include<string>
using namespace std;

int main() {
    string baris;
    string NamaFile;

    cout << "Masukan Nama File : ";
    cin >> NamaFile;

    // Membuka file dalam mode menulis.
    ofstream outfile;
    // Menunjuk ke sebuah nama file
 outfile.open(NamaFile = ".txt", ios::out);

    cout << ">= Menulis file, \'q\' untuk keluar " << endl;

    //unlimited loop untuk menulis
    while (true) {
        cout << "- ";
        //mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        //loop akan berhenti jika anda memasukan karakter q
        if (baris == "q") break;
        //menulis dan memasukan nilai dari 'baris' kedalam file
        outfile << baris << endl;
    }
    //selesai dalam menulis sekarang tutup filenya
    outfile.close();

    //membuka file dalam mode membaca
    ifstream infile;

    //menunjuk ke sebuah file
    infile.open(NamaFile = ".txt", ios::in);

};