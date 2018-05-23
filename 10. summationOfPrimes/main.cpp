#include <iostream>

using namespace std;

bool isPrime(int num);

int main()
{
    int primeLimit = 2000000;
    int numCounter = 3;
    long long int total = 2;
    while(numCounter<primeLimit)
    {
        if(isPrime(numCounter)==true)
        {
            total+=numCounter;
        }
        numCounter +=2;
        cout << numCounter << endl;
    }
    cout << endl << endl << total;
}

bool isPrime(int num)
{
    if(num==1)
    {
        return false;
    }
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
