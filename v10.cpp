#include<iostream>
using namespace std;
// // void printa(int a[],int size)
// // {
// //     for(int i=0;i<size;i++)
// //     {
// //         cout<<a[i]<<" ";
// //     }
// //     cout<<endl;
// // }
// // void swapw(int a[],int size)
// // {
// //     for(int i=0;i<size;i+=2)
// //     {
// //         if(a[i+1]<size)
// //         {
// //             swap(a[i],a[i+1]);
// //         }
// //     }
// //     printa(a,size);
// // }
// // int main()
// // {
// //     int even[8]={5,3,5,2,5,3,6,2};
// //     int odd[5]={2,7,5,2,1};
// //     swapw(odd,5);

// // }
// void print(int a[])
// {
//     int i;
//     for(i=0;i<8;i++)
//     {
//         cout<<a[i]<<" ";
//     }
// }

// int main(){
//     int a[8]={1,3,2,7,1,5,8,9},i;
//     for(i=0;i<8;i+=2)
//     {
//         if(i+1<8)
//         {
//             swap(a[i],a[i+1]);
//         }
//     }
//     print(a);
// }
int main(){
    int arr[9]={1,0,0,1,0,1,0,0,1};
    int i=0,j=9-1;
    while(i<=j)
    {
        if(arr[i]==0)
        {
            i++;
        }
        else if(arr[j]==1)
        {
            j--;
        }
        else if(arr[i]==1 && arr[j]==1)
        {
            swap(arr[i],arr[j]);
        }
       
    }
    for(i=0;i<9;i++)
    {
        cout<<arr[i]<<" ";
    }
}

    
