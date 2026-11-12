#include <iostream>
using namespace std;

void tampilkanMenu() {
    cout << "\n=== TIKET BUS ===\n"
         << "1. Malang-Surabaya (35rb)\n"
         << "2. Malang-Pasuruan (20rb)\n"
         << "3. Malang-Jombang (25rb)\n"
         << "Pilih (1-3): ";
}

void cetakStruk(int totalBayar) {
    cout << "\n==================\n"
         << "Total Bayar: Rp " << totalBayar << "\n"
         << "Terima Kasih!\n";
}

int main() {
    int pilihan, jumlah, total = 0;
    char lanjut;

    do {
        tampilkanMenu();
        cin >> pilihan;
        
        if (pilihan < 1 || pilihan > 3) {
            cout << "Pilihan tidak valid!\n";
            continue;
        }

        cout << "Jumlah penumpang: ";
        cin >> jumlah;

        int harga = (pilihan == 1) ? 35000 : (pilihan == 2) ? 20000 : 25000;
        total += harga * jumlah;

        cout << "Pesan lagi? (y/n): ";
        cin >> lanjut;
    } while (lanjut == 'y' || lanjut == 'Y');

    cetakStruk(total);
    return 0;
}
