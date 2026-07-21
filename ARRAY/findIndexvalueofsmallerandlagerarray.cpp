#include <iostream>
#include <climits>
using namespace std;

void IndexValue(int nums[], int size)
{
    int smallest = INT_MAX;
    int largest = INT_MIN;

    int minIndex = -1;
    int maxIndex = -1;

    for (int i = 0; i < size; i++)
    {
        if (nums[i] < smallest)
        {
            smallest = nums[i];
            minIndex = i;
        }

        if (nums[i] > largest)
        {
            largest = nums[i];
            maxIndex = i;
        }
    }

    cout << "Smallest element = " << smallest
         << " at index " << minIndex << endl;

    cout << "Largest element = " << largest
         << " at index " << maxIndex << endl;
}

int main()
{
    int nums[] = {5, 34, 76, 85, 56, -12};
    int size = sizeof(nums) / sizeof(nums[0]);

    IndexValue(nums, size);

    return 0;
}