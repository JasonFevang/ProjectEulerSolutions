#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

bool isPalindrome(int num);

int main()
{
    int num = 0;
    int largestPalindrome = 0;
    int largesti= 0;
    int largestj=0;
    bool palindrome = false;
    int i = 0;
    int j = 0;
    for (i=1000; i>100; i--)
    {
        for (j=1000; j>100; j--)
        {
            num = i*j;
            if(isPalindrome(num)==true && num>largestPalindrome)
            {
                largestPalindrome = num;
                largesti=i;
                largestj=j;
            }
        }
    }
    cout << largesti << ", " << largestj << ", " << largestPalindrome;


}

bool isPalindrome(int num)
{
    int length = floor(log10(num)) + 1;
    vector<char> numArr(length);
    int arrCount = 0;

    do{
        numArr[arrCount] = num%10;
        num /= 10;
        arrCount++;
    }while(num != 0);

    for(int i = 0; i<length/2; i++)
    {
        if(numArr[i] != numArr[length-1-i])
        {
            return false;
        }
    }
    return true;
}
