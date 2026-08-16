# C Matrix Addition

## Explanation

This program adds two matrices of the same dimensions.

Each element of the first matrix is added to the corresponding element of the second matrix.

The result is stored in a third matrix.

## Problem Statement

Write a C program to accept two matrices of the same size and calculate their sum.

## Features

- Accepts matrix dimensions
- Accepts two matrices
- Adds corresponding elements
- Stores the result in another matrix
- Uses two-dimensional arrays
- Displays the resulting matrix

## How It Works

The program first reads the number of rows and columns.

It then reads the elements of the first matrix and second matrix.

Nested for loops are used to access every element.

Each corresponding pair of elements is added.

The result is stored in the sum matrix.

Finally the resulting matrix is displayed.

## Technologies Used

- C
- GCC Compiler
- Code Editor

## Data Structure Used

- Two-dimensional array

Three 2D arrays are used:

- first
- second
- sum

## Methods Used

- main()
- printf()
- scanf()

## Control Structures Used

- for loop
- nested for loop
- if statement

## Operators Used

- +
- =
- <
- ++
- ||

## Matrix Operation

For two matrices A and B:

C[i][j] = A[i][j] + B[i][j]

## Program Flow

Start
↓
Read rows and columns
↓
Validate matrix size
↓
Read first matrix
↓
Read second matrix
↓
Add corresponding elements
↓
Store results
↓
Display result matrix
↓
End

## Sample Input

Enter number of rows: 2

Enter number of columns: 2

Enter elements of first matrix:

1 2
3 4

Enter elements of second matrix:

5 6
7 8

## Sample Output

Sum of matrices:

6 8
10 12

## Time Complexity

O(rows × columns)

## Space Complexity

O(rows × columns)

## Key Learning

This program teaches two-dimensional arrays and nested loops through a basic matrix operation.

## File Location

matrix_addition.c

## Repository Structure

C-Matrix-Addition/
├── README.md
└── matrix_addition.c

## Author

V.Harini
