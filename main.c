#include<stdio.h>

float MAX(float X , float Y);
float MIN(float X , float Y);
main()
{
	float A , B , C , D;
	printf("Entrer four nums: ");
	scanf("%f%f%f%f",&A,&B,&C,&D);
	printf(" The MAX Value: %f",MAX(MAX(A,B),MAX(C,D)));
	printf("\nThe MIN Value: %f",MIN(MIN(A,B),MIN(C,D)));
}
float MAX(float X , float Y)
{
	if ( X>Y )
	return X;
	else
	return Y;
}
float MIN(float X , float Y)
{
	if ( X<Y )
	return X;
	else
	return Y;
} 
