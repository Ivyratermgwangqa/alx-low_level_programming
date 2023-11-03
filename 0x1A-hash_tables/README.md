# Hash Tables in C

In this project, we will implement a hash table data structure in the C programming language. We will create a simple hash table using separate chaining to handle collisions and implement various functions to manipulate and interact with the hash table.

## Task 0: Create a Hash Table

We will start by creating a function that initializes a hash table. The function will have the following prototype:

```c
hash_table_t *hash_table_create(unsigned long int size);
```

This function will return a pointer to a newly created hash table with a given size. If something goes wrong during creation, the function will return NULL.

## Task 1: Implement the djb2 Hash Function

The djb2 hash function is a widely used algorithm to hash strings. We will implement this hash function with the following prototype:

```c
unsigned long int hash_djb2(const unsigned char *str);
```

This function takes a string and returns an unsigned long integer as the hash value.

## Task 2: Get the Index for a Key

We will create a function that calculates the index for a key in the hash table. The function will have the following prototype:

```c
unsigned long int key_index(const unsigned char *key, unsigned long int size);
```

This function uses the previously implemented djb2 hash function to compute the index at which a key should be stored in the hash table.

## Task 3: Add an Element to the Hash Table

We will create a function that adds an element to the hash table. The function will have the following prototype:

```c
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
```

This function will take a hash table, a key, and a value, and it will insert the key-value pair into the hash table. If a collision occurs, the new node will be added at the beginning of the list. The function will return 1 if the insertion succeeds and 0 otherwise.

## Task 4: Retrieve a Value by Key

We will create a function that retrieves a value associated with a key from the hash table. The function will have the following prototype:

```c
char *hash_table_get(const hash_table_t *ht, const char *key);
```

This function takes a hash table and a key and returns the associated value. If the key couldn't be found, the function will return NULL.

## Task 5: Print the Hash Table

We will implement a function that prints the hash table in the order that elements appear in the array of the hash table. The function will have the following prototype:

```c
void hash_table_print(const hash_table_t *ht);
```

This function will print the key-value pairs in the hash table.

## Task 6: Delete the Hash Table

Finally, we will create a function to delete the entire hash table, freeing the memory allocated for it. The function will have the following prototype:

```c
void hash_table_delete(hash_table_t *ht);
```

This function will deallocate all memory associated with the hash table, including its elements and linked lists.

## Advanced Task: Sorted Hash Table

In this advanced task, we will implement a sorted hash table using the same hash function and data structures as before but with some modifications. The new data structures for the sorted hash table are as follows:

```c
typedef struct shash_node_s
{
     char *key;
     char *value;
     struct shash_node_s *next;
     struct shash_node_s *sprev;
     struct shash_node_s *snext;
} shash_node_t;

typedef struct shash_table_s
{
     unsigned long int size;
     shash_node_t **array;
     shash_node_t *shead;
     shash_node_t *stail;
} shash_table_t;
```

We will rewrite the previous functions for this sorted hash table, creating the following functions:

- `shash_table_create`: Initializes a sorted hash table with a given size.
- `shash_table_set`: Inserts key-value pairs into the sorted hash table, maintaining the keys in sorted order.
- `shash_table_get`: Retrieves a value associated with a key in the sorted hash table.
- `shash_table_print`: Prints the sorted hash table by traversing the sorted linked list.
- `shash_table_print_rev`: Prints the sorted hash table in reverse order.
- `shash_table_delete`: Deletes the entire sorted hash table, freeing all associated memory.

These functions are intended to be used with the new data structures to create a sorted hash table.

## Conclusion

Hash tables are versatile data structures used in a wide range of applications. This project helps you understand how hash tables work and how to implement them in C. Whether you need to create a basic hash table or a more advanced sorted hash table, these tasks cover the essential concepts and operations involved in working with hash tables.
