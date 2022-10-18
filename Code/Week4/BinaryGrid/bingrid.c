#include "bingrid.h"

void printboard(board* brd);
bool str2board(board* brd, char* str);
void board2str(char* str, board* brd);
bool solve_board(board* brd);
bool pair(board* brd);
bool oxo(board* brd);
bool fill_rule(board* brd);
bool perfectSquare(board* brd);


void printboard(board* brd){

   for (int i = 0; i < brd->sz; i++) {
        for (int j = 0; j < brd->sz; j++) {
            printf("%c ", brd->b2d[i][j]);
        }
        printf("\n");
   }
}

bool str2board(board* brd, char* str){

   brd->sz = sqrt(strlen(str));

   if(strcmp(str, "") != 0){
      return false;
   }

   else if(perfectSquare(brd) == false){
      return false;
   }

   for(int i = 0; i < brd->sz; i++){
      for(int j = 0; j < brd->sz; j++){

         brd->b2d[i][j] = str[j];
         printboard(brd);
      }
   }

  return true;
}


void board2str(char* str, board* brd){
}

bool solve_board(board* brd){
}

bool pair(board* brd){

   for(int i = 0; i < brd->sz; i++){
      for(int j = 0; j < brd->sz; j++){

         if(brd->b2d[i][j] == ZERO && brd->b2d[i][j+1] == ZERO){
            brd->b2d[i][j-1] = ONE;
            brd->b2d[i][j+2]= ONE;
         }
         else if(brd->b2d[i][j] == ONE && brd->b2d[i][j+1] == ONE){
            brd->b2d[i][j-1] = ZERO;
            brd->b2d[i][j+2]= ZERO;
         }
      }
   }

   return 1;
}


bool oxo(board* brd){

   for(int i = 0; i < brd->sz; i++){
      for(int j = 0; j < brd->sz; j++){

         if(brd->b2d[i][j] == ZERO && brd->b2d[i][j+2] == ZERO){
            brd->b2d[i][j+1] = ONE;
         }
         else if(brd->b2d[i][j] == ONE && brd->b2d[i][j+2] == ONE){
            brd->b2d[i][j+1] = ZERO;
         }
      }
   }

   return 1;
}

bool fill_rule(board* brd){

   int cnt, i=0, j=0;

   for(int i; i < brd->sz; i++){
      for(int j; j < brd->sz; j++){
         if(brd->b2d[i][j] == ONE){
            cnt++;
         }

         if(cnt = brd->sz/2){
            for(int j; j < brd->sz; j++){
               if(brd->b2d[i][j] != ONE) {
                  brd->b2d[i][j] = ZERO;
               }
            }
         }
   }



return 1;
}

bool perfectSquare(board* brd){

   int num = brd->sz, iVar;
   float fVar;

   fVar=sqrt((double)num);
   iVar=fVar;

   if(iVar==fVar){
      return true;
   }
   return false;
}




/*
 * void test(void){
 *
 *    assert(str2board(&b, "..100")==false;
 *       assert(str2board(&b, "")==false
 *          assert(str2board(&b, "10...110..0...1.")==true;
 *
 *          }
 *          */

~                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
~                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
~                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
~                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
~                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
~                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                        
~                                                                                       
