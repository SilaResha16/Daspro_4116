#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int x;

    cout << "input bil : ";
    cin >> x;

    while (x != 9999){
        cout << x;
        sum = sum + x;

        cout << "\ninput bil : ";
        cin >> x;
    }
    cout << "Jumlah Angka = " << sum;

    return 0;
}
