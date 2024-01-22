#include <stdio.h>
#include <string.h>
int main(void){
 char TABCH[6][50];
 int l[5],i,j;
 for (i = 0; i < 6; i++)
 {
    printf("Enter the word number %d : ",i+1);
    gets(TABCH[i]);
 }
 for (i = 0; i < 5; i++) {
    int length = strlen(TABCH[i]);
    for (j = 0; j < length / 2; j++) {
      char temp = TABCH[i][j];
      TABCH[i][j] = TABCH[i][length - j - 1];
      TABCH[i][length - j - 1] = temp;
    }
  } for (i = 0; i < 6; i++) {
    printf("Word n%d : %s\n", i + 1, TABCH[i]);
  }
}