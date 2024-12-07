#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct {
    int x, y;
    int cost;
    char direction;
} Node;

typedef struct {
    Node *heap;
    int size;
    int capacity;
} MinHeap;

MinHeap *createMinHeap(int capacity) {
    MinHeap *heap = malloc(sizeof(MinHeap));
    heap->heap = malloc(sizeof(Node) * capacity);
    heap->size = 0;
    heap->capacity = capacity;
    return heap;
}

void freeMinHeap(MinHeap *heap) {
    free(heap->heap);
    free(heap);
}

void swap(Node *a, Node *b) {
    Node temp = *a;
    *a = *b;
    *b = temp;
}

void push(MinHeap *heap, Node node) {
    heap->heap[heap->size] = node;
    int i = heap->size++;
    while (i > 0 && heap->heap[i].cost < heap->heap[(i - 1) / 2].cost) {
        swap(&heap->heap[i], &heap->heap[(i - 1) / 2]);
        i = (i - 1) / 2;
    }
}

Node pop(MinHeap *heap) {
    Node root = heap->heap[0];
    heap->heap[0] = heap->heap[--heap->size];
    int i = 0;
    while (2 * i + 1 < heap->size) {
        int smallest = i;
        if (heap->heap[2 * i + 1].cost < heap->heap[smallest].cost)
            smallest = 2 * i + 1;
        if (2 * i + 2 < heap->size && heap->heap[2 * i + 2].cost < heap->heap[smallest].cost)
            smallest = 2 * i + 2;
        if (smallest == i) break;
        swap(&heap->heap[i], &heap->heap[smallest]);
        i = smallest;
    }
    return root;
}

int isValid(int x, int y, int rows, int cols, int **visited) {
    return x >= 0 && y >= 0 && x < rows && y < cols && !visited[x][y];
}

int getCost(char cell) {
    return (int)cell;  // Convert character to ASCII value
}

void printDirection(char direction) {
    switch (direction) {
        case 'U': printf("Move: Up\n"); break;
        case 'D': printf("Move: Down\n"); break;
        case 'L': printf("Move: Left\n"); break;
        case 'R': printf("Move: Right\n"); break;
    }
}

int dijkstra(char **maze, int rows, int cols, int startX, int startY, int endX, int endY) {
    int **visited = malloc(rows * sizeof(int *));
    int **costs = malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        visited[i] = calloc(cols, sizeof(int));
        costs[i] = malloc(cols * sizeof(int));
        for (int j = 0; j < cols; j++)
            costs[i][j] = INT_MAX;
    }

    costs[startX][startY] = 0;  // Start with 0 cost
    MinHeap *heap = createMinHeap(rows * cols);
    push(heap, (Node){startX, startY, 0, '\0'});

    int directions[4][2] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    char dirChars[4] = {'U', 'D', 'L', 'R'};

    while (heap->size > 0) {
        Node current = pop(heap);
        if (visited[current.x][current.y]) continue;

        visited[current.x][current.y] = 1;

        if (current.direction) {
            printDirection(current.direction);
        }

        if (current.x == endX && current.y == endY) {
            int result = costs[endX][endY];
            for (int i = 0; i < rows; i++) {
                free(visited[i]);
                free(costs[i]);
            }
            free(visited);
            free(costs);
            freeMinHeap(heap);
            return result;
        }

        for (int i = 0; i < 4; i++) {
            int nx = current.x + directions[i][0];
            int ny = current.y + directions[i][1];

            if (isValid(nx, ny, rows, cols, visited)) {
                int newCost = costs[current.x][current.y] + getCost(maze[nx][ny]);
                if (newCost < costs[nx][ny]) {
                    costs[nx][ny] = newCost;
                    push(heap, (Node){nx, ny, newCost, dirChars[i]});
                }
            }
        }
    }

    for (int i = 0; i < rows; i++) {
        free(visited[i]);
        free(costs[i]);
    }
    free(visited);
    free(costs);
    freeMinHeap(heap);
    return -1; // No path found
}

int main() {
    int rows, cols;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    char **maze = malloc(rows * sizeof(char *));
    for (int i = 0; i < rows; i++) {
        maze[i] = malloc((cols + 1) * sizeof(char));  // +1 for null terminator
    }

    printf("Enter the maze (use any characters, 'S' for start, 'E' for end):\n");
    for (int i = 0; i < rows; i++) {
        scanf("%s", maze[i]);
    }

    int startX = -1, startY = -1, endX = -1, endY = -1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (maze[i][j] == 'S') {
                startX = i;
                startY = j;
            } else if (maze[i][j] == 'E') {
                endX = i;
                endY = j;
            }
        }
    }

    if (startX == -1 || startY == -1 || endX == -1 || endY == -1) {
        printf("Error: Start ('S') or End ('E') point missing in the maze.\n");
        for (int i = 0; i < rows; i++) free(maze[i]);
        free(maze);
        return 1;
    }

    int cost = dijkstra(maze, rows, cols, startX, startY, endX, endY);
    if (cost != -1)
        printf("The cheapest cost is: %d\n", cost);
    else
        printf("No path found!\n");

    for (int i = 0; i < rows; i++) {
        free(maze[i]);
    }
    free(maze);

    return 0;
}