#include<iostream>
#include<list>
using namespace std;
class Graph
{
	int v;
	list<long> *l;
	public:
	Graph(int vertices)
	{
		v=vertices;
		l=new list<long>[v];
	}
	
	void addEdge(long a,long b)
	{
		l[a].push_back(b);
		l[b].push_back(a);
	}
	void dfshelper(long vertice,bool visited[],long &count)
	{
		visited[vertice]=true;
		count++;
		
		for(auto i:l[vertice])
		{
			if(!visited[i])
			dfshelper(i,visited,count);
		}
	}
	void dfsmoon()
	{
		bool visited[v]={false};
		long n=v;
		long total_ways=(n*(n-1))/2;
		for(long i=0;i<n;i++)
		{
			long count=0;
			if(!visited[i])
			{
				dfshelper(i,visited,count);
				total_ways=total_ways-((count*(count-1))/2);
			}
		}
		cout<<total_ways<<endl;
	}
};
int main()
{
	int n,e;
	cin>>n>>e;
	Graph g(n);
	for(int i=1;i<=e;i++)
	{
		long a,b;
		cin>>a>>b;
		g.addEdge(a,b);
	}
	g.dfsmoon();
	return 0;
}
