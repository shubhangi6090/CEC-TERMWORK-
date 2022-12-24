#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
vector<pair<int,int> >act;

int e,s,n;

cout<<"enter no of process"<<endl;
cin>>n;

for(int i=0;i<n;i++)
{
    cout<<"enter start time"<<endl;
cin>>s;

cout<<"enter end time"<<endl;
cin>>e;

act.push_back({e,s});
}
 
 sort(act.begin(),act.end());


 int count=0;
 int currentend=-1;


 for(int i=0;i<n;i++)
 {
    if(act[i].second > currentend)
    {
        count++;
        currentend=act[i].first;
    }
 }
cout<<count<<endl;

return 0;
}
