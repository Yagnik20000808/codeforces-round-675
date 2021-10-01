#include <iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		long long u,v,t1,t2;
		cin>>u>>v;
		t1=u;
		t2=v;
		int setu=0,setv=0,a[32]={0},b[32]={0},i=1,flag=1;
		while(t1>0 || i<32){
			if(t1%2)
			{
				setu++;
				a[i]++;
			}
			a[i]+=a[i-1];
			t1=t1/2;
			i++;
		}
		i=1;
		while(t2>0){
			if(t2%2)
			{
				setv++;
				b[i]++;
			}
			b[i]+=b[i-1];
			if(b[i]>a[i])
			{
				flag=0;
				//cout<<"=> "<<a[i]<<' '<<b[i]<<' '<<i<<endl;
			}
			t2=t2/2;
			i++;
		}
		if(u<=v && setu>=setv && flag)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
