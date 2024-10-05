//  Created by Shamil Nurmagomedov on 05.10.2024.

//Вывести на печать пять первых слагаемых суммы выражения (1/2^n) for(int n = 1; i <= 5, ++i) и сумму этих слагаемых
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    double sum = 0;
    for (n = 1; n <= 5; ++n) {
        double a = pow(1/2, n);
        cout << a << endl;
        sum = sum + a;
    }
    cout << sum << endl;
    return 0;
}
