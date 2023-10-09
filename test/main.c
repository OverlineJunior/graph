#include <stdio.h>
#include "../graph.h"

int main(void) {
	Graph g = graph_new();
	graph_add_edge(&g, 2, 5);
	printf("%i", graph_has_edge(g, 2, 5));
	graph_del_edge(&g, 5, 2);
	printf("%i", graph_has_edge(g, 2, 5));
}
