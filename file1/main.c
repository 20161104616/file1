#include <stdio.h>
int main(void)
{
    FILE *pf;
    pf = fopen("/／Users/／a20161104616/／Desktop/／readfile／/readfile/／sort1.txt", "w+");     /*打开文件*/
    if(pf != NULL)
    {
        printf("open file ok\n");
    }
    else
    {
        printf("open file error\n");
    }
    fclose(pf);
    
    return 0; 
}
