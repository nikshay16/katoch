#include<stdio.h>
int main(){
	int  Radius;
	float area, Area , Perimeter , perimeter=3.14,Circumfrence , breadth , height;
	printf("Enter the breadth :\n");
	scanf("%f",&breadth);
	
	printf("Enter the height :\n");
	scanf("%f",&height);
	
	Area = breadth * height;
	printf("\nArea of rectangle :%.3f",Area);
	
	Perimeter = (2*breadth) +(2*height);
	printf("\nPerimeter of rectangle :%.2f",Perimeter);
	
	printf("\nEnter the Radius : ");
	scanf("%d",&Radius);
	
	area = perimeter *Radius *Radius;
	
	Circumfrence=2*perimeter*Radius;
	
	printf("area : %.1f",area);
	printf(" \nCircumfrence of circle :%.1f",Circumfrence);
	return 0;
	
}
