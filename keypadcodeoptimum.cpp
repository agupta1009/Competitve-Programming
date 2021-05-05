#include <bits/stdc++.h>
#include <string>
using namespace std;
void Keypad(int num,string output,string input[])
{
    if(num==0||num==1)
    {   
        cout<<output<<endl;
        return ;
    }
    for(int i=0;i<input[num%10].length();i++)
    {
        Keypad(num/10,input[num%10][i]+output,input);
    }
  
}
void printKeypad(int num){
    /* Insert all the possible combinations of the integer number into the output string array. You do not need to
    print anything, just return the number of strings inserted into the array.
    */
    string *input=new string[10];
    input[0]="";
    input[1]="";
    input[2]="abc";
    input[3]="def";
    input[4]="ghi";
    input[5]="jkl";
    input[6]="mno";
    input[7]="pqrs";
    input[8]="tuv";
    input[9]="wxyz";
    string output;
    return Keypad(num,output,input);
}
int main(){
    int num;
    cin >> num;

    printKeypad(num);

    return 0;
}