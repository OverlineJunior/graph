#include <stdbool.h>

#define GRAPH_MAX_VALUE 100

typedef struct {
	bool adjacency[GRAPH_MAX_VALUE][GRAPH_MAX_VALUE];
} Graph;

Graph graph_new(void) {
	Graph g = {};

	for (int i = 0; i < GRAPH_MAX_VALUE; i++)
		for (int j = 0; j < GRAPH_MAX_VALUE; j++)
			g.adjacency[i][j] = false;

	return g;
}

void graph_add_edge(Graph *graph, int a, int b) {
	graph->adjacency[a][b] = true;
}

void graph_del_edge(Graph *graph, int a, int b) {
	graph->adjacency[a][b] = false;
	graph->adjacency[b][a] = false;
}

bool graph_has_edge(Graph graph, int a, int b) {
	return graph.adjacency[a][b] || graph.adjacency[b][a];
}
