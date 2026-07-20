#include <iostream>
using namespace std;
//calulate factorial of n ?
int factorialN(int n){
    int fact = 1;

    for(int i=1;i<=n;i++){//logic 
        fact*=i;// formula
    }
    return fact ;

}


int main(){
     
    cout << factorialN(4) << endl;
    cout << factorialN(10) << endl;
    return 0;

}