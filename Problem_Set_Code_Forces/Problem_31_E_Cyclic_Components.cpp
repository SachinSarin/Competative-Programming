/*
You are given an undirected graph consisting of n vertices and m edges. Your task is to find the number of connected components which are cycles.

Here are some definitions of graph theory.

An undirected graph consists of two sets: set of nodes (called vertices) and set of edges. Each edge connects a pair of vertices. All edges are bidirectional (i.e. if a vertex a is connected with a vertex b, a vertex b is also connected with a vertex a). An edge can't connect vertex with itself, there is at most one edge between a pair of vertices.

Two vertices u and v belong to the same connected component if and only if there is at least one path along edges connecting u and v.

A connected component is a cycle if and only if its vertices can be reordered in such a way that:

the first vertex is connected with the second vertex by an edge,
the second vertex is connected with the third vertex by an edge,
...
the last vertex is connected with the first vertex by an edge,
all the described edges of a cycle are distinct.
A cycle doesn't contain any other edges except described above. By definition any cycle contains three or more vertices.

There are 6 connected components, 2 of them are cycles: [7,10,16] and [5,11,9,15].
Input
The first line contains two integer numbers n and m (1≤n≤2⋅105, 0≤m≤2⋅105) — number of vertices and edges.

The following m lines contains edges: edge i is given as a pair of vertices vi, ui (1≤vi,ui≤n, ui≠vi). There is no multiple edges in the given graph, i.e. for each pair (vi,ui) there no other pairs (vi,ui) and (ui,vi) in the list of edges.

Output
Print one integer — the number of connected components which are also cycles.

Examples
inputCopy
5 4
1 2
3 4
5 4
3 5
outputCopy
1
inputCopy
17 15
1 8
1 12
5 11
11 9
9 15
15 5
4 13
3 13
4 3
10 16
7 10
16 7
14 3
14 4
17 6
outputCopy
2
Note
In the first example only component [3,4,5] is also a cycle.

The illustration above corresponds to the second example.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
const int MAX = (int)2e5 + 5;
vector<int>v[MAX];
int n, m;
int vis [MAX] = {0}; // tag
int flag,res=0,is;
 
void dfs(int k)
{
	is = 1;
	vis[k] = 1;
	 if (v[k].size()!= 2) // each point of determination
		flag = 1;
	 for (int i: v [k]) // for new uses, traversal vector
	if (vis[i]==0)       
		dfs(i);
}
int main()
{
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		int x, y;
		cin >> x >> y;
		 v [x] .push_back (y); // table Adjacency
		v[y].push_back(x);
	}
	for (int i = 1; i <= n; i++)
	{
		flag = 0;
		is = 0;
		if (vis[i] == 0)  
		dfs(i);
		if (flag == 0&&is==1) 
			res++;
	}
	cout << res<<endl;
	return 0;
}
