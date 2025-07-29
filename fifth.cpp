#include <iostream>
using namespace std;

// int dectobinary(int decnum){
//     int ans = 0, pow = 1;

//     while(decnum >0){

//         int rem = decnum % 2;
//         decnum /= 2;

//         ans += (rem * pow);
//         pow *= 10;
//     }
//     return ans;
// }

// int main(){
//     int decnum = 50;
//     for (int i = 0; i < 10; i++){
//         cout << i << " in binary is: " << dectobinary(i) << endl;
//     }
//     cout << dectobinary(decnum) << endl; // 110010
//     return 0;
// }


// int bintodecimal(int binnum){
//     int ans = 0, pow = 1;

//     while(binnum >0){

//         int rem = binnum % 10;
//         binnum /= 10;

//         ans += (rem * pow);
//         pow *= 2;
//     }
//     return ans;
// }
// int main(){
//     int binnum = 110010;
//     cout << bintodecimal(binnum) << endl; // 50
//     return 0;

// }

int main(){
    int a=4, b=8;
    cout << "a & b: " << (a & b) << endl; // 4
    cout << "a | b: " << (a | b) << endl; // 5
    cout << "a ^ b: " << (a ^ b) << endl; // 1
    cout << "~a: " << (~a) << endl; // -5


    return 0;
}


























