#include<iostream>
#include<vector>
using namespace std;
//Find single number in an array?
//using function:

int singleNumber(vector<int>&nums){
    int ans = 0 ;
    for(int val : nums){
        ans^=val;
    }
    return ans ;
}

int main(){
vector<int>vec = {1,2,1,2,4};
cout << "Single Element = " << singleNumber(vec) << endl;
return 0 ;
}