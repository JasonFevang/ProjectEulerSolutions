#include <iostream>

using namespace std;

bool isTriplet(int a, int b, int c);

int main()
{
    for (int i=1;i<998;i++)
    {
        for(int j=1;j<998;j++)
        {
            for(int k=1;k<998;k++)
            {
                if(i+j+k == 1000 && isTriplet(i, j, k))
                {
                    cout << i*j*k << endl;
                }
            }
        }
    }
    return 0;
}

bool isTriplet(int a, int b, int c)
{
    if(a*a + b*b == c*c)
    {
        return true;
    }
    else return false;
}
