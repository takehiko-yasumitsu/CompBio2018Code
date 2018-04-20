#include<stdio.h>
#include<math.h>

int main(void){
float r, k;
  double x, x0, xx;
int t;
  r=0.05; k=1000; x0=10;

 FILE *fp;
 fp=fopen("output.dat", "a");
 fprintf(fp, "%d, %f\n", x0, 0);
 x=x0;

   for(t=0; t<300; t++){
      xx=x+r*(1-x/k)*x;

  fprintf(fp, "%d, %f\n", t, xx);
   x=xx;
 }


 fclose(fp);

 return 0;
}
