#include<iostream>
using namespace std;
//convert binary to decimal ;

int binToDecimal(int binNum)
{
    int ans = 0, pow = 1;

    while (binNum > 0)
    {
        int rem = binNum % 10;   // Last binary digit
        ans += rem * pow;        // Add its decimal value

        binNum /= 10;            // Remove last digit
        pow *= 2;                // Next power of 2
    }

    return ans;
}

int main()
{
    cout << binToDecimal(101) << endl;
    return 0;
}