//
//  main.cpp
//  gdidea.cpp
//Длина отрезка задана в дюймах (1 дюйм=2,54 см). Перевести значение длины в метрическую систему, т.е. выразить ее в метрах, сантиметрах и миллиметрах. Так, например, 21 дюйм = 0 м 53 см 3,4 мм.

#include <iostream>
#include <string>

using namespace std;

int main() {
    double a;
    cin >> a; // для миллиметров(дробное число)
    int b = a; // для метров и сантиметров
    int metr = b * 254 / 10000; // умножение на 0.0254 и округление в меньшую сторону
    
    int smetr = (b * 254 / 100) - metr * 100; // умножение на 2.54 и вычитание метров, переведенных в сантиметры
    
    double millimetr = (a * 25.4) - metr * 1000 - smetr * 10; // умножение на 25.4, и вычетание метров и сантиметров, переведенных в миллиметры
    
    cout << metr << " м "<< smetr << " см " << millimetr << " мм" << endl;
    
    // при вводе числа больше 99 миллиметры вычисляются неверно
    
    
    return 0;
}

