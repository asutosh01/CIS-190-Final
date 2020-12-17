#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct POINT{ //struct for storing a point on the x and y plane, at the same time
  int x;
  int y;
};
int quadant(struct POINT k); //function for getting the quadrant of a given point
int main(void) {
  int x=0; //int for storing the given x from the user
  int y=0; //int for storing the given y from the user
  struct POINT U; //storing the point created, using x and y
  printf("Please input a number for x:\n");
  scanf("%d",&x);
  U.x=x;
  printf("Please input a number for y:\n");
  scanf("%d",&y);
  U.y=y;
  printf("quadent:%d\n",quadant(U));
  return 0;
}
int quadant(struct POINT k){
  if((k.x>=0)&&(k.y>=0)){
    return 1;
  }
  if((k.x<0)&&(k.y>=0)){
   return 2; 
  }
  if((k.x<0)&&(k.y<0)){
   return 3;   
  }
  if((k.x>=0)&&(k.y<0)){
    return 4;
  }
  return 0;
}
