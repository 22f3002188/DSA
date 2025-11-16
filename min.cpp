#include<iostream>
using namespace std;
int main(){
    int n = 10;
    int a[10];
    for( int i = 0; i < n; i++){
        cout << "Enter element " << i << ": ";
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    int minimum = a[0];
    for( int i = 1; i <n; i++){
        if (a[i] < minimum){
            minimum = a[i];
        }
    }
    cout << "Minimum element is: " << minimum << endl;
    return 0;
}