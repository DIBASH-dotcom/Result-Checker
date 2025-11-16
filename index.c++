#include<stdio.h>
int main() {
	int marks[5] [3];
	int total,i,j;
	float average;
	char grade;
	
	for(i=0; i<5; i++) {
		printf("nEnter marks for Student %d (Math, Science, English):\n",i+1);
	for(j=0; j<3; j++) {
		scanf("%d",&marks[i][j]);
	}
	total = marks[i][0] + marks[i][1] + marks[i][2];
	average =total /3.0;
	if(average >=90) {
		grade ='A';
	} else if (average >=75) {
		grade ='B';
	} else if (average >= 50) {
		grade ='C';
	} else {
		grade ='F';
		
	
	 printf("Student %d -> Total: %d, Average: %.2f, Grade: %c\n", i+1, total, average, grade);
    }
	
	}
}
