#include <iostream>

using namespace std;

long long power(long long num, long long pow){
    long long res = 1;
    while (pow > 0){
        if (pow % 2 == 1){
            res *= num;
        }
        num *= num;
        pow /= 2;
    }

    return res;
}

int main(){
    long long number, p;
    cin >> number >> p;
    number = (power(number, p));
    cout << number;

    return 0;
}