#include <stdio.h>
#include <math.h>

float polinom(float x){
	return 2*pow(x,3)+4*pow(x,2)-13*x+43;
}
int main(){
	for (int i=0;i<20;i++){
		float res=polinom(i);
		printf("%f\n",res);
	}
	return 0;
}
