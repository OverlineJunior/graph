typedef struct {
    int value;
} Vertex;

typedef struct {
    Vertex *v0;
    Vertex *v1;
    int weight;
} Edge;

typedef struct {
    Vertex **vertices;
    int num_vertices;
    int max_vertices;
    Edge **edges;
    int num_edges;
    int max_edges;
} Graph;

Graph *graph_new(int numVertices);
Vertex *graph_get_vertex(Graph graph, int value);
Vertex *graph_add_vertex(Graph *graph, int value);
Edge *graph_get_edge(Graph graph, Vertex *v0, Vertex *v1);
Edge *graph_add_edge(Graph *graph, Vertex *v0, Vertex *v1, int weight);
Edge *graph_add_edge_of(Graph *graph, int val0, int val1, int weight);
