#include <stdbool.h>

#define SIZE 9

/* Check if placing 'c' at (row, col) is valid */
bool	isValid(char **board, int row, int col, char c)
{
	int	i;
	int	boxRow;
	int	boxCol;

	i = 0;
	while(i < SIZE)
	{
		if (board[row][i] == c)
			return (false);
		if (board[i][col] == c)
			return (false);
		boxRow = 3 * (row / 3) + i / 3;
		boxCol = 3 * (col / 3) + i % 3;
		if (board[boxRow][boxCol] == c)
			return (false);
		i++;
	}
	return (true);
}

/* Backtracking solver */
bool	solve(char **board)
{
	int		row;
	int		col;
	char	c;

	row = 0;
	while (row < SIZE)
	{
		col = 0;
		while (col < SIZE)
		{
			if (board[row][col] == '.')
			{
				c = '1';
				while (c <= '9')
				{
					if (isValid(board, row, col, c))
					{
						board[row][col] = c;
						if (solve(board))
							return (true);
						board[row][col] = '.'; /* backtrack */
					}
					c++;
				}
				return (false); /* no valid number found */
			}
			col++;
		}
		row++;
	}
	return (true); /* solved */
}

void	solveSudoku(char **board, int boardSize, int *boardColSize)
{
	solve(board);
}
