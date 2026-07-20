#include<bits/stdc++.h>
using namespace std;
int main(){
    int nums[] = {5,34,76,85,56,-12};
    int size = 6;
    int sum = 0;
    for(int i=0;i<size;i++){
        sum += nums[i];
    }
    cout << "sum :"<<sum<< endl;
    return 0;
}