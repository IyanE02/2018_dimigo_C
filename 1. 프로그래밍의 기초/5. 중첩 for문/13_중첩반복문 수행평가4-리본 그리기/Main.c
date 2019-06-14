#include <stdio.h>
#include <stdlib.h>
int main()
{
    int inputVal;   // »ç¿ëÀÚ ÀÔ·Â°ª ÀúÀå.
    
    int spaceCnt, leftStarCnt, rightStarCnt;  // space : °ø¹é¼öÄ¡ ÀúÀå. 
    int mid;    // ¶óÀÎÀÇ Áß°£ ÁöÁ¡À» Ç¥½Ã 
    int i,j,k,l;  // ¹Ýº¹¹® »ç¿ë º¯¼ö  
    int inputSpace; //°ø¹éÀ» »ðÀÔÇÒ À§Ä¡¸¦ ÀúÀåÇÒ º¯¼ö 
    int line, size; // lineÀº ÁÙÀÇ °¹¼ö, size´Â ÁÙÀÇ ³Êºñ 
    int spaceFlag = 1;
    int charCnt = 0;
    
    char a = 'A';
    
    
    while(1)    // ÀÔ·Â°ªÀÌ È¦¼ö¸¸À» ¹Þµµ·Ï ÇÏ±âÀ§ÇÑ ¹«ÇÑ ·çÇÁÀÌ´Ù 
    {
        scanf("%d",&inputVal);
        if(inputVal % 2 == 1)  // È¦¼öÀÌ¸é 
        {
            break;    // ¹«ÇÑ ¹«ÇÁ Å»Ãâ 
        }
    }
    
    //°è»ê ¼ö½ÄÀ» ÀÔ·Â°ª ¾Æ·¡·Î ³»·Á¾ß ÇÑ´Ù.
     
    mid = inputVal / 2 + 1;     // Áß°£¶óÀÎ °ªÀ» ÀúÀåÇÏ´Â ¼ö½Ä 
    spaceCnt = inputVal - 2;       // °ø¹éÀ» Ç¥½ÃÇÏ±â À§ÇÑ ¶óÀÎÀ» ÀúÀåÇÏ´Â ¼ö½Ä
    inputSpace = inputVal % 2 + 1;  // ¹¹ Áï À§Ä¡´Â 2¹øÂ°Ä­ÀÌ´Ù¶ó´Â °Å´Ù;; 
    line = inputVal; size = inputVal;
    leftStarCnt = rightStarCnt = 1;
        
    for(i = 1; i <= line; i++)  // ÀÔ·Â°ª ¸¸Å­ ¹Ýº¹¹®À» µ·´Ù. 
    {                           // ÀÌ ¹Ýº¹¹®Àº ¶óÀÎÀ» ±¸¼ºÇÑ´Ù. 
            if(i == mid)    // Áß°£ °ªÀ» Ã³¸®ÇÏ±â À§ÇÑ ÇÃ·¡±× ¼³Á¤ 
            {
                spaceFlag = -1;
            }
            else
                spaceFlag = 1;
            /////////////////¿ÞÂÊ º°////////////////////////    
            for(j = 1; j <= leftStarCnt; j++)
            {
                printf("*");                
                //printf("1");
            }
            
            ////////////////////°ø¹é »ðÀÔ///////////////////        
            for(k = 1; k <= spaceCnt; k++)
            {
                printf(" ");
                //printf("2");                    
            } 
            //////////////////¿À¸¥ÂÊ º°////////////////////// 
            if(i == mid)
            {
                rightStarCnt--;
            }
            for(l = 1; l <= rightStarCnt; l++)
            {
                printf("*");
            }
            if(i == mid)
            {
                rightStarCnt++;
            }            
            /////////////////////////////////////////////////
            if( i < mid)
            {
                spaceCnt -= 2;
            }
            else if ( i >= mid)
            {
                spaceCnt += 2;
            }             
            ///////////////////////////////////////////////////
            if( i  <  mid)
            {   
                leftStarCnt++;
                rightStarCnt++;
            }
            else if(i >= mid)
            {
                leftStarCnt--;
                rightStarCnt--;
            }
            ////////////////////////////////////////////////////
        printf("\n");
                
    }
    return 0;
}
