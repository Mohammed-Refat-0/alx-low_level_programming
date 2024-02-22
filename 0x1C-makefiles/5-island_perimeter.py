#!/usr/bin/python3

def island_perimeter(grid):
    """returns the perimeter of the island described in grid
    Args:
        grid: list of lists of intergers
    """
    depth = len(grid)
    height = 0
    for i in grid[0]:
        if i == 1:
            height += 1
    perimeter = 2 * depth + 2 * height
    return perimeter
