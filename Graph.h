﻿#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Graph {
public:

	Graph();
	Graph(int x);
	~Graph();
	void AddEdge(vector <int> E[], int i, int j); //Add the edge(i, j) to E, add edge between nodes i and j
	void RemoveEdge(vector <int> E[], int i, int j); //Remove the edge(i, j) from E
	bool HasEdge(vector <int> E[], int i, int j); //Check if the edge(i, j) ∈ E.
	int OutEdges(vector <int> E[], int i); //Return a list of all integers j such that edge(i, j) ∈ E.
	int InEdges(vector <int> E[], int i); //Return a list of all integers j such that edge(j, i) ∈ E.
	void PrintGraph(vector <int> E[]);

private:
	int Size;
	vector<int> E; //Look at lab 2 Node class
	vector <vector<int>> adjMatrix; //Creates the matrix using a 2D vector
};
