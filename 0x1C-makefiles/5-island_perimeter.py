#!/usr/bin/python3
"""Module that calculates the perimeter of an island in a grid."""


def island_perimeter(grid):
    """Returns the perimeter of the island in grid."""

    perim = 0
    idx = 0
    fir = 0
    for i in grid:
        con = i.count(1)
        if con:
            fir += 1
            if fir == 1:
                idx = i.index(1)
        if 1 in i and i.index(1) != idx:
            break
        perim += i.count(1)
    else:
        return 2 * (perim + 1) if perim > 0 else 0
    return 0
