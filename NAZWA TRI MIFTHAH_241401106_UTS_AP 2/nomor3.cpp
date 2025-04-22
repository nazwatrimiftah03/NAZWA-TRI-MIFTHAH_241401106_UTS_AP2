#include <iostream>
#include <string>
using namespace std;

int main() {
    system("cls");
    string nama, nim;
    int nilai1, nilai2, nilai3;
    string matkul1 = "Algoritma dan Pemrograman";
    string matkul2 = "Probabilitas dan Statistika";
    string matkul3 = "Sistem Operasi";
    
    cout << "Nama Mahasiswa: ";
    getline(cin, nama);
    cout << "NIM: ";
    getline(cin, nim);
    
    cout << "Nilai Mata Kuliah:" << endl;
    cout << matkul1 << ": ";
    cin >> nilai1;
    cout << matkul2 << ": ";
    cin >> nilai2;
    cout << matkul3 << ": ";
    cin >> nilai3;

    cout << endl;
    cout << matkul1 << ": " << (nilai1 >= 60 ? "Lulus." : "Tidak Lulus. Silakan Ulangi di Tahun Depan Sahabat!") << endl;
    cout << matkul2 << ": " << (nilai2 >= 60 ? "Lulus." : "Tidak Lulus. Silakan Ulangi di Tahun Depan Sahabat!") << endl;
    cout << matkul3 << ": " << (nilai3 >= 60 ? "Lulus." : "Tidak Lulus. Silakan Ulangi di Tahun Depan Sahabat!") << endl;

    float rata_rata = (nilai1 + nilai2 + nilai3) / 3.0;
    cout << "Nilai Rata-rata Semester ini: " << rata_rata << endl;
}
