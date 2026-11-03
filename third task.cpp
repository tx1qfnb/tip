
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int x, n;
    cin >> x >> n;

    string number = to_string(x);

    for (int i = 1; i < n; i++) {
        string new_number = "";

        int count = 1;

        for (int j = 1; j < number.size(); j++) {
            if (number[j] == number[j - 1]) {
                count++;
            } 
            else {
                new_number += to_string(count);
                new_number += number[j - 1];
                count = 1;
            }
        }

        new_number += to_string(count);
        new_number += number[number.size() - 1];

        number = new_number;
    }

    cout << number;

    return 0;
}
