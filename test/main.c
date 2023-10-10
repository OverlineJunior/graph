#include <stdio.h>
#include "../graph.h"

int main(void) {
	Graph g = graph_new(false);
	graph_add_edge(&g, 2, 5);
	graph_add_edge(&g, 2, 3);
	graph_add_edge(&g, 3, 2);

	AdjacentNodes adj = graph_get_adjacent_nodes(g, 2);

	for (int i = 0; i < adj.size; i++)
		printf("%i ", adj.values[i]);
}
