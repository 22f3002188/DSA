#include <iostream>
using namespace std;

// int main(){
//     int n = -5;
//     if(n>0){
//         cout << "positive" << endl;
//     } else {
//         cout << "negative" << endl;
//     }
//     return 0;
//     }

// int main(){
//     int n;
//     cout << "enter a number: ";
//     cin >> n;

//     if (n%2==0){
//         cout << "even" << endl;
//     } else {
//         cout << "odd" << endl;
//     }
//     return 0;
// }

// int main(){
//     int marks;
//     cout << "enter marks: ";
//     cin >> marks;
//     if (marks >= 90){
//         cout << "A+" << endl;
//     } else if (marks >= 80){
//         cout << "A" << endl;
//     } else if (marks >= 70){
//         cout << "B" << endl;
//     } else if (marks >= 60){
//         cout << "C" << endl;
//     } else if (marks >= 50){
//         cout << "D" << endl;
//     } else {
//         cout << "F" << endl;
//     }
//     return 0;
// }


// int main(){
//     int n;
//     cout << "enter a number: ";
//     cin >> n;
//     switch (n){
//         case 1:
//             cout << "one" << endl;
//             break;
//         case 2:
//             cout << "two" << endl;
//             break;
//         case 3:
//             cout << "three" << endl;
//             break;
//         default:
//             cout << "not in range" << endl;
//             break;
//     }
//     return 0;
// }

// int main(){
//     char ch;
//     cout << "enter a character: ";
//     cin >> ch;
//     if(ch >= 'a' && ch <= 'z'){
//         cout << "lowercase" << endl;
//     } else{
//         cout << "uppercase" << endl;
//     }
//     return 0;
// }

// a => 97
// A => 65


// int main (){
//     char ch;
//     cout << "enter a character: ";
//     cin >> ch;
//     if(ch >= 65 && ch <= 90){
//         cout << "uppercase" << endl;
//     } else{
//         cout << "lowercase" << endl;
//     }
//     return 0;
// }

// int main(){
//     int n = -5;
//     cout << (n >= 0 ? "positive" : "negative") << endl; // positive
//     return 0;
// }

// int main(){
//     int n = 20;
//     int count = 1;
//     while (count <= n){
//         cout << count << endl; // 1 2 3 4 5
//         count++;
//     }
//     return 0;
// }


// int main(){
//     int n = 20;
//     for(int i = 1; i <=n; i++){
//         cout << i << endl; // 1 2 3 4 5
//     }
//     return 0;
// }

// int main (){
//     int n =50;
//     int sum = 0;
//     for(int i=1; i <=n; i++){
//         sum +=i;
//         if(i==5){
//             break;
//         }

//     }
//     cout << sum << endl; // 6
//     return 0;
// }


//  int main (){
//     int n = 5;
//     int oddsum = 0;

//     for(int i=1; i<=n; i++){
//         if (i%2 !=0){
//             oddsum +=i;
           
            
//         }
        
//     }
//     cout << oddsum << endl;
//     return 0;
//  }

// int main(){
//     int n = 10;
//     int i = 1;

//     do{
//         cout << i << " ";
//         i++;
//     } while(i <= n);

//     cout << endl; // 1 2 3 4 5 6 7 8 9 10
//     return 0;
// }

// int main(){
//     int n = 7;
//     bool isPrime = true;
//     for (int i =2; i <= n-1; i++){
//         if (n%i == 0){
//             isPrime = false;
//             break;
//         }
//     }
//     if (isPrime){
//         cout << n << " is prime" << endl; // 7 is prime
//     } else {
//         cout << n << " is not prime" << endl; // 7 is not prime
//     }
//     return 0;
// }

// int main(){
//     int n = 7;
//     bool isPrime = true;
//     for (int i =2; i*i <=n; i++){
//         if (n%i == 0){
//             isPrime = false;
//             break;
//         }
//     }
//     if (isPrime){
//         cout << n << " is prime" << endl; // 7 is prime
//     } else {
//         cout << n << " is not prime" << endl; // 7 is not prime
//     }
//     return 0;
// }

int main (){
    int x = 10;
    for(int i=1; i<=x; i++){
      int m = 10;
      for(int j=1; j<=m; j++){
        cout << "*";//1 3 1 4 1 5 1 6 1 7 1 8 1 9 1 10
      }
      cout << endl;
    }
   
    return 0;
}







































































