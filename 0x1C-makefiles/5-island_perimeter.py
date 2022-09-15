#!/usr/bin/python3
"""Module that calculates the perimeter of an island in a grid."""

def island_perimeter(grid):
    """Returns the perimeter of the island in grid."""

    perim = 0
    for i in grid:
        perim += i.count(1)
        
    return 2 * (perim + 1) if perim > 0 else 0