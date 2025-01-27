#include<iostream>
#include<vector>
using namespace std;
int main(){
    int target;
    int n;
    cout<<"Enter the length of the array: ";
    cin>>n;
    int arr[n];
for(int i=0; i<n; i++){
    cout<<"Enter value "<<i+1<<": ";
    cin>>arr[i];
}
    cout<<"Whats the target value you wanna get: ";
    cin>>target;
    bool found = false;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "Pair found: " << arr[i] << ", " << arr[j] << endl;
                found = true;
            }
        }
    }
    if (!found) {
        cout << "No two values yield " << target << endl;
    }

    return 0;
}
