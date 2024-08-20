# Arrays and Vectors in C++

## 1. Arrays: Definition and Advantages

An **array** is a collection of elements, all of the same type, stored in contiguous memory locations. Arrays have a **fixed size** that is defined at the time of creation and cannot be changed.

### Advantages of Arrays

| Advantages of Fixed-Size Arrays                |
| ---------------------------------------------- |
| 1. Accessing elements is fast due to indexing. |
| 2. Simple and easy to implement.               |
| 3. Contiguous memory allocation.               |

## 2. Fixed Size vs. Dynamic Size 

| Property     | Fixed-Size Array                           | Dynamic-Size Vector                          |
| ------------ | ------------------------------------------ | -------------------------------------------- |
| Size         | Defined at creation and cannot be changed. | Grows as needed, often doubling in capacity. |
| Memory Usage | Contiguous and static.                     | Expands dynamically when needed.             |

### Fixed-Size Array Example

```cpp
int arr[5] = {1, 2, 3, 4, 5};
```

### Heap Allocation Example 

```cpp
int* heapArray = new int[5];
```

In a heap-allocated array, memory is allocated dynamically, providing flexibility.

## 3. Dynamic-Sized Vectors: Definition and Example

A **vector** is a dynamic array in C++ that automatically resizes itself when it reaches capacity, typically doubling in size.

### Vector Example (Doubling Capacity)

```cpp
std::vector<int> v;
v.push_back(1);  // Initial capacity may be small.
v.push_back(2);  // Capacity doubles when needed.
```

