#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    
    string bad = "useragmntUSERAGMNT", line;
    
    bool first = true;

    while(getline(in, line)){
        if(!first){
            out << '\n';
        }
        first = false;

        for(char s : line){
            if (bad.find(s) == string::npos){
                out << s;
            }
        }
    }

    in.close();
    out.close();
    return 0;
}