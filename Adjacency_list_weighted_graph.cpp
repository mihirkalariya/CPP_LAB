#include<bits/stdc++.h>
#include<stdio.h>
#include<vector>

//#define n 5
using namespace std;

void addedge(vector<pair<int,int>> graph[],int u,int e,int weight)
{
	graph[u].push_back(make_pair(e,weight));
	graph[e].push_back(make_pair(u,weight));
}

void pritadj(vector<pair<int,int>> graph[],int n)
{

	for (int i = 0; i < n; ++i)
	{
		cout<<i;
		for (int j = 0; j < graph[i].size(); ++j)
		{
			cout<<"->"<<graph[i][j].first <<"," <<graph[i][j].second;
		}
		cout<<endl;
	}
}

int main()
{
    int n=5;
	vector<pair<int,int>> v[n];
	
	addedge(v, 0, 1, 10);
    addedge(v, 0, 4, 20);
    addedge(v, 1, 4, 30);
    addedge(v, 1, 3, 40);
    addedge(v, 1, 1, 50);
    addedge(v, 1, 2, 60);
    addedge(v, 3, 4, 70);
    addedge(v, 3, 2, 70);
    pritadj(v,n);
}