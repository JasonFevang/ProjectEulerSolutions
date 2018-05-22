#include <iostream>
#include <array>

using namespace std;
//Plan: Array containing all multiples of 3 from 0 to 1000, array containing all multiples of 5 from 0 to 1000. Remove every 5th
//number from the array of 3's, then sum each array, then add the arrays together

//Alternate plan:
int main()
{
    int rangeMin = 0;//starting number to begin summing
    int rangeMax = 1000;//ending number to end summing

    //multiples that we will be summing on defined range
    int testNum[2] = {3, 5};

    int sum = 0;

    for(int i=rangeMin; i<rangeMax; i++){
        for(int j=0; j<sizeof(testNum)/sizeof(testNum[0]); j++){
            if(i%testNum[j] == 0){
                sum = sum + i;
                break;
            }
        }
    }
    cout << sum;
}
