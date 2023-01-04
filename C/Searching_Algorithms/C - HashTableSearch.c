// [C] - HashTableSearch

/*
Hash table search:
This algorithm searches for a given element in a hash table by
using a hash function to determine the index of the element in the table
and then checking if the element is at that index.
If the element is found, the algorithm returns a pointer to the element;
if the element is not found, the algorithm returns NULL.
*/

#define HASH_TABLE_SIZE 1000

struct element
{
    int data;
    struct element *next;
};

struct element *hash_table[HASH_TABLE_SIZE];

unsigned int hash(int data)
{
    return data % HASH_TABLE_SIZE;
}

struct element *hash_table_search(int target)
{
    unsigned int index = hash(target);
    struct element *e = hash_table[index];
    while (e != NULL)
    {
        if (e->data == target)
            return e;
        e = e->next;
    }
    return NULL;
}
