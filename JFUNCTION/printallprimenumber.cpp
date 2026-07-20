#include<iostream>
using namespace std;
//check number is prime or not:
bool isPrime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }else{
            return true;
        }
    }
}
//print all prime number from 1 to n:
void printAllprime(int n){
    for(int i=2;i<=n;i++){
        if(isPrime(i)){
            cout << i << " ";
        }
    }
}
int main(){
 int n;
 cout << "Enter a number:" << endl;
 cin >> n;
printAllprime(n);
return 0;
}