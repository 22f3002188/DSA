#include <iostream>
using namespace std;

int main(){
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int search = 9;
    for (int i = 0; i < 10; i++){
        if( a[i] == search){
            cout << "Found " << search << " at index " << i << endl;
            cout << "Exiting search." << endl;
            return 1;
        }
    }
    return -1;
}