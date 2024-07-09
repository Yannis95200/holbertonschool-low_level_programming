#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - Alloue une grille bidimensionnelle d'entiers.
 * @width: La largeur de la grille.
 * @height: La hauteur de la grille0
 * Return:  Pointeur vers la grille bidimensionnelle ou NULL si l'allocation
 * de mémoire échoue ou si `width` ou `height` est infér ou �gal a 0
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = (int **)malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(arr[j]);
				free(arr);
				return (NULL);
			}
		}

	}

	return (arr);
}
