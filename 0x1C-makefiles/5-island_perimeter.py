#!/usr/bin/python3
"""Defines an island perimeter measuring function."""


def island_perimeter(grid):
    """Return the perimeter of an island.
    The grid represents 0 for water and 1 for land.
    grid : a list of integers
    Returns: the perimeter of the island defined in grid """

    larg = 0
    siz = 0

    for j in range(len(grid)):
        for i in range(len(grid[0])):
            if grid[j][i] == 1:
                siz += 1
                if (i > 0 and grid[j][i - 1] == 1):
                    larg += 1
                if (j > 0 and grid[j - 1][i] == 1):
                    larg += 1
    return 4 * siz - larg * 2
