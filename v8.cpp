#include<iostream>
using namespace std;
int fact(int x)
{
  int i,f=1;
  for(i=1;i<=x;i++)
  {
    f=f*i;
  }
  return(f);
}
int main(){
  int n;
  cout<<"Enter value on N"<<endl;
  cin>>n;
  int r;
  cout<<"Enter value of R"<<endl;
  cin>>r;
  int x,y,z;
  x=fact(n);
  y=fact(r);
  z=fact(n-r);
  double ncr=((x)/(y*z));
  cout<<"NCR ="<<ncr;
}

// int power(int a,int b)
//     {
//     int ans=1,i=1;
//     for(i=1;i<=b;i++)
//     {
//         ans=ans*a;
//     }
//     return ans;

//     }
// void dummy(){
//     int n;
//     cin>>n;
//     cout<<"n is :"<<n<<endl;
// }
// // int main(){
//     // int num=2;
//     // char num='2';
//     // switch (num)
//     // {
//     // case 1:
//     //     cout<<"First"<<endl;
//     //     break;
//     // case 2:
//     //     cout<<"Second"<<endl;
//     //     break;
//     // case '2':
//     //     cout<<"Second Char:";
//     //     break;   
//     // default:
//     //     cout<<"Default"<<endl;
//     //     break;
//     // }

//     // //functions
//     // int a,b;
//     // cin>>a>>b;
    
//     // int ans=power(a,b);
//     // cout<<ans<<endl;
//     // 


//     // cout<<"Enter the value of a  \n";
//     // int a,b;
//     // cin>>a;
//     // cout<<"Enter the value of b  \n";
//     // cin>>b;
//     // cout<<"Enter the operation u want to perform  \n";
//     // char ch;
//     // cin>>ch;
//     // switch (ch)
//     // {
//     // case '+':
//     //     cout<<a+b;
//     //     break;
//     // case '-':
//     //     cout<<a-b;
//     //     break;
//     // case '*':
//     //     cout<<a*b;
//     //     break;
//     // case '/':
//     //     cout<<a/b;
//     //     break;
    
//     // default:
//     //     cout<<"go to hell";
//     //     break;
//     // }


// // }








// int increment(int num) {
//   num = num + 1;
//   return(num);
// }

// int main() {
//   int num = 5;
// //   num=0;
//   increment(num);
//   printf("Original value of num: %d\n", num);
//   dummy();
//   return 0;
// }
 