#include <iostream>
using namespace std;
int main()

{
    // tringle pattern:

    //     //1Q.*
    //          * *
    //          * * *
    //          * * * * print them ?

    // int n;
    // cout << "enter no:" << endl;
    // cin >> n;
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < i + 1; j++){
    //         cout << "*" << " " ;
    //     }
    //     cout << endl;
    // }
    // return 0;

    // Q2.          1
    //          2 2
    //          3 3 3
    //          4 4 4 4 print them ?

    // int n=4;
    // int n;
    // cout << "enter number:"<< endl;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<i+1;j++){
    //         cout << (i+1) << " ";
    //     }
    //     cout << endl;
    // }
    // return 0;

    // Q3 oupper question as charecter partern to change?

    // method 1:
    //  int n = 4;
    //  char ch = 'A';

    // for(int i = 0; i < n; i++) {
    //     for(int j = 0; j <= i; j++) {
    //         cout << ch << " ";
    //     }
    //     ch++;
    //     cout << endl;
    // }

    // return 0;

    // method 2:
    //    int n = 4;

    //     for(int i = 0; i < n; i++) {
    //         for(int j = 0; j <= i; j++) {
    //             cout << char('A' + i) << " ";
    //         }
    //         cout << endl;
    //     }

    //     return 0;

    // Q4.
    // print the following pattern:
    // 1
    // 12
    // 123
    // 1234

    // int n = 5;
    // for (int i = 0; i < n; i++)
    // { // outer loop
    //     for (int j = 1; j <= i + 1; j++)
    //     { // inner loop
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
    // return 0;

    // Q5.REVERSE TRIANGLE  :
    // print the following the parton:
    // 1
    // 21
    // 321
    // 4321

    // int n = 5;

    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j>0;j--){
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
    // return 0;

    // floyd's triangle pattern:

    // Q6.print the following partion:
    // 1
    // 2 3
    // 4 5 6
    // 7 8 9 10

    // int n = 5;
    // int num = 1;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<=i;j++){
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }
    // return 0;

    // Q7.print the following oupprer pattern usinge charecter form:
    // int n = 5;
    // char ch = 'A';
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         cout << ch << " ";
    //         ch++;
    //     }

    //     cout << endl;
    // }
    // return 0;

    // INVERTED TRIANGLE PARRERN:

    // Q8.print the following parton.
    // 1 1 1 1
    //   2 2 2
    //     3 3
    //       4

    // int n = 5;

    // int num = 1;
    // for (int i = 0; i < n; i++)//outer loop
    // {
    //     // space
    //     for (int j = 0; j < i; j++)//1st innerloop
    //     {
    //         cout << " ";
    //     }
    //     // num
    //     for (int j = 0; j < n - i; j++)//2nd inner loop
    //     {
    //         cout << (i + 1);
    //     }
    //     cout << endl;
    // }
    // return 0;

    // Q9.print the pyaranmid pattern?
    //              1
    //              1 2 1
    //            1 2 3 2 1
    //          1 2 3 4 3 2 1         print them >?

    // //int n = 4;
    // int n ;
    // cout << "Enter a number:"<< endl;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // { // outer loop
    //     // spaces n-i-1;
    //     for (int j = 0; j < n - i - 1; j++)
    //     {
    //         cout << " ";
    //     }
    //     for (int j = 1; j <= i + 1; j++)
    //     { // inner lop
    //         cout << j;
    //     }
    //     for (int j = i; j > 0; j--)
    //     { // backword loop
    //         cout << j;
    //     }
    //     cout << endl;
    // }
    // return 0;

    // Q10.print the hollow diamond pattern
    //     *
    //    * *
    //   *   *
    //  *     *
    // *       *
    //  *     *
    //   *   *
    //    * *
    //     *

//    // int n = 5;
//    int n ;
//    cout << " Enter a number : " << endl;
//    cin >> n;

//     // Top Part
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n - i - 1; j++)
//             cout << " ";

//         cout << "*";

//         if (i != 0)
//         {
//             for (int j = 0; j < 2 * i - 1; j++)
//                 cout << " ";

//             cout << "*";
//         }

//         cout << endl;
//     }

//     // Bottom Part
//     for (int i = 0; i < n - 1; i++)
//     {
//         for (int j = 0; j < i + 1; j++)
//             cout << " ";

//         cout << "*";

//         if (i != n - 2)
//         {
//             for (int j = 0; j < 2 * (n - i) - 5; j++)
//                 cout << " ";

//             cout << "*";
//         }

//         cout << endl;
//     }

//     return 0;



//Q11.









 }