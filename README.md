# Rush01 Algorithm

The algorithm works by filling a matrix based on the constraints provided in the border of the matrix. The algorithm follows the steps outlined below:

## Line Function

1. Go to the first 'x' (unfilled) position found. If not found, print the matrix and exit.
2. Set `char *prefix` with values found on the filled positions in the current line.
3. Set pair left and right for the current line.
4. Call `get_line_string` with corresponding arguments for left, right, prev, and prefix.

    - If the returned string is not empty, fill the line with the returned string and call the column function without the prev flag.
    - If the returned string is empty, delete the last column filled (except its prefix) and call the column function with a prev flag.

## Column Function

1. Go to the first 'x' (unfilled) position found. If not found, print the matrix and exit.
2. Set `char *prefix` with values found on the filled positions in the current column.
3. Set pair up and down for the current column.
4. Call `get_col_string` with corresponding arguments for up, down, prev, and prefix.

    - If the returned string is not empty, fill the column with the returned string and call the line function without the prev flag.
    - If the returned string is empty, delete the last line filled (except its prefix) and call the line function with a prev flag.
