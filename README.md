# {EPITECH} | First year | Elementary programming in C project

**Project Name: BSQ - Finding the largest square in a map**

**Description:**
This project is a program written in C that reads a map from a file or generates a map based on given parameters, and finds the largest square that can be placed within the map, without overlapping any obstacles. 

**How it Works:** The code uses a dynamic programming approach to fill the sizes matrix. Specifically, it iterates through each cell in the grid and checks the size of the largest square that can be formed with that cell as the bottom-right corner. It then fills in the corresponding cell in the sizes matrix with this value. The code continues this process for each cell in the grid until the entire sizes matrix is filled.

**Features:**

    Efficiently finds the largest square in a map
    Can read a map from a file or generate a map based on given parameters
    Handles error cases such as missing or invalid files

**Usage:**
To use the program, simply compile the code with the Makefile provided, and then run the resulting executable, providing the path to the map file as a command-line argument, or the board parameters if generating a board. For example:

make

./bsq map.txt

./bsq 10x10 "xxx...ooo"

**Contributing:**
Contributions to the project are welcome! Please feel free to fork the repository, make changes, and submit a pull request.


Thanks for checking out my project!
