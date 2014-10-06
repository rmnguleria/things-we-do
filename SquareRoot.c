#include<stdio.h>
double dabs(double x){
	if(x < 0 )
		return -x;
	return x;
} 
int iter = 0;
double SQRT(double x,double y){
	iter += 1;
	/* if(iter > 10 ) {
		return y;
	} */
	printf("%f\n",y);
	printf("Value of y*y is %f and x is %f\n",y*y,x);
	if(dabs(y*y - x) < 0.0001)
	{
		printf("%f\n",y);
		return y;
	}
	return SQRT(x,((y + x/y)/2));
}
double SQRT1(double x){
	return SQRT(x,1);
}
int main(){
	printf("%f\n",SQRT1(4));
	return 0;
}