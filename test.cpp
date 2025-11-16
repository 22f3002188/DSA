#include <iostream>
using namespace std;

int main(){
    int a[5] = {2,4,6,8,10};
    for (int i = 0; i <= 4; i++){
        for(int j=i+1; j<=4; j++){
            if (a[i] < a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
                cout << "Swapped " << a[j] << " and " << a[i] << endl;
            }
            cout << "Comparing " << a[i] << " and " << a[j] << endl;
        }
        cout << "Pass " << i+1 << " completed." << endl;
    }
    for (int i = 0; i <= 4; i++){
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
    
}