#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
*free_grid - Libére une grille bidimensionnnelle d'entiers.
*@grid: Le pointeur vers la grille bidimensionnelle.
*@height: La hauteur de la grille
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
