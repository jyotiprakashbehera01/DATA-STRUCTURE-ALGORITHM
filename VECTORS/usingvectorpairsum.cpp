#include<iostream>
#include<vector>
using namespace std;

//using function:
vector<int> pairSum(vector<int>nums , int target){
       vector<int>ans;//when it has return
       int n = nums.size();


       //logic:

       //use  Bruts approch then time conplexcity -O(n²)


    //    for(int i=0 ; i<n ; i++){//found pairs 
    //        for(int j=i+1 ; j<n ; j++){//foud unique pair that has not back word
    //            if(nums[i]+nums[j]==target){//codition check.
    //             ans.push_back(i);
    //             ans.push_back(j);
    //             return ans;
    //            }
    //        }
    //    }

    //Two pointer approch :

    int i = 0, j= n-1;
    while(i < j){
        int pairSum = nums[i] + nums[j];
        if(pairSum > target){
            j--;
        }else if(pairSum < target){
            i++;
        }else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
    }
return ans ;
}

int main(){
vector<int> nums = {2, 7, 11, 15};//given vector.
int target = 13;//found the the target.

vector<int> ans = pairSum( nums, target);//call back
cout << ans[0] << ", " << ans[1] << endl;

return 0;

}

