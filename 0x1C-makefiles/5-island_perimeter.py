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
    peremiter = 0

    for cell in grid:
        for elem_index in range(len(cell)):
            if cell[elem_index] == 1:
                peremiter += 4
                if elem_index > 0:
                    if cell[elem_index - 1]:
                        peremiter -= 2
                    if previous_cell and previous_cell[elem_index]:
                        peremiter -= 2
        previous_cell = cell
    return peremiter
