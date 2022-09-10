#include <stdio.h>
#include <stdlib.h>
#define X 0
#define Y 1
int arr[5000][5000];
int move[4][2]={{-1, 0}, {0, -1}, {1, 0}, {0, 1}};
void getxy(int, int);
int main(void) {
 int len, dir;
 scanf("%d %d", &len, &dir);
 for(int i=0;i<len;i++) {
  for(int j=0;j<len;j++) {
   scanf("%d", &arr[i][j]);
  }
 }
 int nowX=len/2, nowY=nowX;//start in middle
 getxy(nowX, nowY);
 for(int i=1;i<len;i++) {
  for(int k=0;k<2;k++) {
   for(int j=0;j<i;j++) {
    nowX+=move[dir][X];
    nowY+=move[dir][Y];
    getxy(nowX, nowY);
   }
   dir=(dir+1)%4;
  }
 }
 for(int i=1;i<len;i++) {
  nowX+=move[dir][X];
  nowY+=move[dir][Y];
  getxy(nowX, nowY);
 }
}
void getxy(int x, int y) {
 printf("%d", arr[y][x]);//陣列裡的xy和直角座標系統剛好相反
}
