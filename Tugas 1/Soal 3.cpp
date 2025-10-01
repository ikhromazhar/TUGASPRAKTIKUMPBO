#include <iostream>
using namespace std;


int main() {
	int n;//variabel untuk user memasukan ukuran array dan ukuran perulangan

	cout << "masukan ukuran array : ";//keterangan untuk memasukan ukuran array
	cin >> n;//inputan untuk user memasukan ukuran array
	int array[n];//deklarasi array
	int *ptr = array;//deklarasi pointer dengan variabel *ptr yang dimana nilai dari array akan = *ptr

//perulangan untuk input element array
	for(int i = 0; i < n; i++) {
		cin >> *(ptr + i);
	}
//perulangan untuk output element array sebelum dibalik
	cout << "array sebelum dibalik : ";
	for(int i = 0; i < n; i++) {
		cout << *(ptr + i) << " ";
	}

//perulangan untuk membalik element di array
	for(int i = 0; i < n / 2; i++) { //perulangan jika i = 0 lebih kecil dari n/2(digunakan agar perulangan berhenti di tengah) maka i akan bertambah
		int temp = *(ptr + i);//deklarasi variabel temporer untuk menyimpan sementara data array
		*(ptr + i) = *(ptr + (n - 1 - i));//variabel pointer array akan mengambil data terakhir yang ada di array
		*(ptr + (n - 1 - i)) = temp; //kemudian nilai awal tadi yang sudah di simpan di temporer di berikan di element terakhir
	}
	cout << endl;
	//perulangan untuk output element array setelah dibalik
	cout << "array sesudah dibalik : ";
	for(int i = 0; i < n; i++) {
		cout << *(ptr + i) << " ";
	}
}
