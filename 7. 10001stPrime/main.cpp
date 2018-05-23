#include <iostream>

using namespace std;

bool isPrime(int num);

int main()
{
    int primeIndex = 100000;
    int totalCountedPrimes = 1;//initailize at 1 to include 2, because it is much easier to start incrementing from 3 than 2 or 1
    int countingNum = 3;
    int largestPrime = 0;

    cout << "2, ";
    while(totalCountedPrimes < primeIndex)
    {
        if(isPrime(countingNum)==true){
            totalCountedPrimes++;
            cout << countingNum << ", ";
            largestPrime = countingNum;
        }
        countingNum += 2;
    }
    //cout << largestPrime;
}

bool isPrime(int num)
{
    if(num==2 || num==3)
        {
            return true;
        }
    for(int x=3; x<num/2; x=x+2)
    {

        if (num%x==0)
        {
            return false;
        }
    }
    return true;
}




