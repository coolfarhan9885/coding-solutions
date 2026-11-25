# Reshape the Matrix

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

In MATLAB, there is a handy function called `reshape` which can reshape an `m x n` matrix into a new one with a different size `r x c` keeping its original data.

You are given an `m x n` matrix `mat` and two integers `r` and `c` representing the number of rows and the number of columns of the wanted reshaped matrix.

The reshaped matrix should be filled with all the elements of the original matrix in the same row-traversing order as they were.

If the `reshape` operation with given parameters is possible and legal, output the new reshaped matrix; Otherwise, output the original matrix.

 

Original
C
 **Example 1:** 

```
Input: mat = [[1,2],[3,4]], r = 1, c = 4
Output: [[1,2,3,4]]

```

 **Example 2:** 

```
Input: mat = [[1,2],[3,4]], r = 2, c = 4
Output: [[1,2],[3,4]]

```

 

 **Constraints:** 

- m == mat.length
- n == mat[i].length
- 1 <= m, n <= 100
- -1000 <= mat[i][j] <= 1000
- 1 <= r, c <= 300

## Solution

**Language:** C  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 15.7 MB (beats 86.98%)  
**Submitted:** 2026-11-25T20:26:16.734Z  

```c
/**
*RESHAPE THE MATRIX
*/

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** matrixReshape(int** mat, int matSize, int* matColSize, int r, int c, int* returnSize, int** returnColumnSizes) {

    int i, j, k;
    int oldCols = matColSize[0];
    int total = matSize * oldCols;

    if (total != r * c)
    {
        *returnSize = matSize;
        *returnColumnSizes = (int*)malloc(matSize * sizeof(int));

        for (i = 0; i < matSize; i++)
            (*returnColumnSizes)[i] = matColSize[i];

        return mat;
    }

    int** result = (int**)malloc(r * sizeof(int*));
    *returnColumnSizes = (int*)malloc(r * sizeof(int));

    for (i = 0; i < r; i++)
    {
        result[i] = (int*)malloc(c * sizeof(int));
        (*returnColumnSizes)[i] = c;
    }

    for (k = 0; k < total; k++)
    {
        i = k / c;
        j = k % c;
        result[i][j] = mat[k / oldCols][k % oldCols];
    }

    *returnSize = r;
    return result;
}
```

---

[View on LeetCode](https://leetcode.com/problems/reshape-the-matrix/)