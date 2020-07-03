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

    previous_cell = None
    left_square_side = 0
    peremiter = 0

    for cell in grid:
        for idx, elem in enumerate(cell):
            if elem == 1:
                peremiter += 4
                if idx > 0:
                    if previous_cell:
                        peremiter -= 2 * previous_cell[elem]
                    peremiter -= 2 * left_square_side
            left_square_side = cell[elem]
        previous_cell = cell
    return peremiter