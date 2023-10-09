#include "libs/maybe_int.h"

#define GRAPH_SIZE 64

typedef struct {
	MaybeInt adjacency[GRAPH_SIZE][GRAPH_SIZE];
} Graph;

Graph graph_new(void);
void graph_add_edge(Graph *graph, int a, int b);
void graph_del_edge(Graph *graph, int a, int b);
bool graph_has_edge(Graph graph, int a, int b);
