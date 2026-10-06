//third task
#include <iostream>
#include <vector>

using namespace std;


int main(){  
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    vector<int> st;
    int kfc_students = 0;
    for(int i = 0; i < n; i++){
        if(!st.empty() && st.back() == arr[i]){
            st.pop_back();       
            kfc_students += 2;  
        }
        else{
            st.push_back(arr[i]);
        }
    }
    cout << kfc_students << "\n";
    return 0;
}