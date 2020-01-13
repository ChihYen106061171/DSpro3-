#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "../include/algorithm.h"

using namespace std;




void algorithm_A(Board board, Player player, int index[]){

    
    int i,j,row,col;
    int max = -1;
    
    int currnum = 0;
    int color = player.get_color(); 
    int s[5][6];  
    
  
    for(i=0;i<5;i++){
        for(j=0;j<6;j++){
            s[i][j] = 0;
        }
    }

    
    
    
    for ( i = 0; i < 5; i++) 
    {
        for (  j= 0; j < 6; j++)
        {
            
            if( i==0 && j==0 ){
                if((board.get_cell_color(i, j)!=color) && (board.get_cell_color(i, j) != 'w' ))  s[i][j] =-1; 
                else {
                    if(board.get_orbs_num(i, j)==0) { 
                    
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

                    } 

                    
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

            } 
            

            else if ( i==0 && j==5 ){
                if((board.get_cell_color(i, j)!=color) && (board.get_cell_color(i, j) != 'w' ))  s[i][j] =-1; 
                else {
                    if(board.get_orbs_num(i, j)==0) { 
                    
                        if( (board.get_orbs_num(0,4)==0) &&  (board.get_orbs_num(1,5)==0))  s[i][j] = 10000;
                        else if( (board.get_orbs_num(0,4)==2) ||  (board.get_orbs_num(1,5)==2) ) {
                            if( ((board.get_cell_color(1,5)!=color) && (board.get_orbs_num(1,5)!=0 ))|| 
                            ((board.get_cell_color(0,4) != color ) &&  (board.get_orbs_num(0,4)!=0)) ){
                                s[i][j] = 1;
                            }
                            else{
                                s[i][j] = 15000;
                            }
                        }
                        else{
                            s[i][j] = 10000;
                        }

                    } 

                    
                    else {
                           if ( ((board.get_orbs_num(0,4)==2)&&(board.get_cell_color(0,4) != color)) ||
                           ((board.get_orbs_num(1,5)==2)&&(board.get_cell_color(1,5) != color))  )  {
                               s[i][j] = 20000;
                           }
                           else if( ((board.get_orbs_num(0,4)==1)&&(board.get_cell_color(0,4) != color)) ||
                           ((board.get_orbs_num(1,5)==1)&&(board.get_cell_color(1,5) != color)) )
                           {
                               s[i][j] = 15000;
                           }
                           else
                           {
                               s[i][j] = 1;
                           }
                    }
                }


            }
            else if ( i==4 && j==0 ){
                if((board.get_cell_color(i, j)!=color) && (board.get_cell_color(i, j) != 'w' ))  s[i][j] =-1;
                else {
                    if(board.get_orbs_num(i, j)==0) { 
                    
                        if( (board.get_orbs_num(4,1)==0) &&  (board.get_orbs_num(3,0)==0))  s[i][j] = 10000;
                        else if( (board.get_orbs_num(4,1)==2) ||  (board.get_orbs_num(3,0)==2) ) {
                            if( ((board.get_cell_color(3,0)!=color) && (board.get_orbs_num(3,0)!=0 ))|| 
                            ((board.get_cell_color(4,1) != color ) &&  (board.get_orbs_num(4,1)!=0)) ){
                                s[i][j] = 1;
                            }
                            else{
                                s[i][j] = 15000;
                            }
                        }
                        else{
                            s[i][j] = 10000;
                        }

                    } 

                   
                    else {
                           if ( ((board.get_orbs_num(4,1)==2)&&(board.get_cell_color(4,1) != color)) ||
                           ((board.get_orbs_num(3,0)==2)&&(board.get_cell_color(3,0) != color))  )  {
                               s[i][j] = 20000;
                           }
                           else if( ((board.get_orbs_num(4,1)==1)&&(board.get_cell_color(4,1) != color)) ||
                           ((board.get_orbs_num(3,0)==1)&&(board.get_cell_color(3,0) != color)) )
                           {
                               s[i][j] = 15000;
                           }
                           else
                           {
                               s[i][j] = 1;
                           }
                    }


                }
                
            }
            else if ( i==4 && j==5 ){
                if((board.get_cell_color(i, j)!=color) && (board.get_cell_color(i, j) != 'w' ))  s[i][j] =-1; 
                else {
                    if(board.get_orbs_num(i, j)==0) { 
                    
                        if( (board.get_orbs_num(4,4)==0) &&  (board.get_orbs_num(3,5)==0))  s[i][j] = 10000;
                        else if( (board.get_orbs_num(4,4)==2) ||  (board.get_orbs_num(3,5)==2) ) {
                            if( ((board.get_cell_color(3,5)!=color) && (board.get_orbs_num(3,5)!=0 ))|| 
                            ((board.get_cell_color(4,4) != color ) &&  (board.get_orbs_num(4,4)!=0)) ){
                                s[i][j] = 1;
                            }
                            else{
                                s[i][j] = 15000;
                            }
                        }
                        else{
                            s[i][j] = 10000;
                        }

                    } 

                   
                    else {
                           if ( ((board.get_orbs_num(4,4)==2)&&(board.get_cell_color(4,4) != color)) ||
                           ((board.get_orbs_num(3,5)==2)&&(board.get_cell_color(3,5) != color))  )  {
                               s[i][j] = 20000;
                           }
                           else if( ((board.get_orbs_num(4,4)==1)&&(board.get_cell_color(4,4) != color)) ||
                           ((board.get_orbs_num(3,5)==1)&&(board.get_cell_color(3,5) != color)) )
                           {
                               s[i][j] = 15000;
                           }
                           else
                           {
                               s[i][j] = 1;
                           }
                       }


                }
                
            }  
            
            else if ( i==0 && j==1 ){
                if((board.get_cell_color(i, j)!=color) && (board.get_cell_color(i, j) != 'w' ))  s[i][j] =-1;
                else
                {
                    if( board.get_orbs_num(i,j)==0 ) {
                        if( (board.get_cell_color(0, 0)!=color) && (board.get_cell_color(0, 0)!='w') ){
                           s[i][j] = 1;
                        }

                        else if( (board.get_cell_color(0, 0)==color) ){  
                             if ( !( ( (board.get_cell_color(0, 2)!=color) && (board.get_orbs_num(0,2)==2) )&&
                                ( (board.get_cell_color(1, 1)!=color) && (board.get_orbs_num(1,1)==3) ) ) ){
                                    s[i][j] = 9000;
                            }
                             else if(( (board.get_cell_color(0, 2)!=color) && (board.get_orbs_num(0,2)==2) )||
                                ( (board.get_cell_color(1, 1)!=color) && (board.get_orbs_num(1,1)==3) ) )
                            {
                                s[i][j] = 1;
                                
                            }
                            else
                                {
                                    s[i][j] = 8000;
                                }
                         }
                         else
                         {
                             if ( !( ( (board.get_cell_color(0, 2)!=color) && (board.get_orbs_num(0,2)==2) )&&
                                ( (board.get_cell_color(1, 1)!=color) && (board.get_orbs_num(1,1)==3) ) ) ){
                                    s[i][j] = 4500;
                            }
                            else if(( (board.get_cell_color(0, 2)!=color) && (board.get_orbs_num(0,2)==2) )||
                                ( (board.get_cell_color(1, 1)!=color) && (board.get_orbs_num(1,1)==3) ) )
                            {
                                s[i][j] = 1;
                            }
                            else s[i][j] = 4000;
                             
                         }
                         
                        
                   }



                   else if (board.get_orbs_num(i,j)==1 ){
                       if ( !( ( (board.get_cell_color(0, 2)!=color) && (board.get_orbs_num(0,2)==2) )&&
                                ( (board.get_cell_color(1, 1)!=color) && (board.get_orbs_num(1,1)==3) ) ) ){
                                    s[i][j] = 2000;
                            }
                        else if(( (board.get_cell_color(0, 2)!=color) && (board.get_orbs_num(0,2)==2) )||
                                ( (board.get_cell_color(1, 1)!=color) && (board.get_orbs_num(1,1)==3) ) )
                            {
                                s[i][j] = 1;
                            }
                        else s[i][j] = 2000;
                        
                    }
                   else
                    { 
                        if( (board.get_cell_color(0, 0)!=color)&&(board.get_orbs_num(0,0)==1) ){
                            s[i][j] = 20000;
                        }
                        else if ( ( ( (board.get_cell_color(0, 2)!=color) && (board.get_orbs_num(0,2)==2) )||
                                ( (board.get_cell_color(1, 1)!=color) && (board.get_orbs_num(1,1)==3) ) ) ){
                                    s[i][j] = 14000;
                            }
                        else if ( board.get_cell_color(0, 2)!=color||board.get_cell_color(1, 1)!=color )
                        {
                            s[i][j] = 8000;
                        }
                        else s[i][j] = 10;
                    }
                    
                   
                }
                
                
            }  

            else if ( i==0 && j==4 ){ 
                if((board.get_cell_color(i, j)!=color) && (board.get_cell_color(i, j) != 'w' ))  s[i][j] =-1;
                else
                {
                    if( board.get_orbs_num(i,j)==0 ) {
                        if( (board.get_cell_color(0, 0)!=color) && (board.get_cell_color(0, 0)!='w') ){
                          s[i][j] = 1;
                        }
                        else if( (board.get_cell_color(0, 5)==color) ){  
                             if ( !( ( (board.get_cell_color(0, 3)!=color) && (board.get_orbs_num(0,3)==2) )&&
                                ( (board.get_cell_color(1, 4)!=color) && (board.get_orbs_num(1,4)==3) ) ) ){
                                    s[i][j] = 9000;
                            }
                             else if(( (board.get_cell_color(0, 3)!=color) && (board.get_orbs_num(0,3)==2) )||
                                ( (board.get_cell_color(1, 4)!=color) && (board.get_orbs_num(1,4)==3) ) )
                            {
                                s[i][j] = 1;
                                
                            }
                            else
                                {
                                    s[i][j] = 8000;
                                }
                         }
                         else
                         {
                             if ( !( ( (board.get_cell_color(0, 3)!=color) && (board.get_orbs_num(0,3)==2) )&&
                                ( (board.get_cell_color(1, 4)!=color) && (board.get_orbs_num(1,4)==3) ) ) ){
                                    s[i][j] = 4500;
                            }
                            else if(( (board.get_cell_color(0, 3)!=color) && (board.get_orbs_num(0,3)==2) )||
                                ( (board.get_cell_color(1, 4)!=color) && (board.get_orbs_num(1,4)==3) ) )
                            {
                                s[i][j] = 1;
                            }
                            else s[i][j] = 4000;
                             
                         }
                         
                        
                   }



                   else if (board.get_orbs_num(i,j)==1 ){
                       if ( !( ( (board.get_cell_color(0, 3)!=color) && (board.get_orbs_num(0,3)==2) )&&
                                ( (board.get_cell_color(1, 4)!=color) && (board.get_orbs_num(1,4)==3) ) ) ){
                                    s[i][j] = 2000;
                            }
                        else if(( (board.get_cell_color(0, 3)!=color) && (board.get_orbs_num(0,3)==2) )||
                                ( (board.get_cell_color(1, 4)!=color) && (board.get_orbs_num(1,4)==3) ) )
                            {
                                s[i][j] = 1;
                            }
                        else s[i][j] = 2000;
                        
                    }
                   else
                    {
                        if( (board.get_cell_color(0, 5)!=color)&&(board.get_orbs_num(0,5)==1) ){
                            s[i][j] = 20000;
                        }
                        else if ( ( ( (board.get_cell_color(0, 3)!=color) && (board.get_orbs_num(0,3)==2) )||
                                ( (board.get_cell_color(1, 4)!=color) && (board.get_orbs_num(1,4)==3) ) ) ){
                                    s[i][j] = 14000;
                            }
                        else if ( board.get_cell_color(0, 3)!=color||board.get_cell_color(1, 4)!=color )
                        {
                            s[i][j] = 8000;
                        }
                        else s[i][j] = 10;
                    }
                    
                   
                }
                
            }

            else if ( i==4 && j==1 ){
                if((board.get_cell_color(i, j)!=color) && (board.get_cell_color(i, j) != 'w' ))  s[i][j] =-1;
                else
                {
                    if( board.get_orbs_num(i,j)==0 ) {
                        if( (board.get_cell_color(4, 0)!=color) && (board.get_cell_color(4, 0)!='w') ) s[i][j] = 1;
                        else if( (board.get_cell_color(4, 0)==color) ){  
                             if ( !( ( (board.get_cell_color(4, 2)!=color) && (board.get_orbs_num(4,2)==2) )&&
                                ( (board.get_cell_color(3, 1)!=color) && (board.get_orbs_num(3,1)==3) ) ) ){
                                    s[i][j] = 9000;
                            }
                             else if(( (board.get_cell_color(4, 2)!=color) && (board.get_orbs_num(4,2)==2) )||
                                ( (board.get_cell_color(3, 1)!=color) && (board.get_orbs_num(3,1)==3) ) )
                            {
                                s[i][j] = 1;
                                
                            }
                            else
                                {
                                    s[i][j] = 8000;
                                }
                         }
                         else
                         {
                             if ( !( ( (board.get_cell_color(4, 2)!=color) && (board.get_orbs_num(4,2)==2) )&&
                                ( (board.get_cell_color(3, 1)!=color) && (board.get_orbs_num(3,1)==3) ) ) ){
                                    s[i][j] = 4500;
                            }
                            else if(( (board.get_cell_color(4, 2)!=color) && (board.get_orbs_num(4,2)==2) )||
                                ( (board.get_cell_color(3, 1)!=color) && (board.get_orbs_num(3,1)==3) ) )
                            {
                                s[i][j] = 1;
                            }
                            else s[i][j] = 4000;
                             
                         }
                         
                        
                   }



                   else if (board.get_orbs_num(i,j)==1 ){
                       if ( !( ( (board.get_cell_color(4, 2)!=color) && (board.get_orbs_num(4,2)==2) )&&
                                ( (board.get_cell_color(3, 1)!=color) && (board.get_orbs_num(3,1)==3) ) ) ){
                                    s[i][j] = 2000;
                            }
                        else if(( (board.get_cell_color(4, 2)!=color) && (board.get_orbs_num(4,2)==2) )||
                                ( (board.get_cell_color(3, 1)!=color) && (board.get_orbs_num(3,1)==3) ) )
                            {
                                s[i][j] = 1;
                            }
                        else s[i][j] = 2000;
                        
                    }
                   else
                    {
                        if( (board.get_cell_color(4, 0)!=color)&&(board.get_orbs_num(4,0)==1) ){
                            s[i][j] = 20000;
                        }
                        else if ( ( ( (board.get_cell_color(4, 2)!=color) && (board.get_orbs_num(4,2)==2) )||
                                ( (board.get_cell_color(3, 1)!=color) && (board.get_orbs_num(3,1)==3) ) ) ){
                                    s[i][j] = 14000;
                            }
                        else if ( board.get_cell_color(4, 2)!=color||board.get_cell_color(3, 1)!=color )
                        {
                            s[i][j] = 8000;
                        }
                        else s[i][j] = 10;
                    }
                    
                   
                }
                
            }
            else if ( i==4 && j==4 ){
                if((board.get_cell_color(i, j)!=color) && (board.get_cell_color(i, j) != 'w' ))  s[i][j] =-1;
                else
                {
                    if( board.get_orbs_num(i,j)==0 ) {
                        if( (board.get_cell_color(4, 5)!=color) && (board.get_cell_color(4, 5)!='w') ) s[i][j] = 1;
                        else if( (board.get_cell_color(4, 5)==color) ){  
                             if ( !( ( (board.get_cell_color(4, 3)!=color) && (board.get_orbs_num(4,3)==2) )&&
                                ( (board.get_cell_color(3, 4)!=color) && (board.get_orbs_num(3,4)==3) ) ) ){
                                    s[i][j] = 9000;
                            }
                             else if(( (board.get_cell_color(4, 3)!=color) && (board.get_orbs_num(4,3)==2) )||
                                ( (board.get_cell_color(3, 4)!=color) && (board.get_orbs_num(3,4)==3) ) )
                            {
                                s[i][j] = 1;
                                
                            }
                            else
                                {
                                    s[i][j] = 8000;
                                }
                         }
                         else
                         {
                             if ( !( ( (board.get_cell_color(4, 3)!=color) && (board.get_orbs_num(4,3)==2) )&&
                                ( (board.get_cell_color(3, 4)!=color) && (board.get_orbs_num(3,4)==3) ) ) ){
                                    s[i][j] = 4500;
                            }
                            else if(( (board.get_cell_color(4, 3)!=color) && (board.get_orbs_num(4,3)==2) )||
                                ( (board.get_cell_color(3, 4)!=color) && (board.get_orbs_num(3,4)==3) ) )
                            {
                                s[i][j] = 1;
                            }
                            else s[i][j] = 4000;
                             
                         }
                         
                        
                   }



                   else if (board.get_orbs_num(i,j)==1 ){
                       if ( !( ( (board.get_cell_color(4, 3)!=color) && (board.get_orbs_num(4,3)==2) )&&
                                ( (board.get_cell_color(3, 4)!=color) && (board.get_orbs_num(3,4)==3) ) ) ){
                                    s[i][j] = 2000;
                            }
                        else if(( (board.get_cell_color(4, 3)!=color) && (board.get_orbs_num(4,3)==2) )||
                                ( (board.get_cell_color(3, 4)!=color) && (board.get_orbs_num(3,4)==3) ) )
                            {
                                s[i][j] = 1;
                            }
                        else s[i][j] = 2000;
                        
                    }
                   else
                    {
                        if( (board.get_cell_color(4, 5)!=color)&&(board.get_orbs_num(4,5)==1) ){
                            s[i][j] = 20000;
                        }
                        else if ( ( ( (board.get_cell_color(4, 3)!=color) && (board.get_orbs_num(4,3)==2) )||
                                ( (board.get_cell_color(3, 4)!=color) && (board.get_orbs_num(3,4)==3) ) ) ){
                                    s[i][j] = 14000;
                            }
                        else if ( board.get_cell_color(4, 3)!=color||board.get_cell_color(3, 4)!=color )
                        {
                            s[i][j] = 8000;
                        }
                        else s[i][j] = 10;
                    }
                    
                   
                }
                
            }
            else if ( i==1 && j==0 ){ 
                if((board.get_cell_color(i, j)!=color) && (board.get_cell_color(i, j) != 'w' ))  s[i][j] =-1;
                else
                {
                    if( board.get_orbs_num(i,j)==0 ) {
                        if( (board.get_cell_color(0, 0)!=color) && (board.get_cell_color(0, 0)!='w') ) s[i][j] = 1;
                        else if( (board.get_cell_color(0, 0)==color) ){  
                             if ( !( ( (board.get_cell_color(2, 0)!=color) && (board.get_orbs_num(2,0)==2) )&&
                                ( (board.get_cell_color(1, 1)!=color) && (board.get_orbs_num(1,1)==3) ) ) ){
                                    s[i][j] = 9000;
                            }
                             else if(( (board.get_cell_color(2, 0)!=color) && (board.get_orbs_num(2,0)==2) )||
                                ( (board.get_cell_color(1, 1)!=color) && (board.get_orbs_num(1,1)==3) ) )
                            {
                                s[i][j] = 1;
                                
                            }
                            else
                                {
                                    s[i][j] = 8000;
                                }
                         }
                         else
                         {
                             if ( !( ( (board.get_cell_color(2, 0)!=color) && (board.get_orbs_num(2,0)==2) )&&
                                ( (board.get_cell_color(1, 1)!=color) && (board.get_orbs_num(1,1)==3) ) ) ){
                                    s[i][j] = 4500;
                            }
                            else if(( (board.get_cell_color(2, 0)!=color) && (board.get_orbs_num(2,0)==2) )||
                                ( (board.get_cell_color(1, 1)!=color) && (board.get_orbs_num(1,1)==3) ) )
                            {
                                s[i][j] = 1;
                            }
                            else s[i][j] = 4000;
                             
                         }
                         
                        
                   }



                   else if (board.get_orbs_num(i,j)==1 ){
                       if ( !( ( (board.get_cell_color(2, 0)!=color) && (board.get_orbs_num(2,0)==2) )&&
                                ( (board.get_cell_color(1, 1)!=color) && (board.get_orbs_num(1,1)==3) ) ) ){
                                    s[i][j] = 2000;
                            }
                        else if(( (board.get_cell_color(2, 0)!=color) && (board.get_orbs_num(2,0)==2) )||
                                ( (board.get_cell_color(1, 1)!=color) && (board.get_orbs_num(1,1)==3) ) )
                            {
                                s[i][j] = 1;
                            }
                        else s[i][j] = 2000;
                        
                    }
                   else
                    {
                        if( (board.get_cell_color(0, 0)!=color)&&(board.get_orbs_num(0,0)==1) ){
                            s[i][j] = 20000;
                        }
                        else if ( ( ( (board.get_cell_color(2, 0)!=color) && (board.get_orbs_num(2,0)==2) )||
                                ( (board.get_cell_color(1, 1)!=color) && (board.get_orbs_num(1,1)==3) ) ) ){
                                    s[i][j] = 14000;
                            }
                        else if ( board.get_cell_color(2, 0)!=color||board.get_cell_color(1, 1)!=color )
                        {
                            s[i][j] = 8000;
                        }
                        else s[i][j] = 10;
                    }
                    
                   
                }
            } 
            else if ( i==1 && j==5 ){
                if((board.get_cell_color(i, j)!=color) && (board.get_cell_color(i, j) != 'w' ))  s[i][j] =-1;
                else
                {
                    if( board.get_orbs_num(i,j)==0 ) {
                        if( (board.get_cell_color(0, 5)!=color) && (board.get_cell_color(0, 5)!='w') ) s[i][j] = 1;
                        else if( (board.get_cell_color(0, 5)==color) ){  
                             if ( !( ( (board.get_cell_color(2, 5)!=color) && (board.get_orbs_num(2,5)==2) )&&
                                ( (board.get_cell_color(1, 4)!=color) && (board.get_orbs_num(1,4)==3) ) ) ){
                                    s[i][j] = 9000;
                            }
                             else if(( (board.get_cell_color(2, 5)!=color) && (board.get_orbs_num(2,5)==2) )||
                                ( (board.get_cell_color(1, 4)!=color) && (board.get_orbs_num(1,4)==3) ) )
                            {
                                s[i][j] = 1;
                                
                            }
                            else
                                {
                                    s[i][j] = 8000;
                                }
                         }
                         else
                         {
                             if ( !( ( (board.get_cell_color(2, 5)!=color) && (board.get_orbs_num(2,5)==2) )&&
                                ( (board.get_cell_color(1, 4)!=color) && (board.get_orbs_num(1,4)==3) ) ) ){
                                    s[i][j] = 4500;
                            }
                            else if(( (board.get_cell_color(2, 5)!=color) && (board.get_orbs_num(2,5)==2) )||
                                ( (board.get_cell_color(1, 4)!=color) && (board.get_orbs_num(1,4)==3) ) )
                            {
                                s[i][j] = 1;
                            }
                            else s[i][j] = 4000;
                             
                         }
                         
                        
                   }



                   else if (board.get_orbs_num(i,j)==1 ){
                       if ( !( ( (board.get_cell_color(2, 5)!=color) && (board.get_orbs_num(2,5)==2) )&&
                                ( (board.get_cell_color(1, 4)!=color) && (board.get_orbs_num(1,4)==3) ) ) ){
                                    s[i][j] = 2000;
                            }
                        else if(( (board.get_cell_color(2, 5)!=color) && (board.get_orbs_num(2,5)==2) )||
                                ( (board.get_cell_color(1, 4)!=color) && (board.get_orbs_num(1,4)==3) ) )
                            {
                                s[i][j] = 1;
                            }
                        else s[i][j] = 2000;
                        
                    }
                   else
                    {
                        if( (board.get_cell_color(0, 5)!=color)&&(board.get_orbs_num(0,5)==1) ){
                            s[i][j] = 20000;
                        }
                        else if ( ( ( (board.get_cell_color(2, 5)!=color) && (board.get_orbs_num(2,5)==2) )||
                                ( (board.get_cell_color(1, 4)!=color) && (board.get_orbs_num(1,4)==3) ) ) ){
                                    s[i][j] = 14000;
                            }
                        else if ( board.get_cell_color(2, 5)!=color||board.get_cell_color(1, 4)!=color )
                        {
                            s[i][j] = 8000;
                        }
                        else s[i][j] = 10;
                    }
                    
                   
                }
                
            }
            else if ( i==3 && j==0 ){
                if((board.get_cell_color(i, j)!=color) && (board.get_cell_color(i, j) != 'w' ))  s[i][j] =-1;
                else
                {
                    if( board.get_orbs_num(i,j)==0 ) {
                        if( (board.get_cell_color(4, 0)!=color) && (board.get_cell_color(4, 0)!='w') ) s[i][j] = 1;
                        else if( (board.get_cell_color(4, 0)==color) ){  
                             if ( !( ( (board.get_cell_color(2, 0)!=color) && (board.get_orbs_num(2,0)==2) )&&
                                ( (board.get_cell_color(3, 1)!=color) && (board.get_orbs_num(3,1)==3) ) ) ){
                                    s[i][j] = 9000;
                            }
                             else if(( (board.get_cell_color(2, 0)!=color) && (board.get_orbs_num(2,0)==2) )||
                                ( (board.get_cell_color(3, 1)!=color) && (board.get_orbs_num(3,1)==3) ) )
                            {
                                s[i][j] = 1;
                                
                            }
                            else
                                {
                                    s[i][j] = 8000;
                                }
                         }
                         else
                         {
                             if ( !( ( (board.get_cell_color(2, 0)!=color) && (board.get_orbs_num(2,0)==2) )&&
                                ( (board.get_cell_color(3, 1)!=color) && (board.get_orbs_num(3,1)==3) ) ) ){
                                    s[i][j] = 4500;
                            }
                            else if(( (board.get_cell_color(2, 0)!=color) && (board.get_orbs_num(2,0)==2) )||
                                ( (board.get_cell_color(3, 1)!=color) && (board.get_orbs_num(3,1)==3) ) )
                            {
                                s[i][j] = 1;
                            }
                            else s[i][j] = 4000;
                             
                         }
                         
                        
                   }



                   else if (board.get_orbs_num(i,j)==1 ){
                       if ( !( ( (board.get_cell_color(2, 0)!=color) && (board.get_orbs_num(2,0)==2) )&&
                                ( (board.get_cell_color(3, 1)!=color) && (board.get_orbs_num(3,1)==3) ) ) ){
                                    s[i][j] = 2000;
                            }
                        else if(( (board.get_cell_color(2, 0)!=color) && (board.get_orbs_num(2,0)==2) )||
                                ( (board.get_cell_color(3, 1)!=color) && (board.get_orbs_num(3,1)==3) ) )
                            {
                                s[i][j] = 1;
                            }
                        else s[i][j] = 2000;
                        
                    }
                   else
                    {
                        if( (board.get_cell_color(4, 0)!=color)&&(board.get_orbs_num(4,0)==1) ){
                            s[i][j] = 20000;
                        }
                        else if ( ( ( (board.get_cell_color(2, 0)!=color) && (board.get_orbs_num(2,0)==2) )||
                                ( (board.get_cell_color(3, 1)!=color) && (board.get_orbs_num(3,1)==3) ) ) ){
                                    s[i][j] = 14000;
                            }
                        else if ( board.get_cell_color(2, 0)!=color||board.get_cell_color(3, 1)!=color )
                        {
                            s[i][j] = 8000;
                        }
                        else s[i][j] = 10;
                    }
                    
                   
                }
                
                
            }
            else if ( i==3 && j==5 ){
                if((board.get_cell_color(i, j)!=color) && (board.get_cell_color(i, j) != 'w' ))  s[i][j] =-1;
                else
                {
                    if( board.get_orbs_num(i,j)==0 ) {
                        if( (board.get_cell_color(4, 5)!=color) && (board.get_cell_color(4, 5)!='w') ) s[i][j] = 1;
                        else if( (board.get_cell_color(4, 5)==color) ){  
                             if ( !( ( (board.get_cell_color(2, 5)!=color) && (board.get_orbs_num(2,5)==2) )&&
                                ( (board.get_cell_color(2, 5)!=color) && (board.get_orbs_num(2,5)==3) ) ) ){
                                    s[i][j] = 9000;
                            }
                             else if(( (board.get_cell_color(2, 5)!=color) && (board.get_orbs_num(2,5)==2) )||
                                ( (board.get_cell_color(3, 4)!=color) && (board.get_orbs_num(3,4)==3) ) )
                            {
                                s[i][j] = 1;
                                
                            }
                            else
                                {
                                    s[i][j] = 8000;
                                }
                         }
                         else
                         {
                             if ( !( ( (board.get_cell_color(2, 5)!=color) && (board.get_orbs_num(2,5)==2) )&&
                                ( (board.get_cell_color(3, 4)!=color) && (board.get_orbs_num(3,4)==3) ) ) ){
                                    s[i][j] = 4500;
                            }
                            else if(( (board.get_cell_color(2, 5)!=color) && (board.get_orbs_num(2,5)==2) )||
                                ( (board.get_cell_color(3, 4)!=color) && (board.get_orbs_num(3,4)==3) ) )
                            {
                                s[i][j] = 1;
                            }
                            else s[i][j] = 4000;
                             
                         }
                         
                        
                   }



                   else if (board.get_orbs_num(i,j)==1 ){
                       if ( !( ( (board.get_cell_color(2, 5)!=color) && (board.get_orbs_num(2,5)==2) )&&
                                ( (board.get_cell_color(3, 4)!=color) && (board.get_orbs_num(3,4)==3) ) ) ){
                                    s[i][j] = 2000;
                            }
                        else if(( (board.get_cell_color(2, 5)!=color) && (board.get_orbs_num(2,5)==2) )||
                                ( (board.get_cell_color(3, 4)!=color) && (board.get_orbs_num(3,4)==3) ) )
                            {
                                s[i][j] = 1;
                            }
                        else s[i][j] = 2000;
                        
                    }
                   else
                    {
                        if( (board.get_cell_color(4, 5)!=color)&&(board.get_orbs_num(4,5)==1) ){
                            s[i][j] = 20000;
                        }
                        else if ( ( ( (board.get_cell_color(2, 5)!=color) && (board.get_orbs_num(2,5)==2) )||
                                ( (board.get_cell_color(3, 4)!=color) && (board.get_orbs_num(3,4)==3) ) ) ){
                                    s[i][j] = 14000;
                            }
                        else if ( board.get_cell_color(2, 5)!=color||board.get_cell_color(3, 4)!=color )
                        {
                            s[i][j] = 8000;
                        }
                        else s[i][j] = 10;
                    }
                    
                   
                }
                
            }

            
            else if ( i==0 && j==2 ){
                if((board.get_cell_color(i, j)!=color) && (board.get_cell_color(i, j) != 'w' ))  s[i][j] =-1;
                else
                {
                    if( board.get_orbs_num(i,j)==2 ){
                        if ( ( (board.get_cell_color(0, 1)!=color)&&(board.get_orbs_num(0, 1)==2))||
                         ( (board.get_cell_color(0, 3)!=color)&&(board.get_orbs_num(0, 3)==2))||
                          ( (board.get_cell_color(1, 2)!=color)&&(board.get_orbs_num(1, 2)==3))  )
                        {
                            s[i][j] = 12000;
                        }
                        else
                        {
                            s[i][j] = 20;
                        }
                        
                        
                    }
                    else if (board.get_orbs_num(i,j)==1)
                    {
                        if( ( (board.get_cell_color(0, 1)!=color)&&(board.get_orbs_num(0, 1)==1))||
                         ( (board.get_cell_color(0, 3)!=color)&&(board.get_orbs_num(0, 3)==1))||
                          ( (board.get_cell_color(1, 2)!=color)&&(board.get_orbs_num(1, 2)==2)) ){
                              s[i][j] = 8000;
                          }
                        else if ( ( (board.get_cell_color(0, 1)!=color)&&(board.get_orbs_num(0, 1)==2))||
                         ( (board.get_cell_color(0, 3)!=color)&&(board.get_orbs_num(0, 3)==2))||
                          ( (board.get_cell_color(1, 2)!=color)&&(board.get_orbs_num(1, 2)==3)))
                        {
                            s[i][j] = 10;
                        }
                        else s[i][j] = 2000;
                    }
                    else
                    {
                        if (  ( (board.get_cell_color(0, 1)!=color)&&(board.get_orbs_num(0, 1)>=1))||
                         ( (board.get_cell_color(0, 3)!=color)&&(board.get_orbs_num(0, 3)>=1))||
                          ( (board.get_cell_color(1, 2)!=color)&&(board.get_orbs_num(1, 2)>=2)) )
                        {
                            s[i][j] = 100;
                        }
                        else
                        {
                            s[i][j] = 9000;
                        }
                        
                        
                        
                    }
                    
                    
                    
                }          
            }
            else if ( i==0 && j==3 ){
                if((board.get_cell_color(i, j)!=color) && (board.get_cell_color(i, j) != 'w' ))  s[i][j] =-1;
                else
                {
                    if( board.get_orbs_num(i,j)==2 ){
                        if ( ( (board.get_cell_color(0, 4)!=color)&&(board.get_orbs_num(0, 4)==2))||
                         ( (board.get_cell_color(0, 2)!=color)&&(board.get_orbs_num(0, 2)==2))||
                          ( (board.get_cell_color(1, 3)!=color)&&(board.get_orbs_num(1, 3)==3))  )
                        {
                            s[i][j] = 12000;
                        }
                        else
                        {
                            s[i][j] = 20;
                        }
                        
                        
                    }
                    else if (board.get_orbs_num(i,j)==1)
                    {
                        if( ( (board.get_cell_color(0, 4)!=color)&&(board.get_orbs_num(0, 4)==1))||
                         ( (board.get_cell_color(0, 2)!=color)&&(board.get_orbs_num(0, 2)==1))||
                          ( (board.get_cell_color(1, 3)!=color)&&(board.get_orbs_num(1, 3)==2)) ){
                              s[i][j] = 8000;
                          }
                        else if ( ( (board.get_cell_color(0, 4)!=color)&&(board.get_orbs_num(0, 4)==2))||
                         ( (board.get_cell_color(0, 2)!=color)&&(board.get_orbs_num(0, 2)==2))||
                          ( (board.get_cell_color(1, 3)!=color)&&(board.get_orbs_num(1, 3)==3)))
                        {
                            s[i][j] = 10;
                        }
                        else s[i][j] = 2000;
                    }
                    else
                    {
                        if (  ( (board.get_cell_color(0, 4)!=color)&&(board.get_orbs_num(0, 4)>=1))||
                         ( (board.get_cell_color(0, 2)!=color)&&(board.get_orbs_num(0, 2)>=1))||
                          ( (board.get_cell_color(1, 3)!=color)&&(board.get_orbs_num(1, 3)>=2)) )
                        {
                            s[i][j] = 100;
                        }
                        else
                        {
                            s[i][j] = 9000;
                        }
                    }
                }
                
            }
            else if ( i==4 && j==2 ){
                if((board.get_cell_color(i, j)!=color) && (board.get_cell_color(i, j) != 'w' ))  s[i][j] =-1;
                else
                {
                    if( board.get_orbs_num(i,j)==2 ){
                        if ( ( (board.get_cell_color(4, 1)!=color)&&(board.get_orbs_num(4, 1)==2))||
                         ( (board.get_cell_color(4, 3)!=color)&&(board.get_orbs_num(4, 3)==2))||
                          ( (board.get_cell_color(3, 2)!=color)&&(board.get_orbs_num(3, 2)==3))  )
                        {
                            s[i][j] = 12000;
                        }
                        else
                        {
                            s[i][j] = 20;
                        }
                        
                        
                    }
                    else if (board.get_orbs_num(i,j)==1)
                    {
                        if( ( (board.get_cell_color(4, 1)!=color)&&(board.get_orbs_num(4, 1)==1))||
                         ( (board.get_cell_color(4, 3)!=color)&&(board.get_orbs_num(4, 3)==1))||
                          ( (board.get_cell_color(3, 2)!=color)&&(board.get_orbs_num(3, 2)==2)) ){
                              s[i][j] = 8000;
                          }
                        else if ( ( (board.get_cell_color(4, 1)!=color)&&(board.get_orbs_num(4, 1)==2))||
                         ( (board.get_cell_color(4, 3)!=color)&&(board.get_orbs_num(4, 3)==2))||
                          ( (board.get_cell_color(3, 2)!=color)&&(board.get_orbs_num(3, 2)==3)))
                        {
                            s[i][j] = 10;
                        }
                        else s[i][j] = 2000;
                    }
                    else
                    {
                        if (  ( (board.get_cell_color(4, 1)!=color)&&(board.get_orbs_num(4, 1)>=1))||
                         ( (board.get_cell_color(4, 3)!=color)&&(board.get_orbs_num(4, 3)>=1))||
                          ( (board.get_cell_color(3, 2)!=color)&&(board.get_orbs_num(3, 2)>=2)) )
                        {
                            s[i][j] = 100;
                        }
                        else
                        {
                            s[i][j] = 9000;
                        }
                    }
                }
                
            }
            else if ( i==4 && j==3 ){
                if((board.get_cell_color(i, j)!=color) && (board.get_cell_color(i, j) != 'w' ))  s[i][j] =-1;
                else
                {
                    if( board.get_orbs_num(i,j)==2 ){
                        if ( ( (board.get_cell_color(4, 4)!=color)&&(board.get_orbs_num(4, 4)==2))||
                         ( (board.get_cell_color(4, 2)!=color)&&(board.get_orbs_num(4, 2)==2))||
                          ( (board.get_cell_color(3, 3)!=color)&&(board.get_orbs_num(3, 3)==3))  )
                        {
                            s[i][j] = 12500;
                        }
                        else
                        {
                            s[i][j] = 20;
                        }
                        
                        
                    }
                    else if (board.get_orbs_num(i,j)==1)
                    {
                        if( ( (board.get_cell_color(4, 4)!=color)&&(board.get_orbs_num(4, 4)==1))||
                         ( (board.get_cell_color(4, 2)!=color)&&(board.get_orbs_num(4, 2)==1))||
                          ( (board.get_cell_color(3, 3)!=color)&&(board.get_orbs_num(3, 3)==2)) ){
                              s[i][j] = 8000;
                          }
                        else if ( ( (board.get_cell_color(4, 4)!=color)&&(board.get_orbs_num(4, 4)==2))||
                         ( (board.get_cell_color(4, 2)!=color)&&(board.get_orbs_num(4, 2)==2))||
                          ( (board.get_cell_color(3, 3)!=color)&&(board.get_orbs_num(3, 3)==3)))
                        {
                            s[i][j] = 10;
                        }
                        else s[i][j] = 2500;
                    }
                    else
                    {
                        if (  ( (board.get_cell_color(4, 4)!=color)&&(board.get_orbs_num(4, 4)>=1))||
                         ( (board.get_cell_color(4, 2)!=color)&&(board.get_orbs_num(4, 2)>=1))||
                          ( (board.get_cell_color(3, 3)!=color)&&(board.get_orbs_num(3, 3)>=2)) )
                        {
                            s[i][j] = 100;
                        }
                        else
                        {
                            s[i][j] = 9500;
                        }
                    }
               }
            }
            
            
            else if ( i==2 && j==0 ){
                if((board.get_cell_color(i, j)!=color) && (board.get_cell_color(i, j) != 'w' ))  s[i][j] =-1;
                else
                {
                    if( board.get_orbs_num(i,j)==2 ){
                        if ( ( (board.get_cell_color(1, 0)!=color)&&(board.get_orbs_num(1, 0)==2))||
                         ( (board.get_cell_color(3, 0)!=color)&&(board.get_orbs_num(3, 0)==2))||
                          ( (board.get_cell_color(2, 1)!=color)&&(board.get_orbs_num(2, 1)==3))  )
                        {
                            s[i][j] = 12000;
                        }
                        else
                        {
                            s[i][j] = 20;
                        }
                        
                        
                    }
                    else if (board.get_orbs_num(i,j)==1)
                    {
                        if( ( (board.get_cell_color(1, 0)!=color)&&(board.get_orbs_num(1, 0)==1))||
                         ( (board.get_cell_color(3, 0)!=color)&&(board.get_orbs_num(3, 0)==1))||
                          ( (board.get_cell_color(2, 1)!=color)&&(board.get_orbs_num(2, 1)==2)) ){
                              s[i][j] = 8000;
                          }
                        else if ( ( (board.get_cell_color(1, 0)!=color)&&(board.get_orbs_num(1, 0)==2))||
                         ( (board.get_cell_color(3, 0)!=color)&&(board.get_orbs_num(3, 0)==2))||
                          ( (board.get_cell_color(2, 1)!=color)&&(board.get_orbs_num(2, 1)==3)))
                        {
                            s[i][j] = 10;
                        }
                        else s[i][j] = 2000;
                    }
                    else
                    {
                        if (  ( (board.get_cell_color(1, 0)!=color)&&(board.get_orbs_num(1, 0)>=1))||
                         ( (board.get_cell_color(3, 0)!=color)&&(board.get_orbs_num(3, 0)>=1))||
                          ( (board.get_cell_color(2, 1)!=color)&&(board.get_orbs_num(2, 1)>=2)) )
                        {
                            s[i][j] = 100;
                        }
                        else
                        {
                            s[i][j] = 9000;
                        }   
                    } 
                }          
            }
            else if ( i==2 && j==5 ){
                if((board.get_cell_color(i, j)!=color) && (board.get_cell_color(i, j) != 'w' ))  s[i][j] =-1;
                else
                {
                    if( board.get_orbs_num(i,j)==2 ){
                        if ( ( (board.get_cell_color(1, 5)!=color)&&(board.get_orbs_num(1, 5)==2))||
                         ( (board.get_cell_color(3, 5)!=color)&&(board.get_orbs_num(3, 5)==2))||
                          ( (board.get_cell_color(2, 4)!=color)&&(board.get_orbs_num(2, 4)==3))  )
                        {
                            s[i][j] = 12000;
                        }
                        else
                        {
                            s[i][j] = 20;
                        }
                        
                        
                    }
                    else if (board.get_orbs_num(i,j)==1)
                    {
                        if( ( (board.get_cell_color(1, 5)!=color)&&(board.get_orbs_num(1, 5)==1))||
                         ( (board.get_cell_color(3, 5)!=color)&&(board.get_orbs_num(3, 5)==1))||
                          ( (board.get_cell_color(2, 4)!=color)&&(board.get_orbs_num(2, 4)==2)) ){
                              s[i][j] = 8000;
                          }
                        else if ( ( (board.get_cell_color(1, 5)!=color)&&(board.get_orbs_num(1, 5)==2))||
                         ( (board.get_cell_color(3, 5)!=color)&&(board.get_orbs_num(3, 5)==2))||
                          ( (board.get_cell_color(2, 4)!=color)&&(board.get_orbs_num(2, 4)==3)))
                        {
                            s[i][j] = 10;
                        }
                        else s[i][j] = 2000;
                    }
                    else
                    {
                        if (  ( (board.get_cell_color(1, 5)!=color)&&(board.get_orbs_num(1, 5)>=1))||
                         ( (board.get_cell_color(3, 5)!=color)&&(board.get_orbs_num(3, 5)>=1))||
                          ( (board.get_cell_color(2, 4)!=color)&&(board.get_orbs_num(2, 4)>=2)) )
                        {
                            s[i][j] = 100;
                        }
                        else
                        {
                            s[i][j] = 9000;
                        }   
                    } 
                }
            }
            
            else if ( i==1 && j==1 ){
                if((board.get_cell_color(i, j)!=color) && (board.get_cell_color(i, j) != 'w' ))  s[i][j] =-1;
                else
                {
                    if (board.get_orbs_num(i,j)==0 ){
                        if(  ((board.get_cell_color(1,2)!=color) && ( board.get_cell_color(1,2)!='w' )) ||
                          ((board.get_cell_color(2,1)!=color) && ( board.get_cell_color(2,1)!='w' )) ){
                              s[i][j] = 10;
                          }
                        else if( (board.get_cell_color(1,2)!=color)&& (board.get_orbs_num(1,2)>=2) ||
                        (board.get_cell_color(2,1)!=color)&& (board.get_orbs_num(2,1)>=2) 
                         ){
                             s[i][j] = 2000;
                        }
                    }
                    else if (board.get_orbs_num(i,j)==1){
                        if( ((board.get_cell_color(2,1)!=color)&& (board.get_orbs_num(2,1)==3)) ||
                        ((board.get_cell_color(1,2)!=color)&& (board.get_orbs_num(1,2)==3)) ||
                        ((board.get_cell_color(0,1)!=color)&& (board.get_orbs_num(0,1)==2)) ||
                        ((board.get_cell_color(1,0)!=color)&& (board.get_orbs_num(1,0)==2))
                          ){
                              s[i][j] = 10;
                          }
                        else  s[i][j] = 1000;

                    }
                    else if(board.get_orbs_num(i,j)==2){
                        if( ((board.get_cell_color(2,1)!=color)&& (board.get_orbs_num(2,1)==3)) ||
                        ((board.get_cell_color(1,2)!=color)&& (board.get_orbs_num(1,2)==3)) ||
                        ((board.get_cell_color(0,1)!=color)&& (board.get_orbs_num(0,1)==2)) ||
                        ((board.get_cell_color(1,0)!=color)&& (board.get_orbs_num(1,0)==2))
                          ){
                              s[i][j] = 10;
                          }
                        else  s[i][j] = 3000;
                    }
                    else{
                        if( ((board.get_cell_color(2,1)!=color)&& (board.get_orbs_num(2,1)==3)) ||
                        ((board.get_cell_color(1,2)!=color)&& (board.get_orbs_num(1,2)==3)) ||
                        ((board.get_cell_color(0,1)!=color)&& (board.get_orbs_num(0,1)==2)) ||
                        ((board.get_cell_color(1,0)!=color)&& (board.get_orbs_num(1,0)==2))
                          ){
                              s[i][j] = 16000;
                          }
                        else  s[i][j] = 10;

                    }
                }
                
                
            }
            else if ( i==1 && j==4 ){
                if((board.get_cell_color(i, j)!=color) && (board.get_cell_color(i, j) != 'w' ))  s[i][j] =-1;
                else
                {
                    if (board.get_orbs_num(i,j)==0 ){
                        if(  ((board.get_cell_color(1,3)!=color) && ( board.get_cell_color(1,3)!='w' )) ||
                          ((board.get_cell_color(2,4)!=color) && ( board.get_cell_color(2,4)!='w' )) ){
                              s[i][j] = 10;
                          }
                        else if( (board.get_cell_color(1,3)!=color)&& (board.get_orbs_num(1,3)>=2) ||
                        (board.get_cell_color(2,4)!=color)&& (board.get_orbs_num(2,4)>=2) 
                         ){
                             s[i][j] = 2000;
                        }
                    }
                    else if (board.get_orbs_num(i,j)==1){
                        if( ((board.get_cell_color(2,4)!=color)&& (board.get_orbs_num(2,4)==3)) ||
                        ((board.get_cell_color(1,3)!=color)&& (board.get_orbs_num(1,3)==3)) ||
                        ((board.get_cell_color(0,4)!=color)&& (board.get_orbs_num(0,4)==2)) ||
                        ((board.get_cell_color(1,5)!=color)&& (board.get_orbs_num(1,5)==2))
                          ){
                              s[i][j] = 10;
                          }
                        else  s[i][j] = 1000;

                    }
                    else if(board.get_orbs_num(i,j)==2){
                        if( ((board.get_cell_color(2,4)!=color)&& (board.get_orbs_num(2,4)==3)) ||
                        ((board.get_cell_color(1,3)!=color)&& (board.get_orbs_num(1,3)==3)) ||
                        ((board.get_cell_color(0,4)!=color)&& (board.get_orbs_num(0,4)==2)) ||
                        ((board.get_cell_color(1,5)!=color)&& (board.get_orbs_num(1,5)==2))
                          ){
                              s[i][j] = 10;
                          }
                        else  s[i][j] = 3000;
                    }
                    else{
                        if( ((board.get_cell_color(2,4)!=color)&& (board.get_orbs_num(2,4)==3)) ||
                        ((board.get_cell_color(1,3)!=color)&& (board.get_orbs_num(1,3)==3)) ||
                        ((board.get_cell_color(0,4)!=color)&& (board.get_orbs_num(0,4)==2)) ||
                        ((board.get_cell_color(1,5)!=color)&& (board.get_orbs_num(1,5)==2))
                          ){
                              s[i][j] = 16000;
                          }
                        else  s[i][j] = 10;

                    }
                }
                
            }
            else if ( i==3 && j==1 ){
                if((board.get_cell_color(i, j)!=color) && (board.get_cell_color(i, j) != 'w' ))  s[i][j] =-1;
                else
                {
                    if (board.get_orbs_num(i,j)==0 ){
                        if(  ((board.get_cell_color(3,2)!=color) && ( board.get_cell_color(3,2)!='w' )) ||
                          ((board.get_cell_color(2,1)!=color) && ( board.get_cell_color(2,1)!='w' )) ){
                              s[i][j] = 10;
                          }
                        else if( (board.get_cell_color(3,2)!=color)&& (board.get_orbs_num(3,2)>=2) ||
                        (board.get_cell_color(2,1)!=color)&& (board.get_orbs_num(2,1)>=2) 
                         ){
                             s[i][j] = 2000;
                        }
                    }
                    else if (board.get_orbs_num(i,j)==1){
                        if( ((board.get_cell_color(2,1)!=color)&& (board.get_orbs_num(2,1)==3)) ||
                        ((board.get_cell_color(3,2)!=color)&& (board.get_orbs_num(3,2)==3)) ||
                        ((board.get_cell_color(4,1)!=color)&& (board.get_orbs_num(4,1)==2)) ||
                        ((board.get_cell_color(3,0)!=color)&& (board.get_orbs_num(3,0)==2))
                          ){
                              s[i][j] = 10;
                          }
                        else  s[i][j] = 1000;

                    }
                    else if(board.get_orbs_num(i,j)==2){
                        if( ((board.get_cell_color(2,1)!=color)&& (board.get_orbs_num(2,1)==3)) ||
                        ((board.get_cell_color(3,2)!=color)&& (board.get_orbs_num(3,2)==3)) ||
                        ((board.get_cell_color(4,1)!=color)&& (board.get_orbs_num(4,1)==2)) ||
                        ((board.get_cell_color(3,0)!=color)&& (board.get_orbs_num(3,0)==2))
                          ){
                              s[i][j] = 10;
                          }
                        else  s[i][j] = 3000;
                    }
                    else{
                        if( ((board.get_cell_color(2,1)!=color)&& (board.get_orbs_num(2,1)==3)) ||
                        ((board.get_cell_color(3,2)!=color)&& (board.get_orbs_num(3,2)==3)) ||
                        ((board.get_cell_color(4,1)!=color)&& (board.get_orbs_num(4,1)==2)) ||
                        ((board.get_cell_color(3,0)!=color)&& (board.get_orbs_num(3,0)==2))
                          ){
                              s[i][j] = 16000;
                          }
                        else  s[i][j] = 10;

                    }
                }
                
            }
            else if ( i==3 && j==4 ){
                if((board.get_cell_color(i, j)!=color) && (board.get_cell_color(i, j) != 'w' ))  s[i][j] =-1;
                else
                {
                    if (board.get_orbs_num(i,j)==0 ){
                        if(  ((board.get_cell_color(3,3)!=color) && ( board.get_cell_color(3,3)!='w' )) ||
                          ((board.get_cell_color(2,4)!=color) && ( board.get_cell_color(2,4)!='w' )) ){
                              s[i][j] = 10;
                          }
                        else if( (board.get_cell_color(3,3)!=color)&& (board.get_orbs_num(3,3)>=2) ||
                        (board.get_cell_color(2,4)!=color)&& (board.get_orbs_num(2,4)>=2) 
                         ){
                             s[i][j] = 2000;
                        }
                    }
                    else if (board.get_orbs_num(i,j)==1){
                        if( ((board.get_cell_color(2,4)!=color)&& (board.get_orbs_num(2,4)==3)) ||
                        ((board.get_cell_color(3,3)!=color)&& (board.get_orbs_num(3,3)==3)) ||
                        ((board.get_cell_color(4,4)!=color)&& (board.get_orbs_num(4,4)==2)) ||
                        ((board.get_cell_color(3,5)!=color)&& (board.get_orbs_num(3,5)==2))
                          ){
                              s[i][j] = 10;
                          }
                        else  s[i][j] = 1000;

                    }
                    else if(board.get_orbs_num(i,j)==2){
                        if( ((board.get_cell_color(2,4)!=color)&& (board.get_orbs_num(2,4)==3)) ||
                        ((board.get_cell_color(3,3)!=color)&& (board.get_orbs_num(3,3)==3)) ||
                        ((board.get_cell_color(4,4)!=color)&& (board.get_orbs_num(4,4)==2)) ||
                        ((board.get_cell_color(3,5)!=color)&& (board.get_orbs_num(3,5)==2))
                          ){
                              s[i][j] = 10;
                          }
                        else  s[i][j] = 3000;
                    }
                    else{
                        if( ((board.get_cell_color(2,4)!=color)&& (board.get_orbs_num(2,4)==3)) ||
                        ((board.get_cell_color(3,3)!=color)&& (board.get_orbs_num(3,3)==3)) ||
                        ((board.get_cell_color(4,4)!=color)&& (board.get_orbs_num(4,4)==2)) ||
                        ((board.get_cell_color(3,5)!=color)&& (board.get_orbs_num(3,5)==2))
                          ){
                              s[i][j] = 16000;
                          }
                        else  s[i][j] = 10;
                    }
                }
                
            }
            
            else if ( i==1 && j==2 ){
                if((board.get_cell_color(i, j)!=color) && (board.get_cell_color(i, j) != 'w' ))  s[i][j] =-1;
                else{
                    if(board.get_orbs_num(i,j)==3){
                        if (((board.get_cell_color(0,2)!=color)&& (board.get_orbs_num(0,2)==2)) ||
                        ((board.get_cell_color(1,1)!=color)&& (board.get_orbs_num(1,1)==3)) ||
                        ((board.get_cell_color(1,3)!=color)&& (board.get_orbs_num(1,3)==3)) ||
                        ((board.get_cell_color(2,2)!=color)&& (board.get_orbs_num(2,2)==3))
                        )
                        {
                            s[i][j] = 14000;
                        }
                        else{
                            s[i][j] = 10;
                        }
                        
                    }
                    else if( board.get_orbs_num(i,j)==2){
                        if(  ((board.get_cell_color(0,2)!=color)&& (board.get_orbs_num(0,2)==1)) ||
                        ((board.get_cell_color(1,1)!=color)&& (board.get_orbs_num(1,1)==2)) ||
                        ((board.get_cell_color(1,3)!=color)&& (board.get_orbs_num(1,3)==2)) ||
                        ((board.get_cell_color(2,2)!=color)&& (board.get_orbs_num(2,2)==2)) ){
                            s[i][j] = 3000;
                        }
                        else
                        {
                            s[i][j] = 100;
                        }
                        
                    }
                    else if ( board.get_orbs_num(i,j)==1)
                    {
                        s[i][j] = 100;
                    }
                    else{
                        if(  ((board.get_cell_color(0,2)!=color)&& (board.get_orbs_num(0,2)>=1)) ||
                        ((board.get_cell_color(1,1)!=color)&& (board.get_orbs_num(1,1)>=2)) ||
                        ((board.get_cell_color(1,3)!=color)&& (board.get_orbs_num(1,3)>=2)) ||
                        ((board.get_cell_color(2,2)!=color)&& (board.get_orbs_num(2,2)>=2)) ){
                            s[i][j] = 10;
                        }
                        else s[i][j] = 5000;


                    }
                    
                }

            }
            else if ( i==1 && j==3 ){
                if((board.get_cell_color(i, j)!=color) && (board.get_cell_color(i, j) != 'w' ))  s[i][j] =-1;
                else{
                    if(board.get_orbs_num(i,j)==3){
                        if (((board.get_cell_color(0,3)!=color)&& (board.get_orbs_num(0,3)==2)) ||
                        ((board.get_cell_color(1,4)!=color)&& (board.get_orbs_num(1,4)==3)) ||
                        ((board.get_cell_color(1,2)!=color)&& (board.get_orbs_num(1,2)==3)) ||
                        ((board.get_cell_color(2,3)!=color)&& (board.get_orbs_num(2,3)==3))
                        )
                        {
                            s[i][j] = 14000;
                        }
                        else{
                            s[i][j] = 10;
                        }
                        
                    }
                    else if( board.get_orbs_num(i,j)==2){
                        if(  ((board.get_cell_color(0,3)!=color)&& (board.get_orbs_num(0,3)==1)) ||
                        ((board.get_cell_color(1,4)!=color)&& (board.get_orbs_num(1,4)==2)) ||
                        ((board.get_cell_color(1,2)!=color)&& (board.get_orbs_num(1,2)==2)) ||
                        ((board.get_cell_color(2,3)!=color)&& (board.get_orbs_num(2,3)==2)) ){
                            s[i][j] = 3000;
                        }
                        else
                        {
                            s[i][j] = 100;
                        }
                        
                    }
                    else if ( board.get_orbs_num(i,j)==1)
                    {
                        s[i][j] = 100;
                    }
                    else{
                        if(  ((board.get_cell_color(0,3)!=color)&& (board.get_orbs_num(0,3)>=1)) ||
                        ((board.get_cell_color(1,4)!=color)&& (board.get_orbs_num(1,4)>=2)) ||
                        ((board.get_cell_color(1,2)!=color)&& (board.get_orbs_num(1,2)>=2)) ||
                        ((board.get_cell_color(2,3)!=color)&& (board.get_orbs_num(2,3)>=2)) ){
                            s[i][j] = 10;
                        }
                        else s[i][j] = 5000;


                    }
                    
                }
                
            }
            else if ( i==3 && j==2 ){
                if((board.get_cell_color(i, j)!=color) && (board.get_cell_color(i, j) != 'w' ))  s[i][j] =-1;
                else{
                    if(board.get_orbs_num(i,j)==3){
                        if (((board.get_cell_color(4,2)!=color)&& (board.get_orbs_num(4,2)==2)) ||
                        ((board.get_cell_color(3,1)!=color)&& (board.get_orbs_num(3,1)==3)) ||
                        ((board.get_cell_color(3,3)!=color)&& (board.get_orbs_num(3,3)==3)) ||
                        ((board.get_cell_color(2,2)!=color)&& (board.get_orbs_num(2,2)==3))
                        )
                        {
                            s[i][j] = 14000;
                        }
                        else{
                            s[i][j] = 10;
                        }
                        
                    }
                    else if( board.get_orbs_num(i,j)==2){
                        if(  ((board.get_cell_color(4,2)!=color)&& (board.get_orbs_num(4,2)==1)) ||
                        ((board.get_cell_color(3,1)!=color)&& (board.get_orbs_num(3,1)==2)) ||
                        ((board.get_cell_color(3,3)!=color)&& (board.get_orbs_num(3,3)==2)) ||
                        ((board.get_cell_color(2,2)!=color)&& (board.get_orbs_num(2,2)==2)) ){
                            s[i][j] = 3000;
                        }
                        else
                        {
                            s[i][j] = 100;
                        }
                        
                    }
                    else if ( board.get_orbs_num(i,j)==1)
                    {
                        s[i][j] = 100;
                    }
                    else{
                        if(  ((board.get_cell_color(4,2)!=color)&& (board.get_orbs_num(4,2)>=1)) ||
                        ((board.get_cell_color(3,1)!=color)&& (board.get_orbs_num(3,1)>=2)) ||
                        ((board.get_cell_color(3,3)!=color)&& (board.get_orbs_num(3,3)>=2)) ||
                        ((board.get_cell_color(2,2)!=color)&& (board.get_orbs_num(2,2)>=2)) ){
                            s[i][j] = 10;
                        }
                        else s[i][j] = 5000;


                    }
                    
                }
                
            }
            else if ( i==3 && j==3 ){
                if((board.get_cell_color(i, j)!=color) && (board.get_cell_color(i, j) != 'w' ))  s[i][j] =-1;
                else{
                    if(board.get_orbs_num(i,j)==3){
                        if (((board.get_cell_color(4,3)!=color)&& (board.get_orbs_num(4,3)==2)) ||
                        ((board.get_cell_color(3,4)!=color)&& (board.get_orbs_num(3,4)==3)) ||
                        ((board.get_cell_color(3,2)!=color)&& (board.get_orbs_num(3,2)==3)) ||
                        ((board.get_cell_color(2,3)!=color)&& (board.get_orbs_num(2,3)==3))
                        )
                        {
                            s[i][j] = 14000;
                        }
                        else{
                            s[i][j] = 10;
                        }
                        
                    }
                    else if( board.get_orbs_num(i,j)==2){
                        if(  ((board.get_cell_color(4,3)!=color)&& (board.get_orbs_num(4,3)==1)) ||
                        ((board.get_cell_color(3,4)!=color)&& (board.get_orbs_num(3,4)==2)) ||
                        ((board.get_cell_color(3,2)!=color)&& (board.get_orbs_num(3,2)==2)) ||
                        ((board.get_cell_color(2,3)!=color)&& (board.get_orbs_num(2,3)==2)) ){
                            s[i][j] = 3000;
                        }
                        else
                        {
                            s[i][j] = 100;
                        }
                        
                    }
                    else if ( board.get_orbs_num(i,j)==1)
                    {
                        s[i][j] = 100;
                    }
                    else{
                        if(  ((board.get_cell_color(4,3)!=color)&& (board.get_orbs_num(4,3)>=1)) ||
                        ((board.get_cell_color(3,4)!=color)&& (board.get_orbs_num(3,4)>=2)) ||
                        ((board.get_cell_color(3,2)!=color)&& (board.get_orbs_num(3,2)>=2)) ||
                        ((board.get_cell_color(2,3)!=color)&& (board.get_orbs_num(2,3)>=2)) ){
                            s[i][j] = 10;
                        }
                        else s[i][j] = 5000;
                    }
                }    
            }
            
            else if ( i==2 && j==1 ){
                if((board.get_cell_color(i, j)!=color) && (board.get_cell_color(i, j) != 'w' ))  s[i][j] =-1;
                else{
                    if ( board.get_orbs_num(i,j)==3){
                        if( ((board.get_cell_color(2,0)!=color)&& (board.get_orbs_num(2,0)>=1)) ||
                        ((board.get_cell_color(2,2)!=color)&& (board.get_orbs_num(2,2)>=2)) ||
                        ((board.get_cell_color(1,1)!=color)&& (board.get_orbs_num(1,1)>=2)) ||
                        ((board.get_cell_color(3,1)!=color)&& (board.get_orbs_num(3,1)>=2)) ){
                            s[i][j] = 15000;
                        }
                        else s[i][j] = 4000;

                    }
                    else if( board.get_orbs_num(i,j)==2){
                       if ( ((board.get_cell_color(2,0)!=color)&& (board.get_orbs_num(2,0)>=1)) ||
                        ((board.get_cell_color(2,2)!=color)&& (board.get_orbs_num(2,2)>=2)) ||
                        ((board.get_cell_color(1,1)!=color)&& (board.get_orbs_num(1,1)>=2)) ||
                        ((board.get_cell_color(3,1)!=color)&& (board.get_orbs_num(3,1)>=2)) )
                       {
                           s[i][j] = 1;
                       }
                       else s[i][j] = 4000;
                        
                    }
                    else if( board.get_orbs_num(i,j)==1){
                        if ( ((board.get_cell_color(2,0)!=color)&& (board.get_orbs_num(2,0)>=1)) ||
                        ((board.get_cell_color(2,2)!=color)&& (board.get_orbs_num(2,2)>=2)) ||
                        ((board.get_cell_color(1,1)!=color)&& (board.get_orbs_num(1,1)>=2)) ||
                        ((board.get_cell_color(3,1)!=color)&& (board.get_orbs_num(3,1)>=2)) )
                       {
                           s[i][j] = 1;
                       }
                       else s[i][j] = 1000;
                        
                    }
                    else {
                         if ( ((board.get_cell_color(2,0)!=color)&& (board.get_orbs_num(2,0)>=1)) ||
                        ((board.get_cell_color(2,2)!=color)&& (board.get_orbs_num(2,2)>=2)) ||
                        ((board.get_cell_color(1,1)!=color)&& (board.get_orbs_num(1,1)>=2)) ||
                        ((board.get_cell_color(3,1)!=color)&& (board.get_orbs_num(3,1)>=2)) )
                       {
                           s[i][j] = 1;
                       }
                       else if ( board.get_cell_color(2,0)==color) s[i][j] = 10000;
                       else s[i][j] = 1000;

                    }
                }

            }
            else if ( i==2 && j==4 ){
                if((board.get_cell_color(i, j)!=color) && (board.get_cell_color(i, j) != 'w' ))  s[i][j] =-1;
                else{
                    if ( board.get_orbs_num(i,j)==3){
                        if( ((board.get_cell_color(2,5!=color)&& (board.get_orbs_num(2,5)>=1)) ||
                        ((board.get_cell_color(2,3)!=color)&& (board.get_orbs_num(2,3)>=2)) ||
                        ((board.get_cell_color(1,4)!=color)&& (board.get_orbs_num(1,4)>=2)) ||
                        ((board.get_cell_color(3,4)!=color)&& (board.get_orbs_num(3,4)>=2)) )){
                            s[i][j] = 15000;
                        }
                        else s[i][j] = 4000;

                    }
                    else if( board.get_orbs_num(i,j)==2){
                       if ( ((board.get_cell_color(2,5)!=color)&& (board.get_orbs_num(2,5)>=1)) ||
                        ((board.get_cell_color(2,3)!=color)&& (board.get_orbs_num(2,3)>=2)) ||
                        ((board.get_cell_color(1,4)!=color)&& (board.get_orbs_num(1,4)>=2)) ||
                        ((board.get_cell_color(3,4)!=color)&& (board.get_orbs_num(3,4)>=2)) )
                       {
                           s[i][j] = 1;
                       }
                       else s[i][j] = 4000;
                        
                    }
                    else if( board.get_orbs_num(i,j)==1){
                        if ( ((board.get_cell_color(2,5)!=color)&& (board.get_orbs_num(2,5)>=1)) ||
                        ((board.get_cell_color(2,3)!=color)&& (board.get_orbs_num(2,3)>=2)) ||
                        ((board.get_cell_color(1,4)!=color)&& (board.get_orbs_num(1,4)>=2)) ||
                        ((board.get_cell_color(3,4)!=color)&& (board.get_orbs_num(3,4)>=2)) )
                       {
                           s[i][j] = 1;
                       }
                       else s[i][j] = 1000;
                        
                    }
                    else {
                         if ( ((board.get_cell_color(2,5)!=color)&& (board.get_orbs_num(2,5)>=1)) ||
                        ((board.get_cell_color(2,3)!=color)&& (board.get_orbs_num(2,3)>=2)) ||
                        ((board.get_cell_color(1,4)!=color)&& (board.get_orbs_num(1,4)>=2)) ||
                        ((board.get_cell_color(3,4)!=color)&& (board.get_orbs_num(3,4)>=2)) )
                       {
                           s[i][j] = 1;
                       }
                       else if ( board.get_cell_color(2,5)==color) s[i][j] = 10000;
                       else s[i][j] = 1000;

                    }
                }
                
            }
            
            else if ( i==2 && j==2 ){
                if((board.get_cell_color(i, j)!=color) && (board.get_cell_color(i, j) != 'w' ))  s[i][j] =-1;
                else{
                    if( board.get_orbs_num(i,j)==3 ){
                        if( ((board.get_cell_color(1,2)!=color)&& (board.get_orbs_num(1,2)==3)) ||
                        ((board.get_cell_color(2,1)!=color)&& (board.get_orbs_num(2,1)==3)) ||
                        ((board.get_cell_color(3,2)!=color)&& (board.get_orbs_num(3,2)==3)) ||
                        ((board.get_cell_color(2,3)!=color)&& (board.get_orbs_num(2,3)==3)) )
                        {
                            s[i][j] = 16000;
                        }
                        else s[i][j] = 10;
                    }
                    else if( board.get_orbs_num(i,j)==2 ){
                        if(((board.get_cell_color(1,2)!=color)&& (board.get_orbs_num(1,2)==3)) ||
                        ((board.get_cell_color(2,1)!=color)&& (board.get_orbs_num(2,1)==3)) ||
                        ((board.get_cell_color(3,2)!=color)&& (board.get_orbs_num(3,2)==3)) ||
                        ((board.get_cell_color(2,3)!=color)&& (board.get_orbs_num(2,3)==3))  )
                        {
                            s[i][j] = 1;
                        }
                        else s[i][j] = 4000;
                    }
                    
                    else if(board.get_orbs_num(i,j)==1  ){
                        if(((board.get_cell_color(1,2)!=color)&& (board.get_orbs_num(1,2)==3)) ||
                        ((board.get_cell_color(2,1)!=color)&& (board.get_orbs_num(2,1)==3)) ||
                        ((board.get_cell_color(3,2)!=color)&& (board.get_orbs_num(3,2)==3)) ||
                        ((board.get_cell_color(2,3)!=color)&& (board.get_orbs_num(2,3)==3))  )
                        {
                            s[i][j] = 1;
                        }
                        else s[i][j] = 1000;

                    }
                    else{
                        if(((board.get_cell_color(1,2)!=color)&& (board.get_orbs_num(1,2)==3)) ||
                        ((board.get_cell_color(2,1)!=color)&& (board.get_orbs_num(2,1)==3)) ||
                        ((board.get_cell_color(3,2)!=color)&& (board.get_orbs_num(3,2)==3)) ||
                        ((board.get_cell_color(2,3)!=color)&& (board.get_orbs_num(2,3)==3))  )
                        {
                            s[i][j] = 1;
                        }
                        else s[i][j] = 2000;
                    }

                    
                }
                
            }
            
            else  
            {
                if((board.get_cell_color(2, 3)!=color) && (board.get_cell_color(2, 3) != 'w' ))  s[i][j] =-1;
                else{
                    if( board.get_orbs_num(2,3)==3 ){
                        if( ((board.get_cell_color(1,3)!=color)&& (board.get_orbs_num(1,3)==3)) ||
                        ((board.get_cell_color(2,4)!=color)&& (board.get_orbs_num(2,4)==3)) ||
                        ((board.get_cell_color(3,3)!=color)&& (board.get_orbs_num(3,3)==3)) ||
                        ((board.get_cell_color(2,2)!=color)&& (board.get_orbs_num(2,2)==3)) )
                        {
                            s[i][j] = 16000;
                        }
                        else s[i][j] = 10;
                    }
                    else if( board.get_orbs_num(2,3)==2 ){
                        if(((board.get_cell_color(1,3)!=color)&& (board.get_orbs_num(1,3)==3)) ||
                        ((board.get_cell_color(2,4)!=color)&& (board.get_orbs_num(2,4)==3)) ||
                        ((board.get_cell_color(3,3)!=color)&& (board.get_orbs_num(3,3)==3)) ||
                        ((board.get_cell_color(2,2)!=color)&& (board.get_orbs_num(2,2)==3))  )
                        {
                            s[i][j] = 1;
                        }
                        else s[i][j] = 4000;
                    }
                    
                    else if(board.get_orbs_num(2,3)==1  ){
                        if(((board.get_cell_color(1,3)!=color)&& (board.get_orbs_num(1,3)==3)) ||
                        ((board.get_cell_color(2,4)!=color)&& (board.get_orbs_num(2,4)==3)) ||
                        ((board.get_cell_color(3,3)!=color)&& (board.get_orbs_num(3,3)==3)) ||
                        ((board.get_cell_color(2,2)!=color)&& (board.get_orbs_num(2,2)==3))  )
                        {
                            s[i][j] = 1;
                        }
                        else s[i][j] = 1000;

                    }
                    else{
                        if(((board.get_cell_color(1,3)!=color)&& (board.get_orbs_num(1,3)==3)) ||
                        ((board.get_cell_color(2,4)!=color)&& (board.get_orbs_num(2,4)==3)) ||
                        ((board.get_cell_color(3,3)!=color)&& (board.get_orbs_num(3,3)==3)) ||
                        ((board.get_cell_color(2,2)!=color)&& (board.get_orbs_num(2,2)==3))  )
                        {
                            s[i][j] = 1;
                        }
                        else s[i][j] = 2000;
                    }

                    
                }
                
            }

        }

    } 

    
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
    
    
    
    
    

    


    index[0] = row; 
    index[1] = col; 
}