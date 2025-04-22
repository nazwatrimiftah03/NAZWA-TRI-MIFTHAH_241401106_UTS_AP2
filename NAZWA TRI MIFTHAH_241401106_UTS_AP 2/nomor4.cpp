#include <iostream>
#include <string>
using namespace std;

int main() {
    system ("cls");
    string daftar;
    int jumlah = 0;
    
    cout << "Masukkan daftar judul buku: ";
    getline(cin, daftar);

    daftar += " ";
    int i = 0;
    bool dalamKata = false;
    while (i < daftar.length()) {
        if (daftar[i] != ' ' && !dalamKata) {
            dalamKata = true;
            jumlah++;
        }
        else if (daftar[i] == ' ') {
            dalamKata = false;
        }
        i++;
    }  
    cout << "Jumlah judul buku: " << jumlah << endl;
}

