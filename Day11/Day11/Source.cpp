#include<iostream>
using namespace std;

int main() {
    //setting the array up
    int arr[6][6];
    //define sum variable
    int sum;
    //set tmp 
    int checksum = -81;//minimum possible sum in any given hourglass
    //fill the array up 6x6
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cin >> arr[i][j];
        }

    }
    //go over possible checks in array, it gives us 
    //each hourglass is 3 x 1 x 3 so we can get maximum of
    //4[3] rows and 4[3] columns checks to access all elements(hourglasses)
    //as we can not check anything over 4th[3] as everything over
    //6th[5] element is a unknown value that is causing buffer overflow
    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            sum = 0;//reset the sum at each iteration through hourglass
            sum += (arr[row][col] + arr[row][col + 1] + arr[row][col + 2]);//add the first row
            sum += (arr[row + 1][col + 1]);//add the second row 
            sum += (arr[row + 2][col] + arr[row + 2][col + 1] + arr[row + 2][col + 2]);//add the third row
            if (checksum < sum)//update our maxsum holder
            {
                checksum = sum;
            }
        }


    }
    //print the checksum
    cout << checksum;

    return 0;
}