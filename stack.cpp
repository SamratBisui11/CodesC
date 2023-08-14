#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>st;
    
    st.push(9);
    st.push(17);
    st.pop();
    cout<<"The top element"<<st.top()<<endl;
    return 0;
    }