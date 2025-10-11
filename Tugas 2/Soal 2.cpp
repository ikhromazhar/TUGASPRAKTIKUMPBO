#include <iostream>
using namespace std;

//struktur node untuk menyimpan data siswa
struct node {
    string nama;
    int nilai;
    node* next;
};

//pointer awal linked list
node* head = nullptr;

//fungsi untuk menambah data siswa dengan posisi terurut (ascending)
void tambah_siswaTersort(string nama, int nilai) {
    node* baru = new node;
    baru->nama = nama;
    baru->nilai = nilai;
    baru->next = nullptr;

    //list kosong atau nilai baru lebih kecil dari head
    if (head == nullptr || nilai < head->nilai) {
        baru->next = head;
        head = baru;
    } else {
        node* bantu = head;
        //mencari posisi yang tepat untuk insert
        while (bantu->next != nullptr && bantu->next->nilai < nilai) {
            bantu = bantu->next;
        }
        baru->next = bantu->next;
        bantu->next = baru;
    }

    cout << "Data siswa berhasil ditambahkan secara terurut!\n";
}

//fungsi untuk menampilkan semua data siswa
void tampilkan_data() {
    if (head == nullptr) {
        cout << "Belum ada data siswa.\n";
        return;
    }

    node* bantu = head;
    cout << "\nDaftar Nilai Siswa (Ascending):\n";
    cout << "-------------------\n";
    while (bantu != nullptr) {
        cout << "Nama : " << bantu->nama << "\n";
        cout << "Nilai: " << bantu->nilai << "\n";
        cout << "-------------------\n";
        bantu = bantu->next;
    }
}

int main() {
    int pilih;
    string nama;
    int nilai;

    do {
        cout << "\n=== SISTEM NILAI SISWA (TERSORTING) ===\n";
        cout << "1. Tambah Data Siswa\n";
        cout << "2. Tampilkan Semua Data\n";
        cout << "3. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilih;

        switch (pilih) {
            case 1:
                cout << "masukkan nama siswa: ";
                cin >> nama;
                cout << "masukkan nilai siswa: ";
                cin >> nilai;
                tambah_siswaTersort(nama, nilai);
                break;
            case 2:
                tampilkan_data();
                break;
            case 3:
                cout << "Program selesai.\n";
                break;
            default:
                cout << "Pilihan tidak valid!\n";
        }
    } while (pilih != 3);

    return 0;
}
