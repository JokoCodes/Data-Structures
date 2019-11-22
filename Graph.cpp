#include "Graph.h"

Graph::Graph()
{
	
}

Graph::Graph(int x)
{

}

void Graph::AddEdge(vector <int> E[] ,int i, int j) //Add the edge(i, j) to E (snippet from https://www.geeksforgeeks.org/graph-and-its-representations/)
{
	if (HasEdge(E, i, j) == false)
	{
		E[i].push_back(j);
		cout << "An edge from " << i << " pointing to " << j << " has been created!" << endl;
	}
	cout << endl;
	}

void Graph::RemoveEdge(vector <int> E[], int i, int j) //Remove the edge(i, j) from E
{
	if (HasEdge(E, i, j) == false) {
		cout << "There is no edge to remove!" << endl;
	}
	else
	{
		for (int a = 0; a < E[i].size(); a++)
		{
			if (j == E[i].at(a))
			{
				E[i].erase(E[i].begin() + a);
				cout << "The edge from " << i << " to " << j << " has been removed!" << endl;
			}
		}
	}
}

bool Graph::HasEdge(vector <int> E[], int i, int j) //Check if the edge(i, j) ∈ E.
{
	for (int a = 0; a < E[i].size(); a++)
	{
		if (j == E[i].at(a))
		{
			cout << "An edge from " << i << " to " << j << " exists!" << endl;
			return true;
		}
	}
	cout << "No edge from " << i << " to " << j << " exists!" << endl;
	return false;
}

int Graph::OutEdges(vector <int> E[], int i) //Return a list of all integers j such that edge(i, j) ∈ E. (What all i points out to)
{

	return 0;
}
int Graph::InEdges(vector <int> E[], int i) //Return a list of all integers j such that edge(j, i) ∈ E. (What all points to i)
{

	return 0;
}

void Graph::PrintGraph(vector<int> E[], int Size) // snippet from https://www.geeksforgeeks.org/graph-and-its-representations/
{
	for (int i = 0; i < Size; i++)
	{
		cout << "Adjacency list of vertex " << i << ":" << endl;
		cout << i;
		for (auto x : E[i]) 
		{
			cout << " -> " << x;
		}
		cout << endl << endl;
	}
}
