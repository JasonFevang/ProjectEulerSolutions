#include <iostream>

using namespace std;

int main()
{
    int maxRange = 4000000;
    int fib1 = 1;
    int fib2 = 1;
    int fib3 = 0;
    int sum = 0;

    if(fib1%2 == 0){//if the first number is even, it should be added to the even sum. This tests if the first number is even
        sum = fib1;
    }
    else sum = 0;

    while(fib3<=maxRange){
        fib3 = fib1 + fib2;
        if(fib2%2 == 0){
            sum = sum + fib2;
        }
        fib1=fib2;
        fib2=fib3;
    }
    cout << sum;
}
