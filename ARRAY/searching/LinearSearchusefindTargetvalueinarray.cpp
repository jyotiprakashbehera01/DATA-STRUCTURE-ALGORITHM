#include<iostream>
using namespace std;

// in LinerSearch fing Target value in array ?find index value ?

int LinearSearch (int arr[],int size ,int target){
        for(int i=0 ; i<size ; i++){
            if(arr[i] == target){
                 return i; // when i return index valu.
            }
        
        }
        return -1;//No index 
}


int main(){
    int arr[]={4,2,7,8,1,2,3};
    int size = 7;
    int target = 8;

    LinearSearch(arr,size,target);
    cout << LinearSearch(arr,size,target) << endl;

    return 0;

}