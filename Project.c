#include <stdio.h>
#include <string.h>

char username[15], password[15];

int page();
int login();
int mainmenu();
int title();

int page()
{
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("|                                      GANPAT UNIVERTSITY                                     |\n");
    printf("|                      BRANCH - COMPUTER SCIENCE AND ENGINEERING (CBA)                        |\n");
    printf("|                                          BATCH - 11                                         |\n");
    printf("|                                   ENROLLMENT NO. - CBA14                                    |\n");
    printf("|                        PROJECT TITLE - PID593 NARI - Women Safety                           |\n");
    printf("|                                        ESFP-I PROJECT                                       |\n");
    printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
}

int title()
{
    printf("\n\n***********************************************************************************************");
    printf("\n                              N A R I    -    W O M E N     S A F E T Y");
    printf("\n***********************************************************************************************");
}




int features();
int features(){
    char ch;
        FILE *fp;
        fp = fopen("Features.txt", "r");
        while ((ch = getc(fp)) != EOF)
        {
            printf("%c", ch);
        }
        fclose(fp);
}

int aboutus();
int aboutus(){
    char ch1;
        FILE *fp1;
        fp1 = fopen("About Us.txt", "r");
        while ((ch1 = getc(fp1)) != EOF)
        {
            printf("%c", ch1);
        }
        fclose(fp1);
}



int mainmenu()
{
    printf("-------------------------------------------Main Menu-------------------------------------------");
    printf("\n\n1. About Us\n");
    printf("\n2. Contact Us\n");
    printf("\n3. Features\n");
    printf("\n0. Exit");
    int choice1;
    printf("\n\nEnter your choice: ");
    scanf("%d", &choice1);
    printf("\n-----------------------------------------------------------------------------------------------");
    switch (choice1)
    {
    case 1:
        printf("\n\n----------------------------------------About Us-----------------------------------------------\n\n");
        aboutus();
        printf("\n\n-----------------------------------------------------------------------------------------------\n\n");
        mainmenu();
        break;

    case 2:
        printf("\n\nContact Us on: ");
        printf("\n\n24/7 Toll-free Number: 1234567890");
        printf("\n\nEmail: nariwsapp@gmail.com\n\n");
        mainmenu();
        break;

    case 3:
        printf("\n\n----------------------------------------Features-----------------------------------------------\n\n");
        features();
        printf("\n\n-----------------------------------------------------------------------------------------------\n\n");
        mainmenu();
    }
}
int login()
{
    printf("\n\n-----------------------------------------------------------------------------------------------");

    printf("\n\nEnter Username: ");
    scanf("%s", &username);

    printf("\nEnter Password: ");
    scanf("%s", &password);

    if (strcmp(username, "username") == 0 && strcmp(password, "password") == 0)
    {
        printf("\nLogin Successful....\n\n");
        printf("\n-----------------------------------------------------------------------------------------------\n\n");
        mainmenu();
    }
    else
    {
        printf("\nWrong username or password....\n\n");
        printf("\n-----------------------------------------------------------------------------------------------\n\n");
        login();
    }
}

int main()
{
    page();
    title();
    login();

    return 0;
}