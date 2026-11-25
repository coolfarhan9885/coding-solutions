/**
*TANSPOSE MATRIX
*/

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** transpose(int** matrix, int matrixSize, int* matrixColSize, int* returnSize, int** returnColumnSizes) {
    int i, j;
    int rows = matrixSize;
    int cols = matrixColSize[0];

    int** result = (int**)malloc(cols * sizeof(int*));
    *returnColumnSizes = (int*)malloc(cols * sizeof(int));

    for (j = 0; j < cols; j++)
    {
        result[j] = (int*)malloc(rows * sizeof(int));
        (*returnColumnSizes)[j] = rows;

        for (i = 0; i < rows; i++)
        {
            result[j][i] = matrix[i][j];
        }
    }

    *returnSize = cols;
    return result;
}