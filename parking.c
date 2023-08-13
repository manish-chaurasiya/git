#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>

int date,name, month, year,no, option, number, t1=0, t2=0, t3=0, t4=0, t5=0, total;
char ch;
float time;
void park_details()
{
    FILE *details;
    details = fopen("park details.txt", "r");
    if(details==NULL)
    {
          printf("FILE DOES NOT EXIST!!!!");
    }
    else
    {
        while(!feof(details))
        {
           ch = fgetc(details);
           printf("%c", ch);
        }
    }}

void menu()
{
    FILE *menu;
    menu = fopen("park menu.txt", "r");
    if(menu==NULL)
    {
        printf("FILE DOES NOT EXIST!!!!");
    }
    else
    {
        while(!feof(menu))
        {
            ch=fgetc(menu);
            printf("%c", ch);
}
}
}
int main()
{
    system("CLS");
    system("color 0A");

    FILE *details;
    details = fopen("park details.txt", "a");

    printf("\n ENTER TODAYS DATE FOR CONTINUE ");
    printf("\n\tENTER DAY: " );
    scanf("%d", &date);
    printf("\n\tENTER MONTH: ");
    scanf("%d", &month);
    printf("\n\tENTER YEAR: ");
    scanf("%d", &year);

    fprintf(details, "\n\nDATE: %d-%d-%d", date, month, year);
    fprintf(details, "\n---------------");
    system("CLS");

    while(1)
    {

        menu();
        printf("ENTER AN OPTION: ");
        scanf("%d", &option);
        FILE *details;
        details = fopen("park details.txt", "a");

        switch(option)
        {
        case 1:
            printf(" ENTER TIME: ");
            scanf("%f", &time);
            printf(" ENTER REGISTRATION NUMBER: ");
            scanf("%d", &number);
            printf("ENTER THE VEHICLE NO: ");
            scanf("%d", &no);

            t1 +=100;
            fprintf(details, "\t\tBUS\t\t%.2f\t\t%d\t\t%d\t\t100\n",time, number,no);
            printf("SUCCESSFULLY ADDED!!!!");
            getch();
            system("CLS");
            break;
        case 2:

            printf(" ENTER TIME: ");
            scanf("%f", &time);
            printf(" ENTER REGISTRATION NUMBER: ");
            scanf("%d", &number);
            printf("ENTER THE VEHICLE NO: ");
            scanf("%d", &no);

            t2+=80;
            fprintf(details, "\t\tTRUCK      \t\t%.2f\t\t%d\t\t%d\t\t80\n", time, number,no);
            printf("SUCCESSFULLY ADDED!!!!");
            getch();
            system("CLS");
            break;
        case 3:
            printf(" ENTER TIME: ");
            scanf("%f", &time);
            printf(" ENTER REGISTRATION NUMBER: ");
            scanf("%d", &number);
             printf("ENTER THE VEHICLE NO: ");
            scanf("%d", &no);

            t3+=70;
            fprintf(details, "\t\tPRIVATE CAR\t\t%.2f\t\t%d\t\t%d\t\t70\n", time, number,no);
            printf("SUCCESSFULLY ADDED!!!!");
            getch();
            system("CLS");
            break;
        case 4:
              printf(" ENTER TIME: ");
            scanf("%f", &time);
            printf(" ENTER REGISTRATION NUMBER: ");
            scanf("%d", &number);
            printf("ENTER THE VEHICLE NO: ");
            scanf("%d", &no);

            t4+=60;
            fprintf(details, "\t\tMOTOR CYCLE\t\t%.2f\t\t%d\t\t%d\t\t60\n", time, number,no);
                printf("SUCCESSFULLY ADDED!!!!");
            getch();
            system("CLS");
            break;
        case 5:
            printf(" ENTER TIME: ");
            scanf("%f", &time);
            printf(" ENTER REGISTRATION NUMBER: ");
            scanf("%d", &number);
             printf("ENTER THE VEHICLE NO: ");
            scanf("%d", &no);
            t5+=40;
            fprintf(details, "\t\tBY CYCLE\t\t%.2f\t\t%d\t\t%d\t\t40\n", time, number,no);
             printf("SUCCESSFULLY ADDED!!!!");
            getch();
            system("CLS");
            break;
        case 6:
            system("CLS");
            park_details();
                 printf("\n\n\n\t\t\tPRESS ANY KEY TO BACK TO MAIN MENU....");

             getch();
            system("CLS");
            break;

        case 7:
            total=t1+t2+t3+t4+t5;
            fprintf(details,"\t\t\t\t\t\t\t\t\t\t\t Total = %d",total);
             fprintf(details,"\n............................................................................................\n");

            exit(0);
            break;
        default:
             printf("INVALID INPUT!!!");
            getch();
             printf("\n\n\n\t\t\tPRESS ANY KEY TO BACK TO MAIN MENU....");
            system("CLS");
            break;
        }
}
return 0;
}
6
