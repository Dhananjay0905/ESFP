#include <stdio.h>
#include <string.h>

char username[15],password[15];


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
    /*printf("\n***********************************************************************************************");
    printf("\n                                     NARI - Women Safety                                  ");
    printf("\n***********************************************************************************************");*/
}

int mainmenu(){
    printf("-------------------------------------------Main Menu-------------------------------------------");
    printf("\n\n1. About Us\n");
    printf("\n2. Contact Us\n");
    printf("\n3. Features\n");
    printf("\n0. Exit");
    int choice1;
    printf("\n\nEnter your choice: ");
    scanf("%d",&choice1);
    printf("\n-----------------------------------------------------------------------------------------------");
    switch(choice1){
        case 1:
        printf("\n\n----------------------------------------About Us-----------------------------------------------");
        printf("\n\nIn today's world, as we all see the crime which is happening to most women,\n85 of 100 crimes are happening to women. So just like it is important to know self-defense,\nit is also important for women to provide their safety applications. Thereare many problems\nlike we all know that most of the women are working in nightand morning shifts their safety\nis most important, as most of the ladies travelled atlate night. So, it's necessary to remain\nalert and safe. Nowadays, many women carrytheir smartphones and it is a boon for them.\nHence it is necessary to have at least one personal safety application installed.And\nhere we come with a solution namely:  NARI - WOMEN SAFETY APPLICATION.");
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
        printf("\n\n----------------------------------------Features-----------------------------------------------");
        printf("\n\nThis application provides a sense of security to the users using this app.\nIn thisapplication, we have Save Our Soul (SOS) features. This feature enables the victim to\nsend an emergency message along with the current location to their guardians.");
        printf("\n\nThe second feature is about tracking the location of the users for their own safety\npurpose. While tracking the location, we can even send the message to the guardians\nwhether we are reaching the destination or not. We have implemented this feature\nwith the help of the Geofence Library. ");
        printf("\n\nThere is also a fake call feature in it where the user gets a fake call\nscreen on his/her smartphone and can escape any situation by making a false excuse.");
        printf("\n\nThe Safe/Unsafe feature is used to see the nearby locations and check whether\nthey are safe or unsafe for that time. Here, we are planning to make this feature more efficient\nby also taking the data of severalcrimes occurring in a particular area and then defining\nit as safe or unsafe for thattime. It will be in our future versions of the application.");
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

    if(strcmp(username, "username") == 0 && strcmp(password, "password") == 0)
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