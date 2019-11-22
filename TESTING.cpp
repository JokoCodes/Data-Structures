/******************************************************************************

							  Online C++ Compiler.
			   Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

class Vertex
{
public:
	Vertex();
	Vertex(int number);
	void SetNull();
private:
	// vector<Vertex*> adjList;
	int m_value;
	Vertex* m_next;
};

Vertex::Vertex()
{

}

Vertex::Vertex(int number)
{
	m_value = number;
}

void Vertex::SetNull()
{
	m_next = nullptr;
}




class Graph : public Vertex
{
private:
	int numVertices;
	vector <Vertex*> adjLists;

public:
	Graph(int vertices);
	void addEdge(int src, int dest);
	void showList();
};

void Graph::addEdge(int src, int dest)
{
	adjLists[src].push_back(dest);
}


Graph::Graph(int vertices) {
	for (int i = 0; i < vertices; i++)
	{
		Vertex* x = new Vertex(i);
		x->SetNull();
		adjLists.push_back(x);
	}
}

int main()
{
	cout << "Hello World";
	Graph g(5);
	return 0;
}
