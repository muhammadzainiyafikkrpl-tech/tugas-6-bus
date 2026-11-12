#include <iostream>
using namespace std;

int main() {
    int pilihan, jumlah, total = 0;
    char lanjut;

    do {
        cout << "\n=== TIKET BUS ===\n1. Malang-Surabaya (35rb)\n2. Malang-Pasuruan (20rb)\n3. Malang-Jombang (25rb)\nPilih (1-3): ";
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

    cout << "\n==================\nTotal Bayar: Rp " << total << "\nTerima Kasih!\n";
    return 0;
}
