#include<iostream>
#include<climits>
using namespace std;
int main(){
int nums[] = {5,34,76,85,56,-12};
int size = 6;
//smalest no find in array.
int smallest = INT_MAX ;
//Largesrt no fimd in array.
int lardgest = INT_MIN ;

for(int i=0;i<size;i++){ //min,max
   smallest = min(nums[i],smallest);
   lardgest = max(nums[i],lardgest);

    }


cout << "smalest = "<< smallest << endl;
cout << "lardgest = " << lardgest << endl;
return 0;

}