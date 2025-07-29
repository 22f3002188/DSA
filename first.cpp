#include <iostream>
using namespace std;

// int main(){
//     int age =25;
//     char grade = 'A';
//     float pi = 3.14f;
//     bool issafe = true;

//     double price = 100.99;
//     cout << "My age is: " << age << endl;
//     cout << price << endl;
//     cout << issafe << endl;
//     cout << "My grade is: " << grade << endl;
//     cout << "My pi is: " << pi << endl;
//     cout << sizeof(age) << endl;
//     cout << "Hello World!" << endl;
//     return 0;
// }


// int main()
// {
//     char grade = 'a';
//     int value = grade; // Implicit conversion from char to int
//     // The ASCII value of 'a' is 97
//     // The ASCII value of 'A' is 65
//     cout << "The ASCII value of " << grade << " is: " << value << endl;

//     double price = 100.99;
//     int newprice = (int)price; // Explicit conversion from double to int // force conversion big to small
//     // This will truncate the decimal part
//     // 100.01 => 100
//     // 100.99 => 100
//     cout << "The new price is: " << newprice << endl;
//     return 0;
// }


// int main(){
//     int age;
//     cout << "Enter your age: ";
//     cin >> age; // Input from user
//     cout << "Your age is: " << age << endl; // Output to user
//     return 0;
// }


// int main(){
//     int a = 5;
//     int b = 2;
//     cout << "sum of a and b is: " << a + b << endl; // sum of a and b
//     cout << "difference of a and b is: " << a - b << endl; // difference of a and b
//     cout << "product of a and b is: " << a * b << endl; // product of a and b
//     cout << "division of a and b is: " << a / b << endl; // division of a and b
//     cout << "modulus of a and b is: " << a % b << endl; // modulus of a and b
//     cout << "increment of a is: " << ++a << endl; // increment of a
//     cout << "decrement of a is: " << --a << endl; // decrement of a
//     cout << "increment of b is: " << ++b << endl; // increment of b
//     cout << "decrement of b is: " << --b << endl; // decrement of b

// }

// int main()
// {
//     cout << (5/(double)2) << endl; // 2.5
//     return 0;
// }


// int main(){
//     cout << (3<5) << endl; // 1
//     cout << (3>5) << endl; // 0
//     cout << (3<=5) << endl; // 1
//     cout << (3>=5) << endl; // 0
//     cout << (3==5) << endl; // 0
//     cout << (3!=5) << endl; // 1
// }

// int main()
// {
//     cout << (3<5 && 5>2) << endl; // 1
//     cout << (3<5 || 5>2) << endl; // 1
//     cout << !(3<5) << endl; // 0
//     cout << !(3>5) << endl; // 1
// }


// int main(){
//     int a, b;
//     cout << "enter a: ";
//     cin >> a;
//     cout << "enter b: ";
//     cin >> b;
//     int sum = a + b;
//     cout << "sum of a and b is: " << sum << endl; // sum of a and b
//     cout << "difference of a and b is: " << a - b << endl; // difference of a and b
//     cout << "product of a and b is: " << a * b << endl; // product of a and b
//     cout << "division of a and b is: " << a / b << endl; // division of a and b
//     return 0;
// }


int main()
{
    int a = 10;
    int b = a++;
    cout << b << endl; // 10
    cout << a << endl; // 11
    int c = ++a;
    cout << c << endl; // 12
    cout << a << endl; // 12
    int d = --a;
    cout << d << endl; // 11
    cout << a << endl; // 11
    int e = a--;
    cout << e << endl; // 11
    cout << a << endl; // 10
    return 0;
  
}














