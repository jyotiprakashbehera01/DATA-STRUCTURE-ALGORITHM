#include<iostream>
using namespace std;

//Reverse an array ?

void reverseArray(int arr[],int size){
        int start = 0 ,  end = size-1 ;//it detect the index size.
        while(start < end){//when starting and ending index value check and then swap.
            swap(arr[start],arr[end]);//while i usimg the swap .
            start ++;
            end--;

        }

}

int main(){
    int arr[]={1,2,3,4,5,6,7};
    int size = 7;
    reverseArray(arr,size);//call the function .

    for(int i=0;i<size;i++){  
        cout << arr[i] << " "; //arrange the value .
    }
    cout << endl;

    return 0;

}