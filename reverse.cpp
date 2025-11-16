#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int a[5];
    for (int i = 0; i < n; i++){
        cout << "Enter element ";
        cin >> a[i];
    }
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    int temp;
    int i, j;
    for ( i = 0,j=n-1; i <= j; i++, j--){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;

    }
    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}