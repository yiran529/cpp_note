#include<iostream>
#include<stack>
using namespace std;
void func(stack<int> s){
    stack<int> s2=s;
    s.pop();
}
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    func(s);
    stack<int> s2=s;
    s2.pop();s2.pop();
    cout<<s.top();
    return 0;
}