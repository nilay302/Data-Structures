#include<stack>
#include<iostream>
using namespace std;

int main(){
    string s = "((a+b)*c)";
    stack<char>st;
    int flag = 1;
    int n = s.size();
    for(int i = 0;i<n;i++){
        if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
           if(st.empty()){
               cout<<"False"<<endl;
               flag = 0;
               break;
           }
           st.pop();
        }
    }
    if(st.empty())cout<<"True"<<endl;
    else cout<<"False"<<endl;
}