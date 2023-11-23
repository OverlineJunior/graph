#include <stdio.h>
#include <stdlib.h>
#include "../graph.h"

int main(void) {
	Graph *g = graph_new(5);
	graph_add_edge_of(g, 1, 2, 10);
	Edge *e = graph_get_edge_of(*g, 1, 2);

	if (e != NULL)
		printf("Weight: %i\n", e->weight);
}
