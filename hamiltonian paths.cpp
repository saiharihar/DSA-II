#include<bits/stdc++.h>
using namespace std;
    int v,e;
	vector<int>graph;
	int vis[n];
	
	
int main(){
	
	cin>>v>e;
	for(int i=0;i<e;i++){
		int x,y;
		cin>>x>>y;
		graph[x].push_back(y);
		graph[y].push_back(x);
	}
	
	for(int i=0;i<n;i++){
		paths(i,1);
	}
}
