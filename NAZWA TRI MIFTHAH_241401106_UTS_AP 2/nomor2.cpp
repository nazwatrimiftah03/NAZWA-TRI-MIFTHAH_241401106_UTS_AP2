#include <iostream>
#include <string>
using namespace std;  
int jumlahDigit(int angka) {
    int total = 0;
    while (angka != 0) {
        total += angka % 10; 
        angka /= 10;         
    }
    return total;
}
bool validKode(int kode) {
    return kode >= 100 && kode <= 999;
}
int main() {
    system ("cls");
    int kode;
    cout << " PROGRAM KODE RAHASIA MAINAN ANAK " << endl;
    cout << "Masukkan kode rahasia (3 digit): ";
    cin >> kode;
    if (!validKode(kode)) {
        cout << "Kode Salah! Harus terdiri dari 3 digit angka jadi jumlah ERROR." << endl;
    } else {
        int hasil = jumlahDigit(kode);
        cout << "Jumlah total dari ketiga digit = " << hasil << endl;
        cout << "Info ";
        if (hasil % 2 == 0) {
            cout << "Jumlah digit adalah GENAP." << endl;
        } else {
            cout << "Jumlah digit adalah GANJIL." << endl;
        }
    }
}
