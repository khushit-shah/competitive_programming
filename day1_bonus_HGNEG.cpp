/**
   The problem says, in a city Humans and Ghouls have houses, but to control the groups there is a rule that no Same species house should be connected i.e Human House can't be connected with another Human home, same with GHOULS
   This configuration will create bipartite graph(Graph in which nodes of one group is only connected with nodes of another gorup)
   Image: https://en.wikipedia.org/wiki/Bipartite_graph#/media/File:Simple-bipartite-graph.svg
   Let's say all nodes in U is Humans home and all nodes in V is GHOULS home.
   We are given N-1 connections(Which home is connected with which another home).
   And we need to ouput the number of more connection we can create (that is |u|*|v| - (n - 1)). 
   So we just need to find how many Human houses and how many GHOULS houses are present.
   The given graph with (n - 1 edges without any cycle represents a tree).
   Then the nodes at level = 0 are Human Home
                     level = 1 are GHOULS Home
                     level = 2 are Human Home
                     level = 3 are GHOULS Home
  image: https://mth350.files.wordpress.com/2012/08/k45.jpg
  
  DFS(Depth First search is used to count the number of human homes and number of GHOULS home)
*/
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> edge(1e5 + 1);
long long u = 0, v = 0;
void dfs(int cur, int level, int parent) {
	sp[cur] = level;
	if(level == 0) {
		u ++;
	} else {
		v ++;
	}
	for(int i : edge[cur]) {	
		if(i != parent) {
			dfs(i, !level, cur);
		}
	}
}

int main() {
	int N;
	cin >> N;
	int root = 0;
	for(int i = 0; i < N - 1; i ++) {
		int from, to;
		cin >> from >> to;
		if(i == 0) root = from;
		edge[from].push_back(to);
		edge[to].push_back(from);
	}
	dfs(root, 0, -1);
	cout << (u * v) - (N - 1) << endl;
	return 0;
}
