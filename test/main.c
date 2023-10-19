#include <stdio.h>
#include <stdlib.h>
#include "../graph.h"

int main(void) {
	Graph *g = graph_new(5);

	graph_add_edge_of(g, 1, 2, 10);

	Vertex *v1 = graph_get_vertex(*g, 1);
	Vertex *v2 = graph_get_vertex(*g, 2);

	if (v1 == NULL || v2 == NULL)
		return EXIT_FAILURE;

	Edge *e = graph_get_edge(*g, v2, v1);

	if (e != NULL)
		printf("Weight: %i\n", e->weight);
}
