//third task
#include <iostream>
#include <map>
#include <string>


using namespace std;

map<int, string> roman = {
        {1, "I"},
        {2, "II"},
        {3, "III"},
        {4, "IV"},
        {5, "V"},
        {6, "VI"},
        {7, "VII"},
        {8, "VIII"},
        {9, "IX"},
        {10, "X"},
        {20, "XX"},
        {30, "XXX"},
        {40, "XL"},
        {50, "L"},
        {60, "LX"},
        {70, "LXX"},
        {80, "LXXX"},
        {90, "XC"},
        {100, "C"},
    };

int main(){
    
    int number;
    cin >> number;
    if (number <= 10){
        cout << roman[number];
    }
    else {
        int tens = number / 10;
        int ost = number % 10;
        cout << roman[tens * 10];
        if (ost != 0) {
            cout << roman[ost];
        }
    }
    return 0;
}