![image](https://github.com/user-attachments/assets/6026353b-27ce-48ed-bad2-62573d62a75a)


### Advantages of Vectors

| Advantages of Dynamic Vectors                                |
| ------------------------------------------------------------ |
| 1. Dynamic resizing and capacity management.                 |
| 2. Inbuilt functions for various operations (e.g., size, insert). |
| 3. Ease of insertion and deletion compared to fixed arrays.  |

### Functions in Vectors

- **size()**: Returns the number of elements.
- **capacity()**: Returns the current capacity.
- **push_back()**: Adds an element at the end.

## 4. Size Comparison: Array vs. Vector

| Aspect      | Array                        | Vector     |
| ----------- | ---------------------------- | ---------- |
| Size Method | `sizeof(arr)/sizeof(arr[0])` | `v.size()` |

### Vector Example Code

```cpp
int fun(std::vector<int> v) {
    return v.size();
}
```

### Array Example Code

```cpp
int fun(int arr[], int n) {
    return n;
}
```

# Operations on Arrays :

## 1. Search Operation in an Unsorted Array

Searching involves iterating through the array until the element is found.

```cpp
int search(int arr[], int x, int n) {
    for(int i = 0; i < n; ++i) {
        if(arr[i] == x)
            return i; // Position of the element found.
    }
    return -1; // Element not found.
}
```

![Search Operation Diagram](https://github.com/user-attachments/assets/b01f28ba-337c-4b9a-bbb2-304baec1aef2)

**Example:**

- `arr[] = {1, 2, 3, 4, 5, 6}`
- `x = 3`

**How It Works:**

1. Loop starts from index 0.
2. Compares each element with `x`.
3. Stops when `x` is found and returns the index.

## 2. Insert Operation in an Array

Inserting an element involves shifting elements to the right.

- **int x**: The element to be inserted.
- **int pos**: The position in which the element should be inserted.
- **int n**: The current size of the array.
- **int capacity**: The total capacity of the array (including any empty slots).

```cpp
int insert(int arr[], int x, int pos, int n, int capacity) {
    if (n == capacity)
        return n; // Array is full.

    int index = pos - 1;
    for (int i = n - 1; i >= index; i--) {
        arr[i + 1] = arr[i]; // Shift elements right.
    }
    arr[index] = x; // Insert the new element.
    return (n + 1); // Return the new size.
}
```

![Insert Operation Diagram](https://github.com/user-attachments/assets/2f5ca2e7-f418-4fb8-9a4e-2efa35c0bf91)

### Insertion Example :

**Initial Values:**
- `arr[] = {5, 10, 20, _, _}`
- `x = 7`
- `pos = 2`
- `capacity = 5`

**Explanation:**

1. **Calculate Index:**
   - `index = pos - 1`
   - `index = 2 - 1 = 1`

2. **Loop Starts at `n-1`:**
   - `n = 3` (current size of the array)
   - Loop starts at `i = 2` (last element index in the current array).

**Step-by-Step Table**

| Step | Array State Before Operation | Array State After Operation | Explanation                                        |
|------|-------------------------------|-----------------------------|----------------------------------------------------|
| 1    | `{5, 10, 20, _, _}`           | `{5, 10, 20, 20, _}`       | Shift `20` to the next position, because `20` goes to index 3.  |
| 2    | `{5, 10, 20, 20, _}`          | `{5, 10, 10, 20, _}`       | Shift `10` to the next position, because `10` goes to index 2.  |
| 3    | `{5, 10, 10, 20, _}`          | `{5, 7, 10, 20, _}`        | Insert `7` at index 1.                            |
| 4    | `{5, 7, 10, 20, _}`           |                             | Final array state after insertion.                |

**Loop Details:**

- **Index Calculation:**
  - `index = pos - 1 = 1`

- **Loop Execution:**
  - Start at `i = n - 1 = 2`
  - Check `arr[i]` and move elements:
    - For `i = 2`: `arr[3] = arr[2]` (so `20` moves to index 3)
    - For `i = 1`: `arr[2] = arr[1]` (so `10` moves to index 2)
    - For `i = 0`: `arr[1] = arr[0]` (so `5` stays at index 0)

- **Insertion:**
  - After the loop, `arr[index] = x` sets `arr[1] = 7`.

**Final Array:**

- `{5, 7, 10, 20, _}`

The final size of the array is `(n + 1)` where `n` is the original size before insertion.

# Time Complexities

Time complexity is a computational concept used to describe the efficiency of an algorithm in terms of the time it takes to complete as a function of the input size. Understanding time complexities helps in evaluating and comparing the performance of algorithms, enabling the selection of the most efficient solution for a given problem.

## Table of Time Complexities :

| Time Complexity      | Notation  | Description                                |
|----------------------|-----------|--------------------------------------------|
| Constant Time        | O(1)      | Execution time does not change with input size. |
| Logarithmic Time     | O(log n)  | Execution time grows logarithmically as input size increases. |
| Linear Time          | O(n)      | Execution time grows linearly with the input size. |
| Linearithmic Time    | O(n log n)| Execution time grows in proportion to `n` multiplied by the logarithm of `n`. |
| Quadratic Time       | O(n^2)    | Execution time grows quadratically as the input size increases. |
| Exponential Time     | O(2^n)    | Execution time grows exponentially with the input size. |
| Factorial Time       | O(n!)    | Execution time grows factorially with the input size. |

## Why We Use Time Complexities

Time complexities provide a way to analyze and compare the efficiency of algorithms. By understanding how an algorithm's running time scales with increasing input sizes, we can make informed decisions about which algorithms to use for different problems, ensuring optimal performance and resource utilization.

## 3. Deletion of Elements in an Array

Deletion of an element involves shifting elements to the left to fill the space of the deleted element.

- **int x**: The element to be deleted.
- **int n**: The current size of the array.

```cpp
int delete(int arr[], int n, int x) {
    int i;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == x) 
            break; // If element is found, stop here
    }

    if (i == n) // The loop reached the end, the element is not found
        return n;

    // Shift elements left to remove the element
    for (int j = i; j < n - 1; ++j) {
        arr[j] = arr[j + 1];
    }

    return n - 1; // Return the new size after deletion
}
```

### Deletion Example

**Initial Values:**

- arr[] = {3, 8, 12, 5, 6}
- x = 12
- n = 5 (current size of the array)

**Explanation:**

1. **Locate the Element:**
   - Loop through the array to find the element `x`.
   - In this case, `x = 12` is found at index 2.

2. **Shift Elements Left:**
   - Start shifting elements to the left to fill the gap left by the deleted element.

**Step-by-Step Table**

| Step | Array State Before Operation | Array State After Operation | Explanation                                        |
| ---- | ---------------------------- | --------------------------- | -------------------------------------------------- |
| 1    | {3, 8, 12, 5, 6}             | {3, 8, 5, 5, 6}             | Shift 5 to the left, as 12 is removed.             |
| 2    | {3, 8, 5, 5, 6}              | {3, 8, 5, 6, 6}             | Shift 6 to the left, filling the space left by 12. |
| 3    | {3, 8, 5, 6, 6}              | {3, 8, 5, 6, _}             | Final array state after deletion.                  |

**Loop Details:**

- **Location Check:**
  - Loop through the array, checking if `arr[i] == x`.
  - If found, start shifting elements left from that position.

- **Shift Elements Left:**
  - For i = 2 (element `12`), shift `5` to index 2.
  - For i = 3 (element `5`), shift `6` to index 3.

**Final Array:**

- {3, 8, 5, 6, _}

The final size of the array is (n - 1) where `n` is the original size before deletion.
