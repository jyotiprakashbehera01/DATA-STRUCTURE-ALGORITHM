#include <iostream>
#include <climits>
using namespace std;
int main()
{

    // when it has use brout force approch :
    // when the following array find the sub array sum ?

    // int n  = 5;
    // int arr[5]= {1,2,3,4,5};

    // int maxSum = INT_MIN;

    // for(int st = 0 ; st < n ; st++){
    //     int currSum = 0 ;//st the current sum.
    //     for(int end = st ; end < n ; end ++){
    //     currSum += arr[end];//Add the array value in one by one .
    //     maxSum = max(currSum,maxSum);
    //     }
    // }
    // cout << "max subarray sum = " << maxSum << endl;
    //     return 0;

    // KADANE ALGORITHEM:
    // when the following array find the sub array sum ?
    
    int arr[] = {3, -4, 5, -1, 7, -8};
    int n = 6;

    int currSum = 0;
    int maxSum = INT_MIN;


    for (int i = 0; i < n; i++){
        currSum += arr[i];
        maxSum = max(currSum,maxSum);


        if (currSum < 0){
            currSum = 0;
        }
    }

    cout << "max subarray sum = " << maxSum << endl;
    return 0;
}
