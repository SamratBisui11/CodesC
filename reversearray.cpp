#include<iostream>
#include <algorithm> // Include the <algorithm> header for the swap function

using namespace std;

void reverse(int arr[],int n){

    int start=0;
    int end=n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void printArray(int arr[], int n){

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}
int main(){

   int arr[5]={1,23,3,4,5};
   int brr[8]={1,2,3,4,5,6,7,8};

   printArray(arr,5);
   reverse(arr, 5);
   printArray(arr,5);
   printArray(brr,8);
    reverse(brr, 8);
    printArray(brr,8);

   return 0;
}