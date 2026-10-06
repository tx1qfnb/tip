//first task 
#include <iostream>

using namespace std;

int main(){
    double count_first_day, sum;
    cin >> count_first_day >> sum;
    double tmp = count_first_day;
    int day = 1;
    while(tmp < sum){
        tmp *= 1.1;
        day++;
    }

    cout << day;

    return 0;
}