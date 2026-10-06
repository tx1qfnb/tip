//second task
#include <iostream>

using namespace std;

int main(){
    int n, m, k;
    cin >> n >> m >> k;
    if ((k % n == 0 || k % m == 0) && k < n * m){
        cout << "Можно отломить";
    } 
    else{
        cout << "Нельзя отломить";
    }

    return 0;
}