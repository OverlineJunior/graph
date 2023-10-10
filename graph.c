#include <stdbool.h>

#define GRAPH_MAX_VALUE 100

typedef struct {
	int values[GRAPH_MAX_VALUE];
	int size;
} AdjacentNodes;

typedef struct {
	bool adjacency[GRAPH_MAX_VALUE][GRAPH_MAX_VALUE];
	bool is_directed;
} Graph;

Graph graph_new(bool is_directed) {
	Graph g = {
		.is_directed = is_directed,
	};

	for (int i = 0; i < GRAPH_MAX_VALUE; i++)
		for (int j = 0; j < GRAPH_MAX_VALUE; j++)
			g.adjacency[i][j] = false;

	return g;
}

void graph_add_edge(Graph *graph, int from, int to) {
	graph->adjacency[from][to] = true;

	if (!graph->is_directed)
		graph->adjacency[to][from] = true;
}

void graph_del_edge(Graph *graph, int from, int to) {
	graph->adjacency[from][to] = false;

	if (!graph->is_directed)
		graph->adjacency[to][from] = false;
}

bool graph_has_edge(Graph graph, int from, int to) {
	return graph.adjacency[from][to];
}

AdjacentNodes graph_get_adjacent_nodes(Graph graph, int node) {
	AdjacentNodes adj = {
		.size = 0,
	};

	for (int n = 0; n < GRAPH_MAX_VALUE; n++)
		if (graph_has_edge(graph, node, n)) {
			adj.values[adj.size] = n;
			adj.size++;
		}

	return adj;
}
