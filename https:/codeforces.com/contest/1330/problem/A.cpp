#include <bits//stdc++.h>
 
using namespace std;
 
void fastIO(){
ios_base::sync_with_stdio(0);
cin.tie(NULL);
cout.tie(NULL);
}
 
 
int main(){
	fastIO();
	int test;
 
 cin>>test;
while(test--){

int n,x;
 cin>>n>>x;
bool a[201]={false};

int p;
for(int i=0;i<n;i++)
{
cin>>p;
if(!a[p])
a[p]=true;
}
 int k=0;
int ans=n+x;
for(int i=1;i<201;i++)
{
if(k<x&&(!a[i]))
{
a[i]=true;
k++;

}

else if((k==x&&(!a[i])))
{
ans=i-1;

break;
}

}
cout<<ans<<endl;

}
return 0;
}
 
