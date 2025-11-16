#include<iostream>
using namespace std;
int main(){
    int n = 10;
    int a[10];
    for (int i = 0; i < n; i++){
        cout << "Enter element " << i << ": ";
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    int maximum = a[0];
    for (int i= 1; i < n; i++){
        if (a[i] > maximum){
            maximum = a[i];
        }
    }
    cout << "Maximum element is: " << maximum << endl;
    return 0;
}