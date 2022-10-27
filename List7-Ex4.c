#include <stdio.h>
int calcMaior(int end1,int end2){
 printf ("%d", end1);
 printf("\n%d", end2);
 if (end1>=end2){
     return end1,end2;}
 else if (end1<end2){
     int i;
     i=end2;
     end2=end1;
     end2=i;
     return end1,end2;
 }
}

int main (){
 int x=12, y=10, *px, *py;
 px=&x;
 py=&y;
 calcMaior(px, py);
 printf("%d %d", px, py);
return 0;
}
