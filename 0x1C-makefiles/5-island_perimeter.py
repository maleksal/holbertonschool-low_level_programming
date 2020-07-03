#!/usr/bin/python3
""" island_perimeter module"""


def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in grid

    Args:
        grid: list of list of integers

    Return:
        returns the perimeter

    """
    if not grid or len(grid) == 0:
        return 0

    previous_cell = None
    left_square_side = 0
    peremiter = 0

    for cell in grid:
        for elem in range(len(cell)):
            if cell[elem] == 1:
                peremiter += 4
                if elem > 0:
                    if previous_cell and previous_cell[elem] == 1:
                        peremiter -= 2
                    if left_square_side == 1:
                        peremiter -= 2
            left_square_side = cell[elem]
        left_square_side = 0
        previous_cell = cell
    return peremiter
