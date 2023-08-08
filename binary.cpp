#include<iostream>
using namespace std;
int firstOcc(int arr[], int n , int key){
    int start=0;
    int end=n-1;
    int ans=-1;
    int mid=start+(start-end)/2;
    while(start<=end){
        if(key==arr[mid]){
            ans=mid;
            mid=end-1;

               
        }
        if(key>arr[mid]){
            start=mid+1;
            
        }
        else{
            end=mid-1;
        }
        mid=start+(start-end)/2;

    } return -1;

}
int main(){
    int even[6]={1,2,3,3,4,5};
    int index= firstOcc(even,6,5);
    cout<<"The index in firstOccurence is "<<index<<endl;


    return 0;

}