//second task
#include <iostream>
#include <string>

using namespace std;

int main(){
    int a, b;
    string exp;
    cin >> a >> b;
    if (a > b){
        while (a != b){
            if (a % 2 == 0 && a / 2 >= b){
                a /= 2;
                cout << ":2\n";
            }
            else{
                a--;
                cout << "-1\n";
            }
        }
        cout << exp;
    }
    else{
        cout << "error";
    }
    return 0;
}