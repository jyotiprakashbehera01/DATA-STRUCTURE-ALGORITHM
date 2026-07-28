#include<iostream>
#include<vector>
using namespace std;

//using function:
vector<int> pairSum(vector<int>nums , int target){
       vector<int>ans;//when it has return
       int n = nums.size();
       //logic:
       for(int i=0 ; i<n ; i++){//found pairs 
           for(int j=i+1 ; j<n ; j++){//foud unique pair that has not back word
               if(nums[i]+nums[j]==target){//codition check.
                ans.push_back(i);
                ans.push_back(j);
                return ans;
               }
           }
       }
return ans ;
}

int main(){
vector<int> nums = {2,7,11,15};//given vector.
int target = 9;//found the the target.

vector<int> ans = pairSum( nums, target);//call back
cout << ans[0] << " , " << ans[1] << endl;

return 0;

}