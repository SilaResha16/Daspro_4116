#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    float temperature;
    cout << "Masukkan Temperature : " << endl;
    cin >> temperature;
    if (temperature <= 0)
    {
        cout << "Ice" << endl;
    }else if (temperature > 100){
        cout << "Gas" << endl;
    }else{
        cout << "Liquid" << endl;
    }
    return 0;
}
