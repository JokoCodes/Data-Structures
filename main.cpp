
#include<iostream>
#include<string>

using namespace std;

struct Vertex //node
{
	string storedval;
};

//how to use dynamically allocated arrays
/*int* a = new int[n];  // Allocate n ints and save ptr in a.
delete [] a;  // When done, free memory pointed to by a.
a = NULL;     // Clear a to prevent using invalid memory reference.*/

//adjacency list
class Graph {
public:
	//constructor
	Graph(int x)
	{
		cout << "Graph class initiated" << endl;
		vertnum = x;
	}
	void AddNode(string addval); //adds a node to the graph. i is the value stored in the node
	void AddEdge(Vertex* i, Vertex* j); //Add the edge(i, j) to E, add edge between nodes i and j
	void RemoveEdge(Vertex* i, Vertex* j); //Remove the edge(i, j) from E
	void RemoveNode(string removeval); //Removes the node from the graph.
	bool HasEdge(Vertex* i, Vertex* j); //Check if the edge(i, j) ∈ E.
	int* OutEdges(int i); //Return a list of all integers j such that edge(i, j) ∈ E.
	int* InEdges(int i); //Return a list of all integers j such that edge(j, i) ∈ E.
	//destructor
	~Graph()
	{
		cout << "Goodbye!" << endl;
	}
private:
	int vertnum; //number of vertices in graph
};



//*******************************************************************************************************
//*******************************************************************************************************

int main()
{
    //Graph G;
	int userchoice = 0;
	int exitprog = 0;
	cout << "Welcome!" << endl;
	//while user does not want to quit
	while (exitprog == 0)
	{
		//user selects what they want to do
		while (userchoice < 1 || userchoice>6)
		{
			cout << "Please use the menu below to navigate this program:" << endl;
			cout << "Press 1 - Add Node" << endl << "Press 2 - Add Edge" << endl <<
				"Press 3 - Remove Node" << endl << "Press 4 - Remove Edge" <<
				endl << "Press 5 - Check if Edge Exists" << endl << "Press 6 - Find Out Edges" << endl
				<< "Press 7 - Find In Edges" << endl << "Press 8 - Exit Program" << endl;
		}
		//user's choice is executed
		switch (userchoice)
		{
		case 1://add node

			break;
		case 2://add edge

			break;
		case 3://remove node

			break;
		case 4://remove edge

			break;
		case 5://check if edge exists

			break;
		case 6://find out edges

			break;
		case 7://find in edges

			break;
		case 8://exit program
			exitprog = 1;
			break;
		}
		userchoice = 0;
	}
	return 0;
}
//*******************************************************************************************************
//*******************************************************************************************************

void Graph::AddNode(string addval)//adds a node to the graph. i is the value stored in the node
{

}
void Graph::AddEdge(Vertex* i, Vertex* j) //Add the edge(i, j) to E
{

}
void Graph::RemoveEdge(Vertex* i, Vertex* j) //Remove the edge(i, j) from E
{

}
void Graph::RemoveNode(string removeval) //Removes the node from the graph.
{

}
bool Graph::HasEdge(Vertex* i, Vertex* j) //Check if the edge(i, j) ∈ E.
{
	//actually do stuff
	return true;
}
int* Graph::OutEdges(int i) //Return a list of all integers j such that edge(i, j) ∈ E.
{
	//****VERTNUM IS NOT THE RIGHT NUMBER***
	int* array = new int[vertnum];

	//do stuff

	return array;
}
int* Graph::InEdges(int i) //Return a list of all integers j such that edge(j, i) ∈ E.
{
	//****VERTNUM IS NOT THE RIGHT NUMBER***
	int* array = new int[vertnum];

	//do stuff

	return array;
}
