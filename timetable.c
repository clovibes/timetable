#include<stdio.h>
#include<stdlib.h>
void displayTable(int i){
	int j;
        const char* table[7][5]={
        {"Church","Church","Home","Rest","Rest" },
        {"Thermo,","Circuit,","staics,","Free,","C Prog" },
        { "Free,","analysis,"," MatSci,","C Prog,","Free"},
        {"Thermo","Free,","Free,","Free,","Free" },
        { "Free","Free,","Circuit,","Free,","Free"},
        {"analysis,","C TUT,","Free","Free,","GST"},
        {"home chores","Circuit tut","Free","Free","Free" }};

	printf("\n\t  8-10   10-12    12-2    2-4      4-6\n\n");

	printf("\t");
	for (j=0;j<5;j++){
		printf("%-8s ",table[i][j]);
		}
	printf("\n\n");
}

int main(){
    printf("\t\t\tWelcome to your personal timetable Sir.\n\n");
	char continure[5];
	char input[10];
	int i;
	const char* days[7]={"sunday","monday","tuesday","wednesday","thursday","friday","saturday"};
	do{
	printf("Enter day of the week : ");
	scanf("%s",&input);
	for (i=0;i<7;i++){
		if (strcmp(days[i],input)==0){
           // printf("you entered %s",days[i]);
			displayTable(i);
			break;
			}
		}
	printf("\nDo you want to check another day? ( yes or no ) ");
	scanf("%s", &continure);
	} while (strcmp(continure,"no")!=0);
	printf("\n\t\t\tThanks for using this timetable ");
}

