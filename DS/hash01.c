#include<stdio.h>

unsigned int division_hash(int key, int table_size){
    return key % table_size;
}
int main() {
    int key = 42;
    int table_size = 100;
    unsigned int division_hash_value = division_hash(key, table_size);
    printf("%u\n", division_hash_value);
    return 0;
}