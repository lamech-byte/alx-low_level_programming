# 0x1E.C - Search Algorithms

This was project on search algorithms. I implemented
various types of search algorithms and stated the corresponding space/time
complexities for each.

## Helper Files

* [listint](./listint):
  * [create_list.c](./listint/create_list.c): C function that creates a `listint_t`
singly linked list.
  * [free_list.c](./listint/free_list.c): C function that frees a `listint_t`
singly linked list.
  * [print_list.c](./listint/print_list.c): C function that prints the contents
of a `listint_t` singly linked list.

* [skiplist](./skiplist):
  * [create_skiplist.c](./skiplist/create_skiplist.c): C function that creates
a `skiplist_t` singly skipped list.
  * [free_skiplist.c](./skiplist/free_skiplist.c): C function that frees a
`skiplist_t` singly skipped list.
  * [print_skiplist.c](./skiplist/print_skiplist.c): C function that prints the
contents of a `skiplist_t` singly skipped list.

Function Prototypes

| File                    | Prototype                                                       |
| ----------------------- | --------------------------------------------------------------- |
| `0-linear.c`            | `int linear_search(int *array, size_t size, int value);`        |
| `1-binary.c`            | `int binary_search(int *array, size_t size, int value);`        |
| `100-jump.c`            | `int jump_search(int *array, size_t size, int value);`          |
| `102-interpolation.c`   | `int interpolation_search(int *array, size_t size, int value);` |
| `103-exponential.c`     | `int exponential_search(int *array, size_t size, int value);`   |
| `104-advanced_binary.c` | `int advanced_binary(int *array, size_t size, int value);`      |

## Tasks

* **0. Linear search**
* **1. Binary search**
* **2. Big O #0**
* **3. Big O #1**
* **4. Big O #2**
* **5. Big O #3**
* **6. Big O #4**
* **7. Jump search**
* **8. Big O #5**
* **9. Interpolation search**
* **10. Exponential search**
* **11. Advanced binary search**
* **12. Jump search in a singly linked list**
* **13. Linear search in a skip list**
* **14. Big O #6**
* **15. Big O #7**
