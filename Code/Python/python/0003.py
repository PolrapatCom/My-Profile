def uniquePaths(m: int, n: int) -> int:
    """
    Calculates the number of unique paths from the top-left corner to the bottom-right corner
    of a grid of size m x n, where you can only move down or right.

    Args:
        m: Number of columns in the grid.
        n: Number of rows in the grid.

    Returns:
        The number of unique paths.
    """

    # dp = [[0] * m for _ in range(n)]
    dp = [[0 for _ in range(m)] for _ in range(n)]
    dp[0][0] = 1
    for i in range(n):
        for j in range(m):
            if i>0:	
                dp[i][j] += dp[i-1][j]
            if j>0:
                dp[i][j] += dp[i][j-1]
    print(dp)
    return dp[n-1][m-1]
    pass  # Return the number of paths to reach bottom right cell


# Example usage
m = 3  # Number of columns
n = 2  # Number of rows
unique_paths = uniquePaths(m, n)
print(f"Number of unique paths from ({m}, {n}) grid: {unique_paths}")
