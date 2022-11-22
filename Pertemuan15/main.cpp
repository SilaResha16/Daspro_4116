#include <iostream>

using namespace std;

int main()
{
    /*
    for(int i = 0; i < 4; i++){
        if(i == 2){
            continue;
        }
        if(i > 3){
            break;
        }
        cout << i << endl;
    }
    */
    /*
    for(int i = 0; i <=1; i++){
        for(int j = 0; j <= 1; j+=){
            cout << i << endl;
        }
    }
    */
    /*
    for(int i = 0; i <=1; i++){
            cout << i << endl;
        for(int j = 0; j <= 1; j++){
            cout << j << endl;
        }
    }
    */

    while (true){
    cout << endl;
    cout << "======Daftar Makanan======" << endl;
    cout << "1. Nasi Kerikil" << endl;
    cout << "2. Rica Rica Bekicot" << endl;
    cout << "3. Pepes Brotowali" << endl;
    cout << "4. Kepiting Presto" << endl;

    int x;
    cout << "Masukkan Kode Pesanan Anda : ";
    cin >> x;
    cout << endl;
    switch(x){
    case 1:
        cout << "Memesan Nasi Kerikil" << endl;
        break;
    case 2:
        cout << "Memesan Rica Rica Bekicot" << endl;
        break;
    case 3:
        cout << "Memesan Pepes Brotowali" << endl;
        break;
    case 4:
        cout << "Memesan Kepiting Presto" << endl;
        break;
    default:
        cout << "Maaf, kode makanan tidak ditemukan" << endl;
    }
  }
  return 0;
}
