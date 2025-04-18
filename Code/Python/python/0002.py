from typing import * 
import copy
def rotateMatrix(mat : List[List[int]]):
    n = len(mat)
    mat2 = copy.deepcopy(mat)   
    for i in range(0,n):
        for j in range(0,n):
            mat[i][j] = mat2[n-1-j][i]
            # print("mat")
            # for row in mat:
                # print(row)
            # print()
            # print("mat2")
            # for row in mat2:
                # print(row)
            # print()
    return mat


# Example usage
matrix = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
print("Original matrix:")
for row in matrix:
    print(row)
print()
rotated_matrix = copy.deepcopy(rotateMatrix(matrix))  # Make a copy to avoid modifying original

print("\nRotated matrix (clockwise 90 degrees):")
for row in rotated_matrix:
    print(row)