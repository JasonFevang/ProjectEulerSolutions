#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int sumSquare = 0;
    int squareSum = 0;
    int sum = 0;
    int ssd = 0;

    for(int i=1; i<=100; i++)
    {
        sumSquare += i*i;
        sum += i;
    }
    squareSum = sum*sum;
    ssd = abs(sumSquare - squareSum);
    cout << "sumSquare = " << sumSquare << endl << "squareSum = " << squareSum << endl << "ssd = " << ssd;
}
