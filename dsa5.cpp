#include<bits/stdc++.h>
using namespace std;
int digits(int n)
{
    if(n>=0&&n<=9)
    return 1;
    else
    {
        return 1+digits(n%10);
    }
    
}
void show(stack<int>Stack2){
    while(!Stack2.empty()){
        cout<<Stack2.top()<<" ";
        Stack2.pop();
    }
    cout<<endl;
}

int temperory;
int main()
{
    int n;
    cin>>n;
    vector<int>v;
    stack<int> Stack1;
    while(n--)
    {
        int x;
        cin>>x;
        v.push_back(x);
        Stack1.push(x);
    }
    stack<int> Stack2;
    
    while(!Stack1.empty()){
        if(Stack2.empty()){
            Stack2.push(Stack1.top());
            Stack1.pop();
            continue;
        }
        if(digits(Stack1.top())==1  && digits(Stack2.top()) == 1 && abs(Stack1.top()-Stack2.top())==1){
            int a = max(Stack1.top(),Stack2.top());
            int b = min(Stack1.top(),Stack2.top());
            Stack2.pop();
            Stack1.pop();
            Stack2.push((a*10)+b);
            continue;
        }
        
        if(digits(Stack1.top()) == 1  && digits(Stack2.top()) == 2 && Stack2.top()/10!=0){
            if(abs(Stack2.top()%10-Stack1.top())==1 || abs((Stack2.top()/10)%10-Stack1.top())==1){
                int x = Stack2.top()%10;
                int y = (Stack2.top()/10)%10;
                int a = max(Stack1.top(),max(x,y));
                int b = min(Stack1.top(),min(x,y));
                Stack1.pop();
                Stack2.pop();
                Stack2.push(a*10 + b);
                continue;
            }
            else if(Stack1.top()>(Stack2.top()/10)%10){
                Stack2.push(Stack1.top());
                Stack1.pop();
                continue;
            }
        }
        
        if(digits(Stack1.top())!=1 && digits(Stack2.top()) == 2  && Stack2.top()/10 == 0){
            if(abs(Stack1.top()%10-Stack2.top())==1 || abs((Stack1.top()/10)%10-Stack2.top())==1){
                int x = Stack1.top()%10;
                int y = (Stack1.top()/10)%10;
                int a = max(Stack2.top(),max(x,y));
                int b = min(Stack2.top(),min(x,y));
                Stack1.pop();
                Stack2.pop();
                Stack2.push(a*10 + b);
                continue;
            }
        }
        
        if(digits(Stack1.top())!=1 && digits(Stack2.top()) == 2  && Stack2.top()/100 == 0){
            int a = Stack1.top()%10;
            int b = (Stack1.top()/10)%10;
            int c = Stack2.top()%10;
            int d = (Stack2.top()/10)%10;
            if(abs(a-d)==1 ||  abs(b-c)==1){
                int x = max(a,max(b,max(c,d)));
                int y = min(a,min(b,min(c,d)));
                Stack1.pop();
                Stack2.pop();
                Stack2.push(x*10 + y);
                continue;
            }
        }
      
      if(Stack1.top()>Stack2.top()){
          Stack2.push(Stack1.top());
          Stack1.pop();
      }  
      else{
            temperory=Stack1.top();
            Stack1.pop();
            Stack1.push(Stack2.top());
            Stack2.pop();
            Stack1.push(temperory);
            continue;
        }
    }
    
    show(Stack2);
    stable_sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    for(auto x:v)
    cout<<x<<" ";
}

