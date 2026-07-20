#include<iostream>
using namespace std;
int main()
{

// check prime or not prime



// int n = 11;
//     int n ;
    // cout << "ENTER A NO."<< endl;
    // cin >> n;
    // bool isprime = true;

    // for(int i=2;i<=n-1;i++){
    //     if(n%i==0){
    //         isprime = false;
    //         break;

    //     }
    // }
    // if(isprime == true){
    //     cout << "prime number\n";
    // } else{
    //     cout << "non prime no\n";
    // }



    // 1.Q.Sum of all numbers 1 to n which are divisible by 3 ?

//     int n;
//     int sum = 0;
//     cout << " Enter n;" << endl;
//     cin >> n;

//     for(int i=3;i<=n;i+=3){
//         sum+=i;
//     }

//  cout << "sum =" << sum << endl;




//Print factioerial of a number n ?

int n;
long long factorial = 1;
 
cout << " enter a number:" << endl;
cin >> n;
 
for(int i=1;i<=n;i++){
    factorial = factorial*i;
}

cout << "factorial :  " << factorial << endl;
  return 0;
 }