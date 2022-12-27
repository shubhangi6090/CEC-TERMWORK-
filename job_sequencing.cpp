#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool compare(pair<int,int> a,pair<int,int>b)
{
    return a.first> b.first;

}

int main()
{
vector<pair<int,int> >job;

int p,d,n;

cout<<"enter no of job"<<endl;
cin>>n;

for(int i=0;i<n;i++)
{
    cout<<"enter profit"<<endl;
cin>>p;

cout<<"enter deadline"<<endl;
cin>>d;

job.push_back({p,d});
}
 
 sort(job.begin(),job.end(),compare);
 
 
  int profit=0;
 int maxend=0;
 
 for(int i=0;i<n;i++)
 {
     if(job[i].second > maxend)
       maxend=job[i].second;
 }
 
 vector<int> fill(maxend,-1);
 
  for(int i=0;i<n;i++)
 {
     int j=job[i].second -1;
     
     while(j>=0 && fill[j]!= -1)
     {
         j--;
     }
     while(j>=0 && fill[j]== -1)
     {
         fill[j]=i;
         
         profit+=job[i].first;
     }
     
     
 }
  cout<<"profit = "<<profit;
  
  return 0;
  
}
