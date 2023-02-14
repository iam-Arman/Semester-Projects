
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct hardware{
    char cname[300];
	char name[300];	
    
	char brand[300];	
	char code[100];	
    char date[100];
	int price;	
		}item;
void motherboard();
void monitor();
void keyboard();
void processor();
void mouse();
void ssd();
void viewall();
void verify();
void emptyrecord();
void totalprice();
int main()
{
    int num;
    char name[20]="admin";
    char pass[20]="admin";
    char temp_name[20];
    char temp_pass[20];
    printf("\n\n\n");
    printf("\t\t\t\t\t  /~~~~~~~~~~~~~~~~~~~/\n");
    printf("\t\t\t\t\t /~~~~~~~Welcome~~~~~/\n");
    printf("\t\t\t\t\t/~~~~~~~~~~~~~~~~~~~/\n\n\n");
    printf("\n\tEnter Username:- ");
    scanf("%s",temp_name);
    printf("\n\tEnter password:- ");
    scanf("%s",temp_pass);
     system("clear");
    printf("\n\n\n");
if(strcmp(name,temp_name) == 0 && strcmp(pass,temp_pass) == 0)
do{

    printf("\t\t\t\t\t  /~~~~~~~~~~~~~~~~~~~~~~~/\n");
    printf("\t\t\t\t\t /~~~~~~~~sale menu~~~~~~/\n");
    printf("\t\t\t\t\t/~~~~~~~~~~~~~~~~~~~~~~~/\n\n\n");

    printf("          ~press 1 for motherboard: \n");
    printf("        ~press 2 for monitor: \n");
    printf("     ~press 3 for keyboard: \n");
    printf("   ~press 4 for processor: \n");
    printf(" ~press 5 for mouse: \n");
    printf(" ~press 6 for SSD:\n");
    printf("   ~ press 7 for total sale\n");
    printf("     ~press 8 for deleting record\n");
    printf("       ~press 9 for searching by unique code\n");
    printf("         ~press 0 to exit\n\n\n");

    printf("Enter your choice:-  ");
    scanf("%d",&num);
    switch (num)
    {
    case 1:
    motherboard();
        break;
    case 2:
    monitor();
    break;
    case 3:
    keyboard();
    break;
    case 4:
    processor();
    break;
    case 5:
    mouse();
    break;
    case 6:
    ssd();
    break;
    case 7:
    viewall();
    break;
   case 8:
    emptyrecord();
    break;
   case 9:
    verify();
   break;
    case 0:
    exit(0);
	break;

    default:
    printf("Wrong choice !");
	break;
    }
}while(num!=0);
else
    printf("Password and User name are not matched\n");

    return 0;
}
void motherboard()
{
    item s;
    FILE *fptr;
    char temp;
    fptr= fopen("project.txt","a");
    printf("\t\t\t\t\t\tmotherboard\n\n\n");
       fprintf(fptr,"\t\t\t\t\t\t\tHardware_type=>Motherboard\n\n");
    printf("Enter customer name:- ");
    scanf("%c",&temp);
    scanf("%[^\n]",s.cname);
       fprintf(fptr,"customer_name => %s\n",s.cname);
    printf("Enter Motherboard brand:-  ");
    scanf("%c",&temp); 
	scanf("%[^\n]",s.brand);
       fprintf(fptr,"Mob Brand => %s\n",s.brand);
    printf("Enter motherboard name:-  ");
    scanf("%c",&temp);
    scanf("%[^\n]",s.name);
       fprintf(fptr,"Mob Name => %s\n",s.name);
    printf("Enter the price:-  ");
    scanf("%c",&temp);
    scanf("%d",&s.price);
       fprintf(fptr,"Price => %d\n",s.price);
     printf("Enter unique code:-  ");
    scanf("%c",&temp);
    scanf("%[^\n]",s.code);
       fprintf(fptr,"Unique code => %s\n",s.code);
    printf("Enter today's date:-  ");
    scanf("%c",&temp);
    scanf("%[^\n]",s.date);
       fprintf(fptr,"Date => %s\n\n\n",s.date);
  fclose(fptr);
  system("clear");
}
void monitor()
{
    
    item s;
    FILE *fptr;
    char temp;
    fptr= fopen("project.txt","a");
    printf("\t\t\t\t\t\tMonitor\n\n\n");
     fprintf(fptr,"\t\t\t\t\t\t\tHardware_type=>Monitor\n\n");
    printf("Enter customer name:-  ");
    scanf("%c",&temp);
    scanf("%[^\n]",s.cname);
       fprintf(fptr,"customer_name => %s\n",s.cname);
    printf("Enter Monitor brand:-  ");
    scanf("%c",&temp); // temp statement to clear buffer
	scanf("%[^\n]",s.brand);
       fprintf(fptr,"Monitor Brand => %s\n",s.brand);
    printf("Enter monitor name:-  ");
    scanf("%c",&temp);
    scanf("%[^\n]",s.name);
       fprintf(fptr,"Monitor Name => %s\n",s.name);
    printf("Enter the price:-  ");
    scanf("%c",&temp);
    scanf("%d",&s.price);
       fprintf(fptr,"Price => %d\n",s.price);
     printf("Enter unique code:-  ");
    scanf("%c",&temp);
    scanf("%[^\n]",s.code);
       fprintf(fptr,"Unique code => %s\n",s.code);
    printf("Enter today's date:-  ");
    scanf("%c",&temp);
    scanf("%[^\n]",s.date);
       fprintf(fptr,"Date => %s\n\n\n",s.date);
  fclose(fptr);
  system("clear");

}
void mouse()
{
   
    item s;
    FILE *fptr;
    char temp;
    fptr= fopen("project.txt","a");
    printf("\t\t\t\t\t\tMouse\n\n\n");
     fprintf(fptr,"\t\t\t\t\t\t\tHardware_type=>Mouse\n\n");
    printf("Enter customer name:-  ");
    scanf("%c",&temp);
    scanf("%[^\n]",s.cname);
       fprintf(fptr,"customer_name => %s\n",s.cname);
    printf("Enter Mouse brand:-  ");
    scanf("%c",&temp); // temp statement to clear buffer
	scanf("%[^\n]",s.brand);
       fprintf(fptr,"Mouse Brand => %s\n",s.brand);
    printf("Enter mouse name:-  ");
    scanf("%c",&temp);
    scanf("%[^\n]",s.name);
       fprintf(fptr,"Mouse Name => %s\n",s.name);
    printf("Enter the price:-  ");
    scanf("%c",&temp);
    scanf("%d",&s.price);
       fprintf(fptr,"Price => %d\n",s.price);
     printf("Enter unique code:-  ");
    scanf("%c",&temp);
    scanf("%[^\n]",s.code);
       fprintf(fptr,"Unique code => %s\n",s.code);
    printf("Enter today's date:-  ");
    scanf("%c",&temp);
    scanf("%[^\n]",s.date);
       fprintf(fptr,"Date => %s\n\n\n",s.date);
  fclose(fptr);
  system("clear");

}
void keyboard()
{
    
    item s;
    FILE *fptr;
    char temp;
    fptr= fopen("project.txt","a");
    printf("\t\t\t\t\t\tKeyboard\n\n\n");
    fprintf(fptr,"\t\t\t\t\t\t\tHardware_type=>Keyboard\n\n");
    printf("Enter customer name:-  ");
    scanf("%c",&temp);
    scanf("%[^\n]",s.cname);
       fprintf(fptr,"customer_name => %s\n",s.cname);
    printf("Enter Keyboard brand:-  ");
    scanf("%c",&temp); // temp statement to clear buffer
	scanf("%[^\n]",s.brand);
       fprintf(fptr,"Keyboard Brand => %s\n",s.brand);
    printf("Enter Keyboard name:-  ");
    scanf("%c",&temp);
    scanf("%[^\n]",s.name);
       fprintf(fptr,"keyboard Name => %s\n",s.name);
    printf("Enter the price:-  ");
    scanf("%c",&temp);
    scanf("%d",&s.price);
       fprintf(fptr,"Price => %d\n",s.price);
     printf("Enter unique code:-  ");
    scanf("%c",&temp);
    scanf("%[^\n]",s.code);
       fprintf(fptr,"Unique code => %s\n",s.code);
    printf("Enter today's date:-  ");
    scanf("%c",&temp);
    scanf("%[^\n]",s.date);
       fprintf(fptr,"Date => %s\n\n\n",s.date);
  fclose(fptr);
  system("clear");
}
void processor()
{
  
    item s;
    FILE *fptr;
    char temp;
    fptr= fopen("project.txt","a");
    printf("\t\t\t\t\t\tProcessor\n\n\n");
     fprintf(fptr,"\t\t\t\t\t\t\tHardware_type=>Processor\n\n");
    printf("Enter customer name:-  ");
    scanf("%c",&temp);
    scanf("%[^\n]",s.cname);
       fprintf(fptr,"customer_name => %s\n",s.cname);
    printf("Enter Processor brand:-  ");
    scanf("%c",&temp); // temp statement to clear buffer
	scanf("%[^\n]",s.brand);
       fprintf(fptr,"Processor Brand => %s\n",s.brand);
    printf("Enter Processor name:-  ");
    scanf("%c",&temp);
    scanf("%[^\n]",s.name);
       fprintf(fptr,"processor Name => %s\n",s.name);
    printf("Enter the price:-  ");
    scanf("%c",&temp);
    scanf("%d",&s.price);
       fprintf(fptr,"Price => %d\n",s.price);
     printf("Enter unique code:-  ");
    scanf("%c",&temp);
    scanf("%[^\n]",s.code);
       fprintf(fptr,"Unique code => %s\n",s.code);
    printf("Enter today's date:-  ");
    scanf("%c",&temp);
    scanf("%[^\n]",s.date);
       fprintf(fptr,"Date => %s\n\n\n",s.date);
  fclose(fptr);
}
void ssd()
{
   
  item s;
    FILE *fptr;
    char temp;
    fptr= fopen("project.txt","a");
    printf("\t\t\t\t\t\tSSD\n\n\n");
      fprintf(fptr,"\t\t\t\t\t\t\tHardware_type=>SSD\n\n");
    printf("Enter customer name:-  ");
    scanf("%c",&temp);
    scanf("%[^\n]",s.cname);
       fprintf(fptr,"customer_name => %s\n",s.cname);
    printf("Enter SSD brand:-  ");
    scanf("%c",&temp);
	scanf("%[^\n]",s.brand);
       fprintf(fptr,"SSD Brand => %s\n",s.brand);
    printf("Enter SSD name:-  ");
    scanf("%c",&temp);
    scanf("%[^\n]",s.name);
       fprintf(fptr,"SSD Name => %s\n",s.name);
    printf("Enter the price:-  ");
    scanf("%c",&temp);
    scanf("%d",&s.price);
       fprintf(fptr,"Price => %d\n",s.price);
     printf("Enter unique code:-  ");
    scanf("%c",&temp);
    scanf("%[^\n]",s.code);
       fprintf(fptr,"Unique code => %s\n",s.code);
    printf("Enter today's date:-  ");
    scanf("%c",&temp);
    scanf("%[^\n]",s.date);
       fprintf(fptr,"Date => %s\n\n\n",s.date);
  fclose(fptr);
    
}
void viewall(){

    FILE* ptr;
    char ch;
 
    // Opening file in reading mode
    ptr = fopen("project.txt", "r");
 
    if (ptr == NULL) {
        printf("file can't be opened \n");
    }
    printf("\t\t\t\t\t  /~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~/\n");
    printf("\t\t\t\t\t /~~~~~~~~~~~all sales are~~~~~~~~~~~/\n");
    printf("\t\t\t\t\t/~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~/\n");
    printf("\n\n\n");
 
    // Printing what is written in file
    // character by character using loop.
    do {
        ch = fgetc(ptr);
        printf("%c", ch);
 
        // Checking if character is not EOF.
        // If it is EOF stop eading.
    } while (ch != EOF);
 
    // Closing the file
    fclose(ptr);

}
void emptyrecord()
{
    item s;
        FILE *fptr;
        fopen("project.txt","w");
        

}
void verify()
{
    item s;
	FILE *fptr;
	int flag=0;
	char findCode[20];
	printf("Enter Hardware code for search specefic record ::");
	scanf("%s",findCode);
	system("clear");
	fptr = fopen("project.txt","r");
	if(fptr== NULL)
	{
		printf("file does not found !");
		exit(1);

	}
	else
	{	
		while(fscanf(fptr,"%s %s %d %s\n",s.code,s.name,&s.price,s.date) != EOF)
		{
			
	
			if(strcmp(s.code,findCode) == 0)
			{	flag=1;
				
                printf("\n\t\t\t\t\tRecord Found\n\n\n");
			}
		}
		if(flag == 0)
			printf("\n\t\t\t\tRecord Not Found\n\n\n");
		
	}



}
