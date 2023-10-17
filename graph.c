#include <stdlib.h>
#include <stdbool.h>

// Fixes circular dependency between Vertex and Edge.
struct Edge;

typedef struct {
    int value;
    struct Edge **edges;
} Vertex;

typedef struct {
    int weight;
    struct Vertex **vertices;
} Edge;

typedef struct {
    Vertex **vertices;
    int num_vertices;
    int max_vertices;
} Graph;

void assert_msg(bool condition, char msg[]) {
    if (!condition) {
        printf("%s\n", msg);
        exit(EXIT_FAILURE);
    }
}

Vertex *vertex_new(int value) {
    Vertex *v = malloc(sizeof(Vertex));
    v->value = value;

    return v;
}

Graph *graph_new(int max_vertices) {
    Graph *g = malloc(sizeof(Graph));
    g->vertices = malloc(max_vertices * sizeof(Vertex *));
    g->num_vertices = 0;
    g->max_vertices = max_vertices;

    return g;
}

// Returns NULL if no vertex is found.
Vertex *graph_get_vertex(Graph graph, int value) {
    for (int i = 0; i < graph.num_vertices; i++)
        if (graph.vertices[i]->value == value)
            return graph.vertices[i];

    return NULL;
}

void graph_add_vertex(Graph *graph, int value) {
    assert_msg(graph->num_vertices < graph->max_vertices, "Cannot exceed graph's size");

    Vertex *v = graph_get_vertex(*graph, value);
    if (v != NULL)
        return;

    graph->vertices[graph->num_vertices] = vertex_new(value);
    graph->num_vertices++;
}
