#include <stdio.h>
#include <stdlib.h>
#include "../graph.h"

int main(void) {
	Graph *g = graph_new(5);
	graph_add_edge_of(g, 1, 2, 10);
	graph_add_edge_of(g, 1, 3, 20);
	graph_add_edge_of(g, 2, 4, 30);

	Vertex **adj = graph_get_adjascent_vertices(*g, graph_get_vertex(*g, 1));

	for (int i = 0; i < g->num_vertices; i++)
		if (adj[i] != NULL)
			printf("%i\n", adj[i]->value);

	free(adj);
	free(g);
}
