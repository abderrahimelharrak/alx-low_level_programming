#!/usr/bin/python3
"""Defining an island perimeter measuring function."""


def island_perimeter(grid):
    """Returning the perimiter of an island.

    Grid represents water by 0 and land by 1.

    Args:
        grid (list): List of list of integers representes an island.
    Returns:
        Success
    """
    l = len(grid[0])
    L = len(grid)
    E = 0
    size = 0

    for x in range(L):
        for y in range(l):
            if grid[x][y] == 1:
                size += 1
                if (y > 0 and grid[x][y - 1] == 1):
                    E += 1
                if (x > 0 and grid[x - 1][y] == 1):
                    E += 1
    return size * 4 - E * 2
