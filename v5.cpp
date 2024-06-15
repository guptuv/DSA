#include<iostream>
using namespace std;

int main(){
    // int a=4,b=6;
    // cout<<"a&b "<< (a&b) << endl;
    // cout<<"a|b "<<(a|b)<< endl;
    // cout<<"~a "<<(~a)<< endl;
    // cout<<"a^b "<<(a^b)<< endl;
    // cout<<(17>>1)<<endl;
    // cout<<(17>>2)<<endl;
    // cout<<(19<<1)<<endl;
    // cout<<(21<<2)<<endl;
    // int s=5;
    // cout<<a++ <<endl;
    // cout<<((a++) +a+ (++a))<<endl;


    // int n;
    // cout<<"Enter a no:";
    // cin>>n;
    // int i=1;
    // for(;;)
    // {
    //     if(i<=n)
    //     {
    //         cout<<i<<endl;
    //         i++;
    //     }
    //     else
    //     {break;}
        
    // }
    // for(int a=0,b=1; a>=0&&b>=1;a--,b--){
    //     cout<<a<<" "<<b<<endl;
    // }
    // cout<<endl;
    // //fibonacci
    // int a=0,b=1,c;
    // for(i=1;i<=10;i++)
    // {
    //     c=a+b;
    //     cout<<c<<" ";
    //     a=b;
    //     b=c;
    // }
    // if(2&2)
    // {
    //     cout<<9;
    // }
    // cout<<endl;

    //  int g;
    //  cout<<g;


    int a=3;
    cout<<a<<endl;
    // int b;
    // if(true)
    // {
    //     int b=5;
    //     cout<<b<<endl;
    // }
    // cout<<b<<endl;   Error
    if(true)
    {
        int b=5;
        cout<<b<<endl;
    }
    int b=1;
    cout<<b<<endl;
    //int b=3;//error
    cout<<b<<endl;
    int i=8;
    for(;i<8;i++)
    {
        cout<<"Hi"<<endl;
    }

    



}



//Leetcode
// class Solution {
// public:
//     int subtractProductAndSum(int n) {
//         int product=1,sum=0;
//         while(n!=0)
//         {
//             int digit=n%10;
//             sum=sum+digit;
//             product=product*digit
//         }
//         int ans=product-sum;
//         cout<<ans<<endl;
//         n>>=1
//     }
// }