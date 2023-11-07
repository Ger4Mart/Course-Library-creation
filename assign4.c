//Library functions
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
		char course_Name[80];
		char course_Sched[4];
		unsigned course_Hours;
		unsigned course_size;
		unsigned padding;


} COURSE;

void flushCourses(){
	int core;
	while((core=getChar()) != '\n' && core != EOF);


}

int Main(){
	//pointers of the file
	FILE *fa, *fb;
	char another, choice;
	COURSE e;

	int course_number, cn;
	//store the name of the course temporarely
	char courseNm[40]

	long int record_size;

	fa =fopen("COURSE.DAT","r+");
		if(fa == NULL){
			fa = fopen("COURSE.DAT","w+");
			if(fa == NULL){
				printf("Failed to open the file");
				exit(1);

			}
		}
	record_size = sizeof(e);


	while(1){
		printf("Course Database \n");
		printf("	C - Create a new course record \n");
		printf("	R - Read a course record \n");
		printf("	U - Update a course record \n");
		printf("	D - Delete a course record \n");
		printf("	E - Exit the program\n");

		//enter the case choice 
		fflush(stdin);
		//scanner of the choice
		scanf("\n%c",%choice);
		//switch case scenarios
		switch(choice){
			case 'C':
				printf(" \n Course has been created: ");
				//mov pointer to the end of the file
				fseek(fa,0,SEEK_END);
				another ='y';
				while(another == 'y' || 'Y'){
					flushCourses();
					printf("\n Enter the number of the Course:");
					scanf("%d",&course_number \n);
					printf("\n Enter the Course name: ");
					scanf("%s",e.course_Sched);
					printf("\n Enter a Course credit hours");
					scanf("%d", &e.course_Hours);
					printf("\n Enter student enrollment");
					scanf("%d",&e.course_size);
					fwrite(&e,record_size,1,fa);

					printf("\n Do you want to add another record(Y/N)");
					fflush(stdin);
					scanf("\n%C",&another);
					
				}
				break;

			case 'R':
				//pointer to the start of the file
				rewind(fa);
				while(fread(&e,record_size,1,fa)==1){
					printf("\n course_number-%d\n course_name
				}
				

		}


	}
}


