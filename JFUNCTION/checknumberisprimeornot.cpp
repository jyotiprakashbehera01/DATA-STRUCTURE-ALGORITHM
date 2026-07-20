#include<iostream>
using namespace std;
//check the number is prime or not ?
bool isPrime(int n){
    if(n<=1){ // yes then false other wise next step.
        return false ;
    }

    for(int i=2;i*i<=n;n++){
        if(n%i==0){
            return false;
        }else{
            return true;
        }
    }
}

int main(){
    int n ;
    cout << " Enter a number:" << endl ;
    cin >> n;
     if(isPrime(n)){
        cout << "it is a prime number."<< n ;
     }else{
        cout << "it is not a prime no."<< n;
     }

    return 0 ;

}