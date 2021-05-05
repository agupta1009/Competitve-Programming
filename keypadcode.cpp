#include <bits/stdc++.h>
#include <string>
using namespace std;
int Keypad(int num,string output[],string input[])
{
    if(num==1||num==0)
    {
        output[0]=input[1];
        return 1;
    }
    int k=num%10;
    int ans=Keypad(num/10,output,input);
        int l=0;
        string *sample=new string[ans];
        for(int i=0;i<ans;i++)
        {
            sample[i]=output[i];
        }
    for(int l=0;l<ans*input[k].length();)
    {
    for(int i=0;i<input[k].length();i++)
    {
        for(int j=0;j<ans;j++)
        {
            output[l]=sample[j]+input[k][i];
            l++;
        }
    }
    }   
    return ans*input[k].length();
}
int keypad(int num, string output[]){
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
    return Keypad(num,output,input);
}


int main(){
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}
