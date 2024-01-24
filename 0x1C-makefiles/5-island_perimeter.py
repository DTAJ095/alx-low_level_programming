#!/usr/bin/python3
""" Define a function that returns the perimeter
of the island
"""


def island_perimeter(grid):
    """ Returns the perimeter of the island
    Params:
        grid(list): list of integers representing the island
    
    Return:
        the perimeter of the island define by the grid
    """
    size = 0
    edges = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return (size * 4 - edges * 2)
