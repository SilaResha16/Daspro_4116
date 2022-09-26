#include <iostream>
#include <stdio.h>

using namespace std;

/*
Nama : Sila Resha Nugraha
NIM : A11.2022.14605
Kel : 4116

luas_sisi_depan == luas_sisi_belakang
luas_sisi_kanan == luas_sisi_kiri
luas_alas == luas_atap
 */

int main()
{
    float panjang,lebar,tinggi,luas_alas,luas_sisi_depan,luas_luas_sisi_kanan,luas_permukaan_balok;
    cout << "Masukkan Panjang : " << endl;
    cin >> panjang;
    cout << "Masukkan Lebar : " << endl;
    cin >> lebar;
    cout << "Masukkan Tinggi : " << endl;
    cin >> tinggi;
    luas_alas = panjang * lebar;
    luas_sisi_depan = panjang * tinggi;
    luas_luas_sisi_kanan = lebar * tinggi;
    luas_permukaan_balok = 2 (luas_alas + luas_sisi_depan + luas_luas_sisi_kanan);
    cout << "Luas Permukaan Balok : " << luas_permukaan_balok << endl;
    return 0;
}
