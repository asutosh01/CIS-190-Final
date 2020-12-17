#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double calcy(double x); //function protatype for getting the y value
double calct(double y); //function protatype for getting the t value if t is outside of 1 and 10
double calcw(double y); //function protatype for getting the w value
double calct2(double w); //function protatype for getting the t value if t is between 1 and 10
int main(void) {
  double sum; //double which stores the sum
  int count; //int which stores the count
  float x=0.0; //float which stores x
  double y=0.0; //double which stores y
  double t=0.0; //double which stores t
  double w=0.0; //double which stores w
  double average=0.0; //double which stores the average
  double go=1; //double which stores a constant for the loop, so it will run indefinatly, unless it is stopped via break
  printf("Please input a number:\n");
  scanf("%f",&x);
  sum=0;
  count=0;
  while(go){
  if(x==1){
    average=sum/count;
    printf("Average:%.1f\n",average);
    break;
  }else{
   y=calcy(x);
    if(y>=1&&y<=10){
    w=calcw(y);
    t=calct2(w);
    }else{
    t=calct(y);
    }
  }
  count++;
  sum+=fabs(t);
  printf("t:%.1f\n",t);
  printf("Please input a number\n");
  scanf("%f",&x);  
  }

  
  return 0;
}
double calcy(double x){
  double k=0.0;
  k=(x+3.0)*(x+4.0);
  k/=2.0*(x+1.0);
  return k;
}
double calct(double y){
  double k=0.0;
  k=(y*y*y)+7.0;
  return k;
}
double calcw(double y){
  double k=0.0;
  k=sqrt(y-1.0);
  return k;
}
double calct2(double w){
  double k=0.0;
  k=(1.0/7.0)*w;
  return k;
}
