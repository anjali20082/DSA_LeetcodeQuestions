class Solution {
    public String tictactoe(int[][] moves) {

        char [][] board = new char[3][3];
        //int length = moves.size();

        //initialize the board
        for(int i=0; i< 3; i++){
            for(int j=0; j< 3; j++){
                board[i][j] = ' ';
        }
        }
        //fill the board
        for(int i=0; i< moves.length; i++){

            // System.out.println(moves[i][1]);
            if(i %2 ==0)
            board[moves[i][0]][moves[i][1]] = 'X';
            else
            board[moves[i][0]][moves[i][1]] = '0';
        }
// for(int i=0; i< 3; i++){
//     for(int j=0; j<3; j++){
// System.out.print(board[i][j]);
//     }
//     System.out.print("\n");
// }
// System.out.print(board[1][1]);

            //check for rows
 for(int i=0; i< 3; i++){
    if(board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return board[i][0] == 'X'? "A" : "B";
        

           // check for columns

    if(board[0][i] != ' ' && board[0][i] == board[1][i] && board[1][i] == board[2][i])
            return board[0][i] == 'X' ? "A" : "B";
            
      

}
    //check for diagonals
    if(board[1][1] != ' '&& ((board[0][0] ==board[1][1]&& board [1][1] == board[2][2]) || (board[0][2] == board[1][1] && board[1][1] == board[2][0])))
    return board[1][1]== 'X' ? "A" : "B";
    
   
return moves.length == 9 ? "Draw" : "Pending";
        
    }
}

// class Solution {
//     public String tictactoe(int[][] moves) {
//         char[][] board = new char[3][3];

//         //fill the board
//         for(int i=0; i< moves.length; i++){

//             // System.out.println(moves[i][1]);
//             if(i %2 ==0)
//             board[moves[i][0]][moves[i][1]] = 'X';
//             else
//             board[moves[i][0]][moves[i][1]] = '0';
//         }

//         // Check rows and columns
//         for (int i = 0; i < 3; i++) {
//             if (board[i][0] != 0 && board[i][0] == board[i][1] && board[i][1] == board[i][2])
//                 return board[i][0] == 'X' ? "A" : "B";
//             if (board[0][i] != 0 && board[0][i] == board[1][i] && board[1][i] == board[2][i])
//                 return board[0][i] == 'X' ? "A" : "B";
//         }

//         // Check diagonals
//         if (board[1][1] != 0 &&
//             ((board[0][0] == board[1][1] && board[1][1] == board[2][2]) ||
//              (board[0][2] == board[1][1] && board[1][1] == board[2][0])))
//             return board[1][1] == 'X' ? "A" : "B";

//         return moves.length == 9 ? "Draw" : "Pending";
//     }
// }