
#include<iostream>
#include<string>
#include <vector>
#include "Graph.h"



using namespace std;

int main()
{
	Graph G;
	vector <int> x[5];
	int userchoice = 0;
	int Exit = 0;
	int vertex1;
	int vertex2;

	
	while (Exit == 0)
	{

		while (userchoice < 1 || userchoice > 7)
		{
			cout << "Select an option below:" << endl;
			cout << "Press 1 to add an edge to the graph." << endl;
			cout << "Press 2 to remove an edge from the graph." << endl;
			cout << "Press 3 to find an edge in the graph." << endl;
			cout << "Press 4 to find the out edges of a vertex." << endl;
			cout << "Press 5 to find the in edges of a vertex." << endl;
			cout << "Press 6 to print out the adjacency matrix." << endl;
			cout << "Press 7 to quit." << endl;
			cout << "Option: ";
			cin >> userchoice;
			cout << endl;
		}

		switch (userchoice)
		{
		case 1://Add an edge to the graph
			cout << "Pick a valid vertex to start from: ";
			cin >> vertex1;
			cout << endl << "Pick a valid vertex to point to: ";
			cin >> vertex2;
			G.AddEdge(x, vertex1, vertex2);
			break;

		case 2://Remove an edge from the graph
			cout << "Pick a valid vertex to start from: ";
			cin >> vertex1;
			cout << endl << "Pick a valid vertex to remove the edge from: ";
			cin >> vertex2;
			G.RemoveEdge(x, vertex1, vertex2);
			break;

		case 3: //Find an edge in the graph
			cout << "Pick a valid vertex: ";
			cin >> vertex1;
			cout << endl << "Pick another valid vertex: ";
			cin >> vertex2;
			G.HasEdge(x, vertex1, vertex2);
			break;
			
		case 4: // Find out edges of the vertex

			break;

		case 5: //Find the in edges of the vertex

			break;

		case 6: //Print out the adjacency matrix (currently just the list of each)
			G.PrintGraph(x, 5);
			break;

		case 7://exit program
			Exit = 1;
			break;
		}
		userchoice = 0;
	}
	return 0;
}
