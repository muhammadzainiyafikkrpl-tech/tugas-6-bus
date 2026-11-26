#include <iostream>
#include <string>
using namespace std;

void tampilkanMenu() {
    cout << "\n=== TIKET BUS ===\n"
         << "1. Malang-Surabaya (35rb)\n"
         << "2. Malang-Pasuruan (20rb)\n"
         << "3. Malang-Jombang (25rb)\n"
         << "Pilih (1-3): ";
}

void cetakNota(const string& rute, int hargaSatuan, int jumlah, int subtotal) {
    cout << "\n======= NOTA TIKET =======\n"
         << "Rute         : " << rute << "\n"
         << "Harga Satuan : Rp " << hargaSatuan << "\n"
         << "Jumlah Tiket : " << jumlah << "\n"
         << "Total Bayar  : Rp " << subtotal << "\n"
         << "========================\n"
         << "Terima Kasih!\n";
}

int main() {
    int pilihan, jumlah;
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

        if (jumlah <= 0) {
            cout << "Jumlah penumpang harus lebih dari 0!\n";
            continue;
        }

        string rute;
        int harga = 0;

        if (pilihan == 1) {
            rute = "Malang-Surabaya";
            harga = 35000;
        } else if (pilihan == 2) {
            rute = "Malang-Pasuruan";
            harga = 20000;
        } else {
            rute = "Malang-Jombang";
            harga = 25000;
        }

        int subtotal = harga * jumlah;
        cetakNota(rute, harga, jumlah, subtotal);

        do {
            cout << "\nPesan lagi (p) atau selesai (s)? ";
            cin >> lanjut;
            if (lanjut != 'p' && lanjut != 'P' && lanjut != 's' && lanjut != 'S') {
                cout << "Input tidak valid! Masukkan 'p' untuk pesan lagi atau 's' untuk selesai.\n";
            }
        } while (lanjut != 'p' && lanjut != 'P' && lanjut != 's' && lanjut != 'S');

    } while (lanjut == 'p' || lanjut == 'P');

    cout << "\nTerima Kasih sudah memesan di loket bus Yafik Family!\n";
    return 0;
}
