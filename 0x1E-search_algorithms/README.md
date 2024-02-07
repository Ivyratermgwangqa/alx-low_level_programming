# 0x1E. C - Search Algorithms

Welcome to the Search Algorithms repository! In this project, we implement various search algorithms to efficiently find values in different types of data structures such as arrays, linked lists, and skip lists. Below is a detailed overview of each task and the corresponding files.

## Task Descriptions

### 0. Linear Search
- **File:** `0-linear.c`
- **Description:** Implements the linear search algorithm to find a value in an array of integers.
- **Prototype:** `int linear_search(int *array, size_t size, int value)`
- **Usage:** Compile `0-main.c` along with `0-linear.c` to test the implementation.

### 1. Binary Search
- **File:** `1-binary.c`
- **Description:** Implements the binary search algorithm to find a value in a sorted array of integers.
- **Prototype:** `int binary_search(int *array, size_t size, int value)`
- **Usage:** Compile `1-main.c` along with `1-binary.c` to test the implementation.

### 2. Big O #0
- **File:** `2-O`
- **Question:** What is the time complexity (worst case) of a linear search in an array of size n?

### 3. Big O #1
- **File:** `3-O`
- **Question:** What is the space complexity (worst case) of an iterative linear search algorithm in an array of size n?

### 4. Big O #2
- **File:** `4-O`
- **Question:** What is the time complexity (worst case) of a binary search in an array of size n?

### 5. Big O #3
- **File:** `5-O`
- **Question:** What is the space complexity (worst case) of a binary search in an array of size n?

### 6. Big O #4
- **File:** `6-O`
- **Question:** What is the space complexity of the `allocate_map` function?

### 7. Jump Search
- **File:** `100-jump.c`
- **Description:** Implements the jump search algorithm to find a value in a sorted array of integers.
- **Prototype:** `int jump_search(int *array, size_t size, int value)`
- **Usage:** Compile `100-main.c` along with `100-jump.c` using `-lm` flag to link the math library, then run the executable.

### 8. Big O #5
- **File:** `101-O`
- **Question:** What is the time complexity (average case) of a jump search in an array of size n, using step = sqrt(n)?

### 9. Interpolation Search
- **File:** `102-interpolation.c`
- **Description:** Implements the interpolation search algorithm to find a value in a sorted array of integers.
- **Prototype:** `int interpolation_search(int *array, size_t size, int value)`
- **Usage:** Compile `102-main.c` along with `102-interpolation.c` to test the implementation.

### 10. Exponential Search
- **File:** `103-exponential.c`
- **Description:** Implements the exponential search algorithm to find a value in a sorted array of integers.
- **Prototype:** `int exponential_search(int *array, size_t size, int value)`
- **Usage:** Compile `103-main.c` along with `103-exponential.c` to test the implementation.

### 11. Advanced Binary Search
- **File:** `104-advanced_binary.c`
- **Description:** Implements an advanced binary search algorithm to find the first occurrence of a value in a sorted array of integers.
- **Prototype:** `int advanced_binary(int *array, size_t size, int value)`
- **Usage:** Compile `104-main.c` along with `104-advanced_binary.c` to test the implementation.

### 12. Jump Search in a Singly Linked List
- **File:** `105-jump_list.c`
- **Description:** Implements the jump search algorithm to find a value in a sorted singly linked list.
- **Prototype:** `listint_t *jump_list(listint_t *list, size_t size, int value)`
- **Usage:** Compile `105-main.c` along with `105-jump_list.c` and required listint functions to test the implementation.

### 13. Linear Search in a Skip List
- **File:** `106-linear_skip.c`
- **Description:** Implements the linear search algorithm to find a value in a sorted skip list.
- **Prototype:** `skiplist_t *linear_skip(skiplist_t *list, int value)`
- **Usage:** Compile `106-main.c` along with `106-linear_skip.c` and required skiplist functions to test the implementation.

### 14. Big O #6
- **File:** `107-O`
- **Question:** What is the time complexity (average case) of a jump search in a singly linked list of size n, using step = sqrt(n)?

### 15. Big O #7
- **File:** `108-O`
- **Question:** What is the time complexity (average case

) of a jump search in a skip list of size n, with an express lane using step = sqrt(n)?

## Getting Started

1. Clone the repository: `git clone <repository-url>`
2. Navigate to the project directory: `cd search_algorithms`
3. Compile the desired test file along with the corresponding algorithm file using a C compiler.
4. Run the compiled executable to test the algorithm implementation.

## Contributing

Contributions to improve existing algorithms, add new algorithms, or optimize code efficiency are highly appreciated. To contribute:

1. Fork the repository.
2. Create a new branch (`git checkout -b feature/improvement`)
3. Make your changes and commit them (`git commit -am 'Add new feature'`)
4. Push to the branch (`git push origin feature/improvement`)
5. Create a new Pull Request.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

Feel free to reach out if you have any questions or suggestions!

Happy Coding! 🚀

