#include <iostream>

using namespace std;

int main()
{
    int x;
    int i = 1;
    int sum = 0;

    cout << "input bil : ";
    cin >> x;

    while (x != 9999){
        cout << x << endl;
        sum += x;
        i += 1;

        cout << "input bil : ";
        cin >> x;
    }

    cout << "Jumlah angka = " << sum << endl;
    cout << "Jumlah cacah angka = " << i-1 << endl;

    return 0;
}
