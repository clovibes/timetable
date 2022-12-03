#include<stdio.h>
#include<stdlib.h>
void displayTable(int i)
{
	int j;
	const char* table[7][5]=
{
    {"Church","Church","Home","Rest","Rest" },

	{"FCE202","EEE234","FCE246","FREE","FREE" },

	{ "FCE262","EEE212,","FREE","GST212","FREE"},

	{"FCE202","EEE234","FREE","FREE","FREE" },

	{ "FCE262","FREE","FREE","Free,","EEE212"},

	{"FCE202","EEE234","EEE232","FCE246",""},

	{"HOME","HOME","HOME","HOME","HOME" }
};

	printf("\n\t8-10       10-12      12-2       2-4        4-6\n\n");

	printf("\t");
	for (j=0;j<5;j++)
        {
		printf("%-10s ",table[i][j]);
		}
	printf("\n\n");
}

int main()
{
    char name[]="";
    printf("\tTime table in c programming by:\n\tOBAH CHARLES LIVINGSTONE \n\tUG/16/0893\n\t08164997610\n\n");
    printf("\tPlease enter your name: ");
    scanf("%s",&name);
    printf("\tWelcome to your personal timetable  %s",name);

    printf("\t\t\n\n");
    printf("");
	char continure[5];
	char input[10];
	int i;
	const char* days[7]={"sunday","monday","tuesday","wednesday","thursday","friday","saturday"};
	do{
	printf("\n\tEnter day of the week e.g monday : ");
	scanf("%s",&input);
	for (i=0;i<7;i++){
		if (strcmp(days[i],input)==0){
           //printf("you entered %s",days[i]);
			displayTable(i);
			printf("COURSE INFORMATION:\n");
			 printf("1 FCE246 IS PYTHON PROGRAMMING.\n2 FCE202 IS ENGINEERING ANALYSIS 2.\n3 FCE262 IS ENGINEERING DYNAMICS.\n4 GST212 IS INTRO. TO PHILOSOPHY AND LOGIC.\n5 EEE234 IS C PROGRAMMING.\n6 EEE212 IS CIRCUIT ANALYSIS 2.\n7 EEE232 IS LOGIC AND DIGTAL SYSTEMS.\n");
			break;
			}
		}
	printf("\nDo you want to check another day? ( yes or no ) ");
	scanf("%s", &continure);
	} while (strcmp(continure,"no")!=0);
	printf("\n\t\t\tThanks for using this timetable\n\n");
}

