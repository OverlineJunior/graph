#include <stdio.h>
#include <stdlib.h>
#include "../graph.h"

int main(void) {
	Graph *g = graph_new(5);

	Vertex *v1 = graph_add_vertex(g, 1);
	Vertex *v2 = graph_add_vertex(g, 2);

	graph_add_edge(g, v1, v2, 10);
	Edge *e = graph_get_edge(*g, v2, v1);

	if (e != NULL)
		printf("Weight: %i\n", e->weight);
}
