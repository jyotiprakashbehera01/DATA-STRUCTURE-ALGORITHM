#include<iostream>
#include<climits>
using namespace std;
int main(){
int nums[] = {5,34,76,85,56,-12};
int size = 6;

int smallest = INT_MAX ;

for(int i=0;i<size;i++){
    if(nums[i]<smallest){
        smallest = nums[i];
    }
}

cout << "smalest :"<<smallest<< endl;
return 0;

}