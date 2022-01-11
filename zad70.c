// Program ce izracunat povrsinu plasta stozca.

#include<stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14

//Funkcija za izracunavanje povrsine plasta stozca.
float povrsina_plasta(int polumjer,int visina){
	
	float s;
	s=sqrt(polumjer*polumjer+visina*visina);
	float M=PI*s*polumjer;
	return M;
}

int main(){
   int polumjer,visina;
   printf("Unesi polumjer stozca:\n");
   scanf("%d",&polumjer);
   printf("Unesi visinu stozca:\n");
   scanf("%d",&visina);
   float M=povrsina_plasta(polumjer,visina);
   printf("Povrsina plasta stozca je %f\n",M);
   return 0;
}
