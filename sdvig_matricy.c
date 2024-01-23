// Программа циклического сдвига матрицы вправо

#include <stdio.h>

int* readLine(int sizeX){
    int* line = malloc(sizeof(int) * sizeX);
    
    for (int i = 0; i < sizeX; i++){
        int current;
        scanf("%i", &current);
        line[i] = current;
    }

    return line;
}

int** readMatrix(int sizeX, int sizeY){
    int** matrix = malloc(sizeof(int*) * sizeY);
    for (int i = 0; i < sizeY; i++) {
        int* line = readLine(sizeX);
        matrix[i] = line;
    }
    return matrix;
}

int main()
{
    int sizeX, sizeY, offset;
    scanf("%i %i %i", &sizeX, &sizeY, &offset);

    int** matrix = readMatrix(sizeX, sizeY);
    
    for (int y = 0; y < sizeY; y++){
        for (int x = 0; x < sizeX; x++){
            int realX = ((x - offset) % sizeX + sizeX) % sizeX;
            printf("%i ", matrix[y][realX]);
        }
        printf("\n");
    }

    return 0;
}