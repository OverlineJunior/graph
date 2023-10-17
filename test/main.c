#include <stdio.h>
#include <stdlib.h>
#include "../graph.h"

int main(void) {
	Graph *g = graph_new(5);
	graph_add_vertex(g, 1);

	Vertex *v = graph_get_vertex(*g, 1);
	
	if (v != NULL)
		printf("%i\n", v->value);
}
