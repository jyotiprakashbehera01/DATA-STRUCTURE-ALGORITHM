#include <iostream>
using namespace std;
int main()
{

    // 1Q.Sequare parrtern n=?

    // int n;
    // cout << "enter number :" << endl;
    // cin >> n;

    // for(int i=1;i<=n;i++){

    //     for(int j=1;j<=n;j++){

    //         cout<<j << " ";
    //     }
    //     cout << endl;
    // }
    // return 0;

    // 2Q.Sequare parrtern n=*

    //  int n;
    //  cout << "enter number :" << endl;
    //  cin >> n;

    //  for(int i=1;i<=n;i++){

    //      for(int j=1;j<=n;j++){

    //        cout<<"*" << " ";
    //     }
    //      cout << endl;
    //  }
    //  return 0;

    // conert the charecter :

    // // int n = 4;
    // int n;
    // cout << "Enter no:" << endl;
    // cin >> n;
    // for (int i = 0; i < n; i++) //outer loop
    // {
    //     char ch = 'A';
    //     for (int j = 0; j < n; j++)//inner loop
    //     {
    //         cout << ch << " ";
    //         ch = ch + 1;
    //     }
    //     cout << endl;
    // }
    // return 0;




    // 4Q.123
    //    456
    //    789 print continus number ?

    // int n;
    // cout << "enter number:" << endl;
    // cin >> n;
    // int num = 1;

    // for (int i = 0; i < n; i++)
    // {

    //     for (int j = 0; j < n; j++)
    //     {

    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }
    // return 0;



    //5Q.ouppr question to convert charecter

int n;
cout << "Enter no:" << endl;
cin >> n;
char ch = 'A';
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout << ch << " ";
        ch++;
    }
    cout << endl;
}
return 0;






}