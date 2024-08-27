#include <iostream>
#include <cmath> 
using namespace std;

double pow(double x, int y) {
   
    if (y == 0)
        return 1;
    
    if (y == 1)
        return x;

    
    bool isNegative = (y < 0);
    int abs_y = abs(y);

    double temp = pow(x, abs_y / 2);

    double result;
    if (abs_y % 2 == 0) 
        result = temp * temp; 
    else
        result = x * temp * temp;

    
    return isNegative ? 1 / result : result;
}

int main() {
    double x;
    int y;
    cin >> x >> y;

    cout << pow(x, y) << endl; 
    return 0;
}