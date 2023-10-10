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

Graph graph_new(bool is_directed);
void graph_add_edge(Graph *graph, int from, int to);
void graph_del_edge(Graph *graph, int from, int to);
bool graph_has_edge(Graph graph, int from, int to);
AdjacentNodes graph_get_adjacent_nodes(Graph graph, int node);
