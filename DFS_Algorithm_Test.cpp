#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <iterator>
#include <string>

using namespace std;

// Globalspace Globals

vector<int> expanded_nodes_list; // stores node/vertices in the order they're expanded

const int puzzle_8_size = 9; // size of the 8 puzzle including the "0" node
string goalstate_8 = "123456780"; // goal state of the 8 puzzle
string puzz_8_0 = "012345678"; // test problem set where the index matches the node position
string puzz_8_1 = "160273485"; // first given problem set string

// Converts a char in a problem set string to an int to use in the Graph adjacency list and frontier stack/queue
int ConvertChartoInt(string& probset, int index) {

	char character = probset.at(index);
	int conversion = character - 48;
	return conversion;
}

// Custom class to create a graph from a problem set string
class PuzzleGraph8 {

public:

	list<int> adj_list[puzzle_8_size]; // adjacency list of which nodes are connected to neighboring nodes via edges
	stack<int> frontier; // stack for storing which node is ready to be expanded next
	vector<bool> visited; // tracks which nodes have already been visited

	// Constructor (initializes visited bools vector with "false" flags)
	PuzzleGraph8() {

		for (int i = 0; i < puzzle_8_size; i++) {
			visited.push_back(false);
		}
	}

	// Creates an edge between a source vertice and the target vertice
	void addEdge(int source_vert, int dest_vert) {

		adj_list[source_vert].push_back(dest_vert);
	}

	// Prints the Adjacency List of nodes connected to other nodes via edges
	void printAdjList(list<int> adj_list[], int vertices) {

		for (int i = 0; i < vertices; i++) {

			cout << i << "--->";
			list<int> ::iterator it;

			for (it = adj_list[i].begin(); it != adj_list[i].end(); ++it) {
				cout << *it << " ";
			}

			cout << endl;
		}
	}

	// Depth-First Search algorithm using iteration
	void DFS(string& probset) {

		int nextvertex = 0;
		int startvertex = ConvertChartoInt(probset, 0); // Convert the "0" index of the problem set to an int

		frontier.push(startvertex);
		visited[startvertex] = true;

		// While the frontier stack isn't empty
		while (!frontier.empty()) {

			nextvertex = frontier.top();
			frontier.pop();

			expanded_nodes_list.push_back(nextvertex); // Record expanded node

			// If AdjList is size 2
			if (adj_list[nextvertex].size() == 2) {

				// Check if 1st neighbor of next node in frontier has been visited
				if (visited.at(adj_list[nextvertex].front()) == false) {

					frontier.push(adj_list[nextvertex].front());
					visited[adj_list[nextvertex].front()] = true;
				}

				// Check if 2nd neighbor of next node in frontier has been visited
				if (visited.at(adj_list[nextvertex].back()) == false) {

					frontier.push(adj_list[nextvertex].back());
					visited[adj_list[nextvertex].back()] = true;
				}
			}

			// if AdjList is size 1
			if (adj_list[nextvertex].size() == 1) {

				// Check if only neighbor of next node in frontier has been visited
				if (visited.at(adj_list[nextvertex].front()) == false) {

					frontier.push(adj_list[nextvertex].front());
					visited[adj_list[nextvertex].front()] = true;
				}
			}
		}
	}

};

// Create graph using an already created graph object and a problem set string
void createGraph(PuzzleGraph8& name, string& probset) {

	// Edge ruleset for 0123456780 (index matches vertice)
	/*
	* These are hardcoded rules for which edges connect specific nodes in a 3x3 keypad configuration for the 8 puzzle
	pg8_0.addEdge(0, 1);
	pg8_0.addEdge(0, 3);
	pg8_0.addEdge(1, 2);
	pg8_0.addEdge(1, 4);
	pg8_0.addEdge(2, 5);
	pg8_0.addEdge(3, 4);
	pg8_0.addEdge(3, 6);
	pg8_0.addEdge(4, 5);
	pg8_0.addEdge(4, 7);
	pg8_0.addEdge(5, 8);
	pg8_0.addEdge(6, 7);
	pg8_0.addEdge(7, 8);
	*/

	// Based on the problem set string passed, the edges ruleset will be preserved for whatever order the nodes in the string are in

	name.addEdge(ConvertChartoInt(probset, 0), ConvertChartoInt(probset, 1));
	name.addEdge(ConvertChartoInt(probset, 0), ConvertChartoInt(probset, 3));
	name.addEdge(ConvertChartoInt(probset, 1), ConvertChartoInt(probset, 2));
	name.addEdge(ConvertChartoInt(probset, 1), ConvertChartoInt(probset, 4));
	name.addEdge(ConvertChartoInt(probset, 2), ConvertChartoInt(probset, 5));
	name.addEdge(ConvertChartoInt(probset, 3), ConvertChartoInt(probset, 4));
	name.addEdge(ConvertChartoInt(probset, 3), ConvertChartoInt(probset, 6));
	name.addEdge(ConvertChartoInt(probset, 4), ConvertChartoInt(probset, 5));
	name.addEdge(ConvertChartoInt(probset, 4), ConvertChartoInt(probset, 7));
	name.addEdge(ConvertChartoInt(probset, 5), ConvertChartoInt(probset, 8));
	name.addEdge(ConvertChartoInt(probset, 6), ConvertChartoInt(probset, 7));
	name.addEdge(ConvertChartoInt(probset, 7), ConvertChartoInt(probset, 8));
}

// =======================================================================================================================================
// ====================================================		M	A	I	N	==============================================================
// =======================================================================================================================================
int main() {

	// Create object for puzzle 1 (160273485) aka string puzz_8_1
	PuzzleGraph8 pg8_1;

	// Create graph from puzzle 1 (160273485) aka string puzz_8_1
	createGraph(pg8_1, puzz_8_1);

	// Test Print AdjList =================================
	pg8_1.printAdjList(pg8_1.adj_list, puzzle_8_size);
	cout << endl << endl;
	// ====================================================

	// Run DFS algorithm on puzzle 1 (160273485) aka string puzz_8_1
	pg8_1.DFS(puzz_8_1);

	// Test Print out Expanded Nodes List ================
	cout << "Order of expanded nodes: " << endl;
	for (int i = 0; i < expanded_nodes_list.size(); i++) {

		cout << expanded_nodes_list.at(i) << " - ";
	}
	cout << endl << endl;
	// ===================================================



}
