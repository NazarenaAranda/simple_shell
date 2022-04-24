#include "main.h"

/**
 * _free - funcion que libera dos punteros
 * @grid: doble puntero para ser liberado
 * @height: altura de la array que se va pasar
 * Return: void
 */

void _free(char **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
