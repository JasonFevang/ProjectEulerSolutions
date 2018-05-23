#include <iostream>
#include <fstream>
#include <conio.h>

using namespace std;

int main()
{
    char charToIntConverter;
    int intArray[1000];
    int consecNum = 13;
    long long int maxProd = 0;
    long long int tempProd = 1; //otherwise tempProd will never be >0 b/c 0*x=0

    ifstream in_stream;
    in_stream.open("1000DigitNumber.txt");

    for (int i=0;i<1000;i++)//load number into an int array
    {
        in_stream >> charToIntConverter;
        intArray[i] = charToIntConverter - '0';
    }

    for (int i=0;i<(1000-consecNum);i++)//cycle through int array multiplying each 13 consecutive numbers
    {
        for (int j=0;j<consecNum;j++)
        {
            tempProd *= intArray[i+j];
        }
        if (tempProd > maxProd)
        {
            maxProd = tempProd;
        }
        tempProd = 1;
    }
    cout << maxProd;

    in_stream.close();

    return 0;
}
