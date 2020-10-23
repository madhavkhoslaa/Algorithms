#include <stack>
#include <iostream>

using namespace std;

void transfer(stack<int> &s1, stack<int> &s2, int n){
    //transfers n top elements from s1 to s2
    for(int i= 0; i<n; i++){
        s2.push(s1.top());
        s1.pop();
    }
}

void reverse_using_three_stacks(stack<int> &s1){
    stack<int> s2, s3;
    //copy data from s1 to s2
    transfer(s1, s2, s1.size());
    //copy data from s2 to s3
    transfer(s2, s3, s2.size());
    //copy data from s3 to s1
    transfer(s3, s1, s3.size());
}

void reverse_using_an_extra_stack(stack <int> &s1){
    int n = s1.size();
    stack<int> s2;
    for(int i= 0; i<n; i++){
        //store the top most element
        int top = s1.top();
        //remove the top most element
        s1.pop();
        //transfer n - 1 - i elemets to the helper stack
        transfer(s1, s2, n-1-i);
        //push the top element to the s1 stack(hence in bottom now)
        s1.push(top);
        //transfer the elements from s2 to s1
        transfer(s2, s1, n-1-i);
    }
}
void PrintStack(stack<int> s)
{
    if (s.empty()) 
        return;
    int x = s.top();
    s.pop();
     PrintStack(s);
    cout << x << " ";
    s.push(x);
}
int main(){
    stack<int> s1;
    s1.push(5); 
    s1.push(4); 
    s1.push(3);
    s1.push(1);
    s1.push(0);
    PrintStack(s1);
    cout<<endl;
    reverse_using_three_stacks(s1);
    PrintStack(s1);
    cout<<endl;
    reverse_using_an_extra_stack(s1);
    PrintStack(s1);
    return 0;
}