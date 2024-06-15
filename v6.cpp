#include<iostream>
#include<math.h>
using namespace std;
int main(){
    // int X;
    // int n=X;
    // cin>>X;
    int n;
    // cout<<n;
    cin>>n;
    int ans=0,i=0;
    while(n!=0)
    {
        int bit=n&1;
        ans=(bit*round(pow(10,i)))+ans;
        // oct=(bit*round(pow(8,i)))+oct;  Don't try octal like this it's not like this
        n=n>>1;
        i=i+1;
    }
    cout<<ans<<endl;// IDK why +1 works here?
    cout<<(!ans);
    //cout<<oct<<endl;

    // int n;
    // cin>>n;

    // int i=0,ans=0,digit;
    // while(n!=0)
    // {
    //     digit=n%10;
    //     if(digit==1)
    //     {
    //         ans=ans+round(pow(2,i));
    //     }
    //     n=n/10;
    //     i++;
    // }
    // cout<<ans <<endl;
    // cin >>n;



    // i=0;
    // ans=0;
    // cout<<n;
    // // int n;
    // // cin>>n;
    // while(n!=0)
    // {
    //     int bit=n%10;
        
    //     if(bit==1)
    //     {
    //         ans=ans+pow(2,i);
    //     }
    //     i++;
    //     // ans=ans+(pow(2,i)*bit);
    //     n/=10;

    // }
    // // cout<<n;
    // cout<<ans;







    // int n;
    // cin>>n;
    // int x=!n;
    // cout<<x;

}
