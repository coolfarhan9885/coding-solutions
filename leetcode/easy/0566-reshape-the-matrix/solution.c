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