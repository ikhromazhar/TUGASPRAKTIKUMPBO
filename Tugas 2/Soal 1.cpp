#include <iostream>
using namespace std;


//deklarasi tipe data linkedlist
typedef string infotype;//membuat alias tipe data
typedef struct Node *address;//pointer untuk node
struct Node {
    infotype data;
    address next;
};

//pointer untuk memulai node dari first
struct List {
    address first;
};

//untuk membuat node baru first menunjut null
bool IsEmpty(List L){
    return (L.first == NULL);
}

//untuk membuat node baru menunjuk null
void CreateEmpty(List *L){
    (*L).first = NULL;
}


//untuk membuat node baru
address Allocation(infotype x){
    address NewElmt = new Node;
    NewElmt->data = x;
    NewElmt->next = NULL;
    return NewElmt;
}

//mencetak data yang ada di node
void CetakList(List L){
    address temp = L.first;
    cout << "\nData Nilai Siswa :" << endl;
    while(temp != NULL && temp->next != NULL){  // cek berpasangan
        cout << "Nama siswa : " << temp->data << endl;
        temp = temp->next;
        cout << "Nilai siswa : " << temp->data << endl;
        temp = temp->next;
        cout << endl;
    }
}

int main(){
    List ll;
    infotype x;
    bool lanjut;
    
    //menjelaskan untuk memilih memasukan data atau tidak
    cout << "Apakah kamu ingin memasukan data nilai siswa?" << endl;
    cout << "Jika iya ketik 1" << endl;
    cout << "Jika tidak ketik 0" << endl;
    cin >> lanjut;
    
    //untuk membuat node baru null dan membuat penamaan node agar bernama NewElmnt
    CreateEmpty(&ll);
    address NewElmnt;

    // perulangan ketika kita memasukan angka 1 kita akan meminta untuk memasukan data kembali, jika memasukan
    // 0 maka program akan berhenti
    while(lanjut){
        cout << "Masukan nama siswa : ";
        cin >> x;
        NewElmnt = Allocation(x);

        if (ll.first == NULL) {
            ll.first = NewElmnt;
        } else {
            address temp = ll.first;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = NewElmnt;
        }

        cout << "Masukan nilai siswa : ";
        cin >> x;
        NewElmnt = Allocation(x);
        address temp = ll.first;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = NewElmnt;
        
     // perulangan ketika kita memasukan angka 1 kita akan meminta untuk memasukan data kembali, jika memasukan
    // 0 maka program akan berhenti
        cout << "Apakah kamu ingin memasukan lagi data nilai siswa?" << endl;
        cout << "Jika iya ketik 1, jika tidak ketik 0" << endl;
        cin >> lanjut;
    }
    
    //output dari node
    CetakList(ll);
}
