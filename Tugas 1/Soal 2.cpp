#include <iostream>
using namespace std;

//subprogram untuk menjalankan operasi Matematika
void OperasiMatematika(int *x, int y, int *z){
    for(int i = 1; i <= y; i++){//jika i = 1 lebih kecil dari y makan i akan bertammbah
        *x += i * i; //operasi penjumlahan bilangan kuadrat atau n pangkat 2 dan hasilnya akan disimpan di variabel *x
        *z *= 2*i - 1;//operasi perkalian bilangan ganjil yang dimana (2xi)-1 hasilnya akan ganjil kemudian akan dikalikan dengan variabel *z
    }
}

int main() {
    int a = 0, b = 20, c = 1;//variabel untuk mengisi parameter subprogram yang dimana c != 0 karena jika = 0 maka hasil dari operasi tersebut bakal 0
    OperasiMatematika(&a,b,&c);//pemanggilan subprogram
    cout << "Hasil dari operasi Matematika : " << endl << "Nilai X : "<< a << endl <<"Nilai Z : "<< c; //output dari program diataas

}
