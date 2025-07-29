#include<iostream>
using namespace std;

int sum(int a, int b)
{
    int s = a + b;
    return s;
}

int minoftwo(int a, int b)
{
    if(a< b){
        return a;
    } else{
        return b;
    }
}

int sumN(int n)
{
    int s = 0;
    for(int i = 1; i <= n; i++){
        s += i;
    }
    return s;
}



int sumofdigit(int num){
    int digsum=0;

    while ( num>0 ){
        int lastdig = num%10;
        num/=10;

        digsum += lastdig;
    }
    return digsum;
}
int factorial(int n)
{
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact *= i;
    }
    return fact;
}

int nCr(int n, int r)
{
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_nmr = factorial(n - r);
    return fact_n/(fact_r * fact_nmr);
  
}

int main()
{
    int n=8, r=2;
    cout << "nCr of " << n << " and " << r << " is: " << nCr(n, r) << endl;
    cout << sum(10, 5) << endl;
    cout << minoftwo(10, 5) << endl;
    cout << sumN(10) << endl;
    cout << sumofdigit(1234) << endl;
    return 0;
}
