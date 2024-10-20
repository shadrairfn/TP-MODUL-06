#include <iostream>
#include "dll.h"

using namespace std;

void showData(List L) {
    address p = first(L);
    while (p != NULL) {
        cout << info(p).namaBand << " - " << info(p).judulLagu << endl;
        p = next(p);
    }
    cout << endl;
}

void inputElemen(infotype &data) {
    cout << "Masukan nama band : ";
    cin >> data.namaBand;
    cout << "Masukan judul lagu : ";
    cin >> data.judulLagu;
    cout << endl;

}
int main()
{
    List L1, L2, L3;
    address P;
    infotype data;

    // create list

    createList_103012300012(L1);
    createList_103012300012(L2);

    cout << "Apakah list pertama masih kosong? (1/0) : " << isEmpty_103012300012(L1) << endl;
    cout << "Apakah list kedua masih kosong? (1/0) : " << isEmpty_103012300012(L2) << endl;
    cout << endl;

    // input data pertama
    inputElemen(data);

    // create element

    createNewElmt_103012300012(data, P);

    // insert elemen ke list

    insertFirst_103012300012(L1, P);

    // show data setelah insert first

    cout << "Hasil setelah insertFirst data pertama : " << endl;
    showData(L1);

    // input data kedua
    inputElemen(data);

    //create elemen ke list

    createNewElmt_103012300012(data, P);

    // insert elemen ke list
    insertLast_103012300012(L1, P);

    // show data

    cout << "Hasil setelah insertLast data kedua : " << endl;
    showData(L1);

    // input data ketiga

    inputElemen(data);

    //create elemen ke list

    createNewElmt_103012300012(data, P);

    // insert elemen setelah data pertama

    inserAfter_103012300012(L1, first(L1), P);

    // show data

    cout << "Hasil setelah insertAfter data ketiga setelah data pertama : " << endl;
    showData(L1);

    // input data keempat

    inputElemen(data);

    // create elemen ke list

    createNewElmt_103012300012(data, P);

    // insert elemen

    insertFirst_103012300012(L1, P);

    // show data

    cout << "Hasil setelah insertFirst data keempat : " << endl;
    showData(L1);

    // input lagu yang ingin dicari

    string lagu;

    cout << "Masukan judul lagu yang ingin anda cari : " << endl;
    cin >> lagu;
    cout << endl;

    // mencari lagu yang sudah diinput

    address q = findLagu_103012300012(lagu, L1);
    cout << info(q).namaBand << " - " << info(q).judulLagu << endl;
    cout << endl;

    // input lagu yang ingin dihapus

    cout << "Masukan judul lagu yang ingin dihapus : ";
    cin >> lagu;
    cout << endl;

    // Menghapus lagu dari list

    removeLagu_103012300012(lagu, L1);

    // show data

    cout << "Hasil setelah lagu dihapus : " << endl;
    showData(L1);

    // cek apakah list mana yang masih kosong

    cout << "Apakah list pertama masih kosong? (1/0) : " << isEmpty_103012300012(L1) << endl;
    cout << "Apakah list kedua masih kosong? (1/0) : " << isEmpty_103012300012(L2) << endl;
    cout << endl;

    // input data pertama
    inputElemen(data);

    // create element

    createNewElmt_103012300012(data, P);

    // insert elemen ke list

    insertFirst_103012300012(L2, P);

    // show data setelah insert first

    cout << "Hasil setelah insertFirst data pertama : " << endl;
    showData(L2);

    // input data kedua
    inputElemen(data);

    //create elemen ke list

    createNewElmt_103012300012(data, P);

    // insert elemen ke list
    insertLast_103012300012(L2, P);

    // show data

    cout << "Hasil setelah insertLast data kedua : " << endl;
    showData(L2);

    // input data ketiga

    inputElemen(data);

    //create elemen ke list

    createNewElmt_103012300012(data, P);

    // insert elemen setelah data pertama

    inserAfter_103012300012(L2, first(L2), P);

    // show data

    cout << "Hasil setelah insertAfter data ketiga setelah data pertama : " << endl;
    showData(L2);

    // input data keempat

    inputElemen(data);

    // create elemen ke list

    createNewElmt_103012300012(data, P);

    // insert elemen

    insertFirst_103012300012(L2, P);

    // show data

    cout << "Hasil setelah insertFirst data keempat : " << endl;
    showData(L2);

    // input lagu yang ingin dicari

    cout << "Masukan judul lagu yang ingin anda cari : " << endl;
    cin >> lagu;
    cout << endl;

    // mencari lagu yang sudah diinput

    q = findLagu_103012300012(lagu, L2);
    cout << info(q).namaBand << " - " << info(q).judulLagu << endl;
    cout << endl;

    // input lagu yang ingin dihapus

    cout << "Masukan judul lagu yang ingin dihapus : ";
    cin >> lagu;
    cout << endl;

    // Menghapus lagu dari list

    removeLagu_103012300012(lagu, L2);

    // show data

    cout << "Hasil setelah lagu dihapus : " << endl;
    showData(L2);

    // menggabungkan L1 dan L2

    concat_103012300012(L1, L2, L3);

    // menampilkan isi dari L3

    cout << "Isi dari L3 : " << endl;
    showData(L3);
    return 0;
}
