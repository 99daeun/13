#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student {
	int ID;//학번
	char name[10];//이름
	double grade;//학점
	 
};

int main(void){
	//instance 선언
	struct student s1={123,"daeun",4.3}; 
	//다른값 변경 
	s1.ID=2311945;
	strcpy(s1.name,"daeun");
	s1.grade=4.3;
	//출력
	printf("ID:%d\n",s1.ID);
	printf("name:%s\n",s1.name);
	printf("grade:%f\n",s1.grade);
	
	return 0; 
}
