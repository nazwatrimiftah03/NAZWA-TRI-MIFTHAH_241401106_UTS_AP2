#include <iostream>
using namespace std;

int main() {
    system("cls");
    int kode1, kode2, kode3;

    cout << "kode ke-1 : ";
    cin >> kode1;
    cout << "kode ke-2 : ";
    cin >> kode2;
    cout << "kode ke-3 : ";
    cin >> kode3;
    
    if (kode1 >= 50 && kode2 >= 50 && kode3 >= 50 && (kode1 + kode2 + kode3 >= 200)) {
        cout << "Aman Lek" << endl;
    } else {
        cout << "Bahaya!! Hati-Hati Lek" << endl;
    }
}
