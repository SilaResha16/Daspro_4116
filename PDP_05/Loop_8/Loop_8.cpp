#include <iostream>

using namespace std;

int main()
{
    int x;
    int i = 0;

    cout << "input bil : ";
    cin >> x;

    while (x != 9999){
        cout << x << endl;
        i = i+1;

        cout << "input bil : ";
        cin >> x;
    }

    cout << "Jumlah Angka = " << i;

    return 0;
}
