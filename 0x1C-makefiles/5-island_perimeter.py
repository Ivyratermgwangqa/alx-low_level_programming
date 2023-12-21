#!/usr/bin/python3

"""
5-island_perimeter
"""

def island_perimeter(grid):
    p = 0
    rows, columns= len(grid), len(grid[0])

    for i in range(rows):
        for j in range(colums):
            if grid[i][j] == 1:
                p += 4

                if i > 0 and grid[i - 1][j] == 1:
                    p -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    p -= 2

    return p
