#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		string st1=to_string(a);
		string st2=to_string(b);
		reverse(st1.begin(),st1.end());
		reverse(st2.begin(),st2.end());
		int sum=stoi(st1)+stoi(st2);
		string ans=to_string(sum);
		reverse(ans.begin(),ans.end());
		int i=0;
		while(ans[i]=='0')
		{
			i++;
		}
		
		cout<<ans.substr(i)<<endl;
	}
	return 0;
}
