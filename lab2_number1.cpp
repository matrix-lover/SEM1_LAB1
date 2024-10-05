//  Created by Shamil Nurmagomedov on 05.10.2024.
//

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    
    // 1
    if (x % 2 && y % 2 == 0) {cout << "condition is true";} else {cout << "condition is false";}
    
    // 2
    if ((x < 20 || y < 20) && !(x && y > 20)) {cout << "condition is true";} else {cout << "condition is false";}
    
    // 3
   if (x == 0 or y == 0) {cout << "condition is true";} else {cout << "condition is false";}
    
    // 4
    if (x and y and z < 0) {cout << "condition is true";} else {cout << "condition is false";}
    
    // 5
    if (x % 5 == 0) {cout << "condition is true";}
    else if (y % 5 == 0) {cout << "condition is true";}
    else if (z % 5 == 0) {cout << "condition is true";}
    else {cout << "condition is false";}
    
    // 6
    if (x or y or z > 100) {cout << "condition is true";} else {cout << "condition is false";}
    
    return 0;
}
