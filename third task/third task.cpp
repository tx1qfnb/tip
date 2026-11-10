#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

string toBinary(string s) {
    if (s == "0") return "0";
    string bits;
    while (s != "0" && !s.empty()) {
        string q;
        int rem = 0;
        for (char ch : s) {
            int cur = rem * 10 + (ch - '0');
            q += char('0' + cur / 2);
            rem = cur % 2;
        }
        bits += char('0' + rem);
        size_t p = q.find_first_not_of('0');
        s = (p == string::npos) ? "0" : q.substr(p);
    }
    reverse(bits.begin(), bits.end());
    return bits;
}

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    
    string line;
    getline(in, line);

    if (!line.empty() && line.back() == '\r') line.pop_back();
    
    string result;
    size_t i = 0;
    while (i < line.size()) {
        if (isdigit((unsigned char)line[i])) {
            string num;
            while (i < line.size() && isdigit((unsigned char)line[i])) {
                num += line[i];
                i++;
            }
            result += toBinary(num);
        } else {
            result += line[i];
            i++;
        }
    }

    out << result;

    return 0;
}