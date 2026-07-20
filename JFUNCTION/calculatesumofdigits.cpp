#include<iostream>
using namespace std;
//calculate sum of digits of n ?
int sumOfDigit(int num){
    int sumdig=0;

    while (num > 0){
        int lastdig = num % 10;//formulaaaaaa.
        num /=10;
        sumdig+=lastdig; 
    }
    return sumdig;
}
int main(){
    cout << "sum = " << sumOfDigit(100735625672) << endl;
    return 0;
}