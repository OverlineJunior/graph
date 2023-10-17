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
    int numVertices;
} Graph;

Graph *graph_new(int numVertices);
Vertex *graph_get_vertex(Graph graph, int value);
void graph_add_vertex(Graph *graph, int value);
