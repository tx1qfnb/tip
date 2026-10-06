//first task 
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(){
    string expression;
    int a, b;
    char operation;

    getline(cin, expression);
    stringstream stream(expression);
    stream >> a >> operation >> b;

    switch(operation){
        case '+':
            cout << a + b;
            break;

        case '-':
            cout << a - b;
            break;

        case '*':
            cout << a * b;
            break;
        
        case '/':
            cout << a / b;
    }

    return 0;
}