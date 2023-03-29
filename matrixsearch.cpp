#include <iostream>

/*
 * Program Name: MatrixSearch.cpp
 * Author: shuckster87
 * Date Created: 3/28/23
 * Purpose: The purpose is to create a matrix that has random values in each column and row and try to search for the value
 *          that the user inputs
 */


int main() {
    int column, row, max, random, n;
    std::cout << "Enter how many columns you want: " << std::endl;
    std::cin >> column;
    std::cout << "Enter how many rows you want: " << std::endl;
    std::cin >> row;
    std::cout << "Enter the max value for the matrix: " << std::endl;
    std::cin >> max;

    //multiplying column and row for number of values inside the matrix
    n = column * row;

    //creating the matrix
    int matrix[column][row];

    //filling in random values in the matrix based on the max value that the user inputted
    for(int i = 0; i < column; i++){
        for(int j = 0; j < row; j++){
            for(int k = 0; k <= n; k++)
                random = rand() % (max-1);
            matrix[column][row] = random;
        }
    }
    //
    for(int i = 0; i < column; i++){
        for(int j = 0; j < row; j++){
            std::cout << matrix[column][row] << " ";
        }
        std::cout << "\n";
    }

        return 0;
}
