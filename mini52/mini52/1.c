#include<stdio.h>
struct node{
	char name[1000];
	int id;
	int no_of_subject;
	int marks;
	char grade;
};
int main(){
	int n;
	printf("enter number of students:");
	scanf("%d",&n);
	struct node array[n];
	int i=0,j=0;
	int id1;
	for(i=0;i<n;i++){
			printf("enter name of student %d",i+1);
			gets(array[i].name);
			printf("enter id of student %d",i+1);
			scanf("%d",&array[i].id);
			printf("enter no of subjects of student %d",i+1);===
			scanf("%d",&array[i].no_of_subjects);
			printf("enter marks of student %d",i+1);
			scanf("%d",&array[i].marks);
			printf("enter grade of student %d",i+1);
			getchar(&array[i].grade);
		}
	printf("enter student id to search:");
	scanf("%d",&id1);
	for(i=0;i<n;i++){
		if(array[i].id==id1){
			j=i;
		}
	}
	if(i==n)printf("not found");
	else{
		printf("details of student with id  %d are:\n",array[j].id);
		printf("name of student %s\n",array[j].name);
		printf("enter no of subjects of student %d\n",array[j].no_of_subjects);
		printf("marks of student %d\n",array[j].marks);
		printf("enter grade of student %c\n",array[j].grade);
	}
	
}