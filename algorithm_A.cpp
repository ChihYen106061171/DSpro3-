#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "../include/algorithm.h"

using namespace std;

/******************************************************
 * In your algorithm, you can just use the the funcitons
 * listed by TA to get the board information.(functions 
 * 1. ~ 4. are listed in next block) 
 * 
 * The STL library functions is not allowed to use.
******************************************************/

/*************************************************************************
 * 1. int board.get_orbs_num(int row_index, int col_index)
 * 2. int board.get_capacity(int row_index, int col_index)
 * 3. char board.get_cell_color(int row_index, int col_index)
 * 4. void board.print_current_board(int row_index, int col_index, int round)
 * 
 * 1. The function that return the number of orbs in cell(row, col)
 * 2. The function that return the orb capacity of the cell(row, col)
 * 3. The function that return the color fo the cell(row, col)
 * 4. The function that print out the current board statement
*************************************************************************/


void algorithm_A(Board board, Player player, int index[]){

    // cout << board.get_capacity(0, 0) << endl;
    // cout << board.get_orbs_num(0, 0) << endl;
    // cout << board.get_cell_color(0, 0) << endl;
    // board.print_current_board(0, 0, 0);

    //////////// Random Algorithm ////////////
    // Here is the random algorithm for your reference, you can delete or comment it.
    srand(time(NULL));
    int i,j,row,col;
    int max = -1;
    int total = 0;
    int currnum = 0;
    int color = player.get_color(); //out color
    int s[5][6];  //score;
    
    //score initialize
    for(i=0;i<5;i++){
        for(j=0;j<6;j++){
            s[i][j] = 0;
        }
    }

    //reverse attack?
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 6; j++)
        {
            currnum = board.get_orbs_num(i, j);
            total = total + currnum;
        }
        
    }

    //98*0.6 = 59    
    if(total >= 30){  //reverse attack
        
        while(1){
        row = rand() % 5;
        col = rand() % 6;
        if(board.get_cell_color(row, col) == color || board.get_cell_color(row, col) == 'w') break;
       }

    }
    else{//set board first algo
    
    for ( i = 0; i < 5; i++) //big for get score
    {
        for (  j= 0; j < 6; j++)
        {
            //1
            if( i==0 && j==0 ){
                if((board.get_cell_color(i, j)!=color) && (board.get_cell_color(i, j) != 'w' ))  s[i][j] =-1; //enmy
                else {
                    if(board.get_orbs_num(i, j)==0) { //empty w 
                    
                        if( (board.get_orbs_num(0,1)==0) &&  (board.get_orbs_num(1,0)==0))  s[i][j] = 10000;
                        else if( (board.get_orbs_num(0,1)==2) ||  (board.get_orbs_num(1,0)==2) ) {
                            if( ((board.get_cell_color(1,0)!=color) && (board.get_orbs_num(1,0)!=0 ))|| 
                            ((board.get_cell_color(0,1) != color ) &&  (board.get_orbs_num(0,1)!=0)) ){
                                s[i][j] = 1;
                            }
                            else{
                                s[i][j] = 15000;
                            }
                        }
                        else{
                            s[i][j] = 10000;
                        }

                    } //end empty

                    //one on 
                    else {
                           if ( ((board.get_orbs_num(0,1)==2)&&(board.get_cell_color(0,1) != color)) ||
                           ((board.get_orbs_num(1,0)==2)&&(board.get_cell_color(1,0) != color))  )  {
                               s[i][j] = 20000;
                           }
                           else if( ((board.get_orbs_num(0,1)==1)&&(board.get_cell_color(0,1) != color)) ||
                           ((board.get_orbs_num(1,0)==1)&&(board.get_cell_color(1,0) != color)) )
                           {
                               s[i][j] = 15000;
                           }
                           else
                           {
                               s[i][j] = 1;
                           }
                    }


                }

            } //end(0,0)

            else if ( i==0 && j==5 ){

            }
            else if ( i==4 && j==0 ){
                
            }
            else if ( i==4 && j==5 ){
                
            }

            //2
            else if ( i==0 && j==1 ){
                
            }
            else if ( i==0 && j==4 ){
                
            }
            else if ( i==4 && j==1 ){
                
            }
            else if ( i==4 && j==4 ){
                
            }
            else if ( i==1 && j==0 ){ //2'
                
            }
            else if ( i==1 && j==5 ){
                
            }
            else if ( i==3 && j==0 ){
                
            }
            else if ( i==3 && j==5 ){
                
            }

            //3
            else if ( i==0 && j==2 ){
                
            }
            else if ( i==0 && j==3 ){
                
            }
            else if ( i==4 && j==2 ){
                
            }
            else if ( i==4 && j==3 ){
                
            }
            //4
            else if ( i==2 && j==0 ){
                
            }
            else if ( i==2 && j==5 ){
                
            }
            //5
            else if ( i==1 && j==1 ){
                
            }
            else if ( i==1 && j==4 ){
                
            }
            else if ( i==3 && j==1 ){
                
            }
            else if ( i==3 && j==4 ){
                
            }
            //6
            else if ( i==1 && j==2 ){
                
            }
            else if ( i==1 && j==3 ){
                
            }
            else if ( i==3 && j==2 ){
                
            }
            else if ( i==3 && j==3 ){
                
            }
            //7
            else if ( i==2 && j==1 ){
                
            }
            else if ( i==2 && j==4 ){
                
            }
            //8
            else if ( i==2 && j==2 ){
                
            }
            
            else  //( i=2 && j=3 )
            {
                
            }

        }

    } //end ifor //set the score

    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 6; j++)
        {
            if (max<s[i][j])
            {
                max = s[i][j];
                row = i;
                col = j;
            }
            
        }
        
    }
    
    
    } //end algo2 

    //delete while
    /*while(1){

        row = rand() % 5;
        col = rand() % 6;
        if(board.get_cell_color(row, col) == color || board.get_cell_color(row, col) == 'w') break;

    }*/  //trash


    index[0] = row; //row
    index[1] = col; //col
}