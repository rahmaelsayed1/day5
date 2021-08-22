# include <stdio.h>
#include <stdlib.h>

	struct Course 
	{
		int hours ;
		float score; 
	};
	struct student {
		char courses [2][2];
		float gpa;
	};
	
	void gpaCalc(float score1, float score2){
		float gpa =((score1*3)+(score2*4)) / 7;
		printf("%.2f",gpa);
}
 
 
int main(){
	struct Course subs[2];
	struct student s;

	subs[0].hours=3;
	subs[1].hours=4;
	printf("Enter your math score (Out of 4):  ");
	scanf("%f",&subs[0].score);
	printf("Enter programming subject score (Out of 4):  ");
	scanf("%f",&subs[1].score);
	printf("your gpa is ");
	gpaCalc(subs[0].score, subs[1].score) ;
	printf("\n");
system ("pause");
return 0;
}
