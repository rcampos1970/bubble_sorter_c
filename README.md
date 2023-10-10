# Bubble Sort in C

This C program, `bubble_sort.c`, demonstrates the **Bubble Sort** algorithm, a simple sorting technique. It sorts an array of integers in ascending order. Here's a brief overview of how to use and understand the program:

## Usage

1. **Compile**: Open a terminal and compile the program using your C compiler.

   ```shell
   gcc bubble_sort.c -o bubble_sort
   ```

2. **Run**: Execute the compiled program.

   ```shell
   ./bubble_sort
   ```

3. **Results**: The program will generate an array of integers, sort it using the Bubble Sort algorithm, and display the sorted array.

## Code Explanation

The `bubble_sort.c` program works as follows:

- An array of integers is generated with random values.

- The Bubble Sort algorithm is applied to the array, repeatedly comparing adjacent elements and swapping them if they are in the wrong order. This process continues until the entire array is sorted.

- The sorted array is then displayed in ascending order.

## Example Output

Here's an example of what you might see when running the program:

```
Original array:
78 14 92 32 42 5 63 71 9 50 

Sorted array:
5 9 14 32 42 50 63 71 78 92
```

## Note

Bubble Sort is a simple sorting algorithm with a time complexity of O(n^2), making it inefficient for large datasets. It is primarily used for educational purposes and not recommended for large-scale sorting tasks.
