#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string baris;

    // membuka file dalam mode menulis
    ofstream outfile;
     // menunjuk kesebuah nama file
    outfile.open("contohfile.txt");

     cout << ">= Menulis file, \'q\' untuk keluar" << endl;
//unlimeted loop untuk menulis
    while (true) {
        cout << "- ";
    }