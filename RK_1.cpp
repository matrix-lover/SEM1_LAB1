//  Created by Shamil Nurmagomedov on 05.10.2024.

//Вывести на печать пять первых слагаемых суммы выражения (1/2^n) for(int n = 1; i <= 5, ++i) и сумму этих слагаемых
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n;
    double sum = 0;
    for (n = 1; n <= 5; ++n) {
        cout << n << " слагаемое: " << pow(0.5, n) << endl;
        sum = sum + pow(0.5, n);
    }
    cout << "сумма: " << sum << endl;
    
    return 0;
}
