//Implementasi Program Stack Perpustakaan

#include <iostream>
#define MAX 5
using namespace std;

struct tumpukan_buku {
    int top;
    int antrian[MAX];
} perpus;

void inisialisasi() {
    perpus.top = -1;
}

bool kondisikosong() {
    return perpus.top == -1;
}

bool kondisipenuh() {
    return perpus.top == MAX - 1;
}

void inputdata() {
    if (kondisipenuh()) {
        cout << "\nAntrian Penuh" << endl;
    } else {
        perpus.top++;
        cout << "\nMasukkan Antrian = ";
        cin >> perpus.antrian[perpus.top];
        cout << "Antrian " << perpus.antrian[perpus.top] << " Telah Masuk ke Tumpukan Buku " << endl;
    }
}

void hapusdata() {
    if (kondisikosong()) {
        cout << "\nAntrian Kosong" << endl;
    } else {
        cout << "Antrian " << perpus.antrian[perpus.top] << " Telah di Hapus" << endl;
        perpus.top--;
    }
}

void tampildata() {
    if (kondisikosong()) {
        cout << "Antrian Kosong";
    } else {
        cout << "Antrian : ";
        for (int i = perpus.top; i >= 0; i--) {
            cout << perpus.antrian[i] << ((i == 0) ? "" : ",");
        }
        cout << endl;
    }
}

int main() {
    int pilihan;
    inisialisasi();

    do {
        tampildata();
        cout << "\n1. Masukkan Data\n"
             << "2. Hapus Data\n"
             << "3. Keluar\n"
             << "Masukkan Pilihan: ";
        cin >> pilihan;
        switch (pilihan) {
        case 1:
            inputdata();
            break;
        case 2:
            hapusdata();
            break;
        default:
            cout << "Pilihan Tidak Tersedia" << endl;
            break;
        }
    } while (pilihan != 3);

    return 0;
}

