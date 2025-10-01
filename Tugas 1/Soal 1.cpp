#include <iostream>
using namespace std;

//subprogram untuk fungsi penjumlahan bilangan ganjil
void JumlahGanjil(int y, int *x){
    for(int i = 1; i < y; i++){//jika i = 1 lebih kecil dari y makan i akan bertammbah
        if(i % 2 == 1){//jika i modulo 2 sama dengan 1 maka hasilnya akan ganjil
            *x += i;//jika hasilnya ganjil maka nilai tersebut akan di simpan dan di jumlahkan di *x
        }
    }  
}

int main() {
   int a = 20, b = 0;//variabel untuk mengisi parameter subprogram
   JumlahGanjil(a,&b);//pemanggilan subprogram 
   cout << "hasil dari penjumlahan bilangan ganjil : " << b;//hasil pemanggilan variabel b setelah penjumlahan di subprogram
}
