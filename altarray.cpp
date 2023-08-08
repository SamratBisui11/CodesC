#include<iostream>
using namespace std;

int main(){
    int size;
    cin>>size;

    int num[100];
        for(int i=0; i<size; i++){
            cin>>num[i];
        }

    

    for(int i=0; i<size; i=i+2){
        
        if(i+1<size){
            swap(num[i],num[i+1]);

        }
    }
}