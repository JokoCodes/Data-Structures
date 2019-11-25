#include "Graph.h"
#include <vector>

Graph::Graph()
{
	Size = 5;

	for (int i = 0; i < Size; i++)
	{
		adjMatrix.push_back(vector<int>());  //Begins creating the 2D matrix, initializing it to 0.
		for (int j = 0; j < Size; j++)
		{
			adjMatrix[i].push_back(0);
		}
	}
}

Graph::Graph(int x)
{
	Size = x;
	for (int i = 0; i < Size; i++)
	{
		E.push_back(i);
	}

	for (int i = 0; i < Size; i++)
	{
		adjMatrix.push_back(vector <int>());
		for (int j = 0; j < Size; j++)
		{
			adjMatrix[i].push_back(0);
		}
	} 
}

Graph::~Graph()
{

}

void Graph::AddEdge(vector<int> E[], int i, int j) //Add the edge(i, j) to E (snippet from https://www.geeksforgeeks.org/graph-and-its-representations/)
{
	if (HasEdge(E, i, j) == false)
	{
		adjMatrix[i][j] = 1; //Marks the location in the adjacency matrix.
		E[i].push_back(j);
		cout << "An edge from " << i << " pointing to " << j << " has been created!" << endl;

	}
	cout << endl;
	}

void Graph::RemoveEdge(vector<int> E[], int i, int j) //Remove the edge(i, j) from E
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
				adjMatrix[i][j] = 0; //Reverts the location's value to 0.
			}
		}
		
	}
}

bool Graph::HasEdge(vector<int> E[], int i, int j) //Check if the edge(i, j) ∈ E.
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

int Graph::OutEdges(vector<int> E[], int i) //Return a list of all integers j such that edge(i, j) ∈ E. (What all i points out to)
{
	cout << "The out edges for the vertex " << i << " are: ";
	for (int a = 0; a < E[i].size(); a++)
	{
		cout << E[i].at(a) << " ";
	}
	cout << endl;
	return 0;
}

int Graph::InEdges(vector<int> E[], int i) //Return a list of all integers j such that edge(j, i) ∈ E. (What all points to i)
{
	vector <int> inEdges;
	//cout << "The in edges for the vertex " << i << " are: ";
	for (int a = 0; a < Size; a++)
	{
		if (HasEdge(E, a, i) == true) //Will print a sentence with regards to which vertices are connected to the input value.
		{
			inEdges.push_back(a); //Stores values of vertices that are later printed out.
		}
	}
	cout << endl;
	cout << "The in edges for the vertex " << i << " are: ";
	for (int a = 0; a < inEdges.size(); a++)
	{
		cout << inEdges.at(a) << " ";
	}
	cout << endl << endl;
	return 0;
}

void Graph::PrintGraph(vector<int> E[]) // snippet from https://www.geeksforgeeks.org/graph-and-its-representations/
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
	cout << "Adjacency matrix: " << endl;
	for (int i = 0; i < Size; i++)
	{
		for (int j = 0; j < Size; j++)
		{
			cout << adjMatrix[i][j] << " ";
		}
		cout << endl;
	}
}
