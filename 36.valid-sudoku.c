/*
 * @lc app=leetcode id=36 lang=c
 *
 * [36] Valid Sudoku
 */

bool isValidSudoku(char** board, int boardSize, int* boardColSize){
    
    for(int i = 0; i < boardSize; i++)
    {
        char checkrow[boardSize];
        char checkcol[boardSize];
        for(int i = 0; i < boardSize; i++)
        {
            checkrow[i] = '0';
            checkcol[i] = '0';
        }
        for(int j = 0; j < boardSize; j++)
        {
            char curr_cell;
            if((curr_cell = board[i][j]) != '.')
            {
                //printf("%c\n", curr_cell);
                for(int k = 0; k < boardSize; k++)
                {
                    if(checkrow[k] == curr_cell)
                        return false;
                }
                checkrow[j] = curr_cell;
                    //printf("%c\n", curr_cell);
            }
        }
    }
    for(int i = 0; i < boardSize; i++)
    {
        char checkrow[boardSize];
        char checkcol[boardSize];
        for(int i = 0; i < boardSize; i++)
        {
            checkrow[i] = '0';
            checkcol[i] = '0';
        }
        for(int j = 0; j < boardSize; j++)
        {
            char curr_cell;
            if((curr_cell = board[j][i]) != '.')
            {
                for(int k = 0; k < boardSize; k++)
                {
                    if(checkcol[k] == curr_cell)
                        return false;
                }
                checkcol[j] = curr_cell;
                    //printf("%c\n", checkcol[j]);
            }
        }
    }
    
    for(int i = 0; i < 3; i++)
    {   
        for(int j = 0; j < 3; j++)
        {
            char checksqu[boardSize];
            for(int k = 0; k < boardSize; k++)
            {
                checksqu[k] = '0';
            }
            for(int ii = 0; ii < 3; ii++)
            {
                for(int jj = 0; jj < 3; jj++)
                {
                    if(board[3*i+ii][3*j+jj] != '.')
                    {
                        for(int k = 0; k < boardSize; k++)
                        {
                            if(checksqu[k] == board[3*i+ii][3*j+jj])
                                return false;
                        }
                        checksqu[3*ii+jj] = board[3*i+ii][3*j+jj];
                            //printf("%c\n", checksqu[3*ii+jj]);
                    }
                }
            }
        }
    }
    return true;
}



