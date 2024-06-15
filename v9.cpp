#include<iostream>
using namespace std;
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }
}
bool linearsearch(int arr[],int val,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==val)
        {
            return(1);
        }
    }
    return(0);
}
int main(){
//    //How to Initialize all array to 1
//    int second[9]={2,4,6};
//    printarray(second,95);
    //   int number[15]={3,4,3,5,3,5,254,2,345,4,34,232};
    int number[15]={3};
    
     for(int i=0;i<15;i++)
      {
        // number[i]={3};
        // cout<<number[i]<<endl;
      }
      printarray(number,15);
      cout<<number[80]<<endl;


}



// bool findkey(int a[],int x )
// {
//     int i=1;
//     for(i=0;i<10;i++)
//     {
//         if(x&a[i])
//         {
//             return true;
//         }

//     }
//     return false;
// }
// int main(){
//     int key,arr[10]={3,5,12,543,23,87,23,765,123,64};
//     cout<<"Enter the no to be searched by linear Search"<<endl;
//     cin>>key;
//     bool x=findkey(arr,key);
//     if(x)
//     {
//         cout<<"Mil gya";
//     }
//     else{
//         cout<<"Nhi mila";
//     }
// }


// void replace(int a[]){
//     int x,i=0;
//     while(i<10)
//     {
//         x=a[i];
//         a[i]=a[10-1-i];
//         a[10-1-i]=x;
//     }
// }


// void printarray(int a[])
// {
//     int  i=0;
//     for(i=0;i<11;i++)   
//     {
//         cout<<a[i]<<" ";
//     }
    
// }
// void reversearray(int a[])// basically it runs on n-1/2 principle for reversing the array
// {
//     int x;
//     for(int i=0;i<(11-1)/2;i++)  // u can replace 10-1 by n-1
//     {
//         x=a[i];
//         a[i]=a[11-1-i];        // here too
//         a[11-i-1]=x;   // this also   
        
//     }
//     printarray(a);
// }
// int main(){
//     int a[11]={2,3,321,2348,7647,98,-876,45,-765,-654,-0234};
//     cout<<"Before Reversing"<<endl;
//     printarray(a);
//     cout<<"\n";
//     reversearray(a);
//     cout<<"\nAfter reversing"<<endl;
    
// }