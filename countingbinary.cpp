#include<iostream>
using namespace std;
int findPivot(int arr[], int n ){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;
}

int BinaryNumber(int arr[],int s,int e,int k){
    int start=s;
    int end=e;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==k){
            return mid;
        }
        if(k>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int pivot=findPivot(arr,n);
    
    if(k>=arr[pivot] && k<=arr[n-1]){ddd
        cout<< BinaryNumber(arr,pivot,n-1,k);
    }
    else{
        cout<< BinaryNumber(arr,0,pivot-1,k);
    }
    return 0;
}