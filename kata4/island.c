#include <stdlib.h>
#include <stdio.h>
#include "island.h"
/** grid_perimeter
		reciver un arreglo binario que contiene solo 1 y 0,
		estos representan un cuadro de tierra y y de agua correspondientemente,
		y calcula el perimetro de de la tierra total

   @param:
     grid: es un arreglo bidemencional que sirve prar representar los grids
     MaxRow: el tamaño del arreglo que contiene los arreglos.
     MaxCol: el tamaño de los arreglos que contienen los valores de 1 y 0.
   @return:
     int: perimetro de la isla o grid.
 */
int grid_perimeter(int ** grid, int MaxRow, int MaxCol) {
	int perimeter = 0, i, j, temperi;
	for (i = 0; i < MaxRow; i++) {
		for (j = 0; j < MaxCol; j++) {
			temperi = 4;
			if (grid[i][j] == 0) {
				temperi = 0;
			}
			else {
				if (i != 0) {
					temperi -= grid[i - 1][j];
				}
				if (i != MaxRow - 1) {
					temperi -= grid[i + 1][j];
				}
				if (j != 0) {
					temperi -= grid[i][j - 1];
				}
				if (j != MaxCol - 1) {
					temperi -= grid[i][j + 1];
				}
			}
			perimeter += temperi;
		}
	}

	return perimeter;
}
