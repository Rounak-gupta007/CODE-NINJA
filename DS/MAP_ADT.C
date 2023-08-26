#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the key-value pair structure
typedef struct KeyValuePair {
    char *key;
    int value;
    struct KeyValuePair *next;
} KeyValuePair;

// Define the Map structure
typedef struct Map {
    KeyValuePair *head;
} Map;

// Initialize a new empty map
Map* initializeMap() {
    Map *map = (Map*)malloc(sizeof(Map));
    map->head = NULL;
    return map;
}

// Insert a key-value pair into the map
void insert(Map *map, const char *key, int value) {
    KeyValuePair *newPair = (KeyValuePair*)malloc(sizeof(KeyValuePair));
    newPair->key = strdup(key);
    newPair->value = value;
    newPair->next = map->head;
    map->head = newPair;
}

// Get the value associated with a key in the map
int get(Map *map, const char *key) {
    KeyValuePair *current = map->head;
    while (current != NULL) {
        if (strcmp(current->key, key) == 0) {
            return current->value;
        }
        current = current->next;
    }
    return -1;  // Return a default value if key is not found
}

// Free the memory used by the map
void freeMap(Map *map) {
    KeyValuePair *current = map->head;
    while (current != NULL) {
        KeyValuePair *temp = current;
        current = current->next;
        free(temp->key);
        free(temp);
    }
    free(map);
}

int main() {
    Map *map = initializeMap();

    insert(map, "apple", 5);
    insert(map, "banana", 3);
    insert(map, "cherry", 8);

    printf("Value of 'apple': %d\n", get(map, "apple"));
    printf("Value of 'banana': %d\n", get(map, "banana"));
    printf("Value of 'cherry': %d\n", get(map, "cherry"));
    printf("Value of 'grape': %d\n", get(map, "grape"));

    freeMap(map);
    return 0;
}
