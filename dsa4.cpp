#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,z,n;
    cin>>x>>y>>z>>n;
    vector < vector < vector<int> > > v;
  for(int i = 0; i < x; i++)
  {
    vector < vector < int > > w;
    v.push_back( w );
    for(int j = 0; j < y; j++)
    {
      vector <int> r;
      v[i].push_back( r );
      for(int k = 0; k < z; k++)
      {
          int l;
          cin>>l;
        v[i][j].push_back( l);
      }
    }
  }
    int fun=0;
    int mid_element=0,middley=0;
    int mid=0;
    int l=0,r=x-1;
    int count1=0,count2=0;
    while(1){
        if(r<l)
            {
            cout<<0<<endl;
            count1=1;
            break;
            }
        if(l==r)
        {
            if(v[l][0][0]<=n && v[l][y-1][z-1]>=n)
            {
                mid_element=l;
                cout<<v[l][0][0]<<" "<<v[l][y-1][z-1]<<endl;
            }
            else{
                cout<<0<<endl;
                count1=1;
            }
                fun++;
            break;
        }
        mid=l+(r-l)/2;
        fun++;
        if(v[mid][0][0]>n)
        {
            r=mid-1;
            if(r<0)
            {
                cout<<0<<endl;
                count1=1;
                break;
            }
        }
        else if(v[mid][y-1][z-1]<n)
            l=mid+1;
        else
        {
            mid_element=mid;
            cout<<v[mid][0][0]<<" "<<v[mid][y-1][z-1]<<endl;
            break;
        }

    }
    if(count1==0)
    {

        l=0;
        r=y-1;
        while(1)
        {
            if(r<l)
            {
                cout<<0<<endl;
                count2=1;
                break;
            }
            if(l==r)
            {
                if(v[mid_element][l][0]<=n && v[mid_element][l][z-1]>=n)
                {
                    middley=l;
                    cout<<v[mid_element][l][0]<<" "<<v[mid_element][l][z-1]<<endl;
                }
                else
                {
                    count2=1;
                    cout<<0<<endl;
                }
                fun++;
                break;
            }
            mid=l+(r-l)/2;
            fun++;
            if(v[mid_element][mid][0]>n)
            {
                r=mid-1;
                if(r<0)
                {
                    cout<<0<<endl;
                    count2=1;
                    break;
                }
            }
            else if(v[mid_element][mid][z-1]<n)
            {
                l=mid+1;
            }
            else
            {
                middley=mid;
                cout<<v[mid_element][mid][0]<<" "<<v[mid_element][mid][z-1]<<endl;
                break;
            }

        }
        if(count2==0)
        {
            l=0;
            r=z-1;

            while(1)
            {
                if(r<l)
                {
                    cout<<0<<endl;
                    break;
                }
                if(l==r)
            {
                if(v[mid_element][middley][l]==n)
                    cout<<mid_element<<" "<<middley<<" "<<l<<endl;
                    else
                        cout<<0<<endl;
                fun++;
                break;
            }
                mid=l+(r-l)/2;
                fun++;
                if(v[mid_element][middley][mid]<n)
                    l=mid+1;
                else if(v[mid_element][middley][mid]>n)
                {
                    r=mid-1;
                    if(r<0)
                    {
                        cout<<0<<endl;
                        break;
                    }
                }
                else
                {
                    cout<<mid_element<<" "<<middley<<" "<<mid<<endl;
                    break;
                }
            }
        }
    }
    cout<<fun;
}