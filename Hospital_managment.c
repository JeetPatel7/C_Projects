#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct patient
{
    char name[50];
    int age;
    char gender[10];
    char disease[50];
}p;

p patients[100];
int count = 0;


void addPatient()
{
    printf("\nEnter patient name : ");
    scanf(" %[^\n]s",patients[count].name);

    printf("Enter patient age : ");
    scanf("%d",&patients[count].age);

    printf("Enter gender : ");
    scanf("%s",patients[count].gender);

    printf("Enter disease : ");
    scanf(" %[^\n]s",patients[count].disease);

    count++;
    printf("\n Patient added successfully1\n");
}


void viewPatient()
{
    if(count == 0)
    {
        printf("\nNo records found\n");
        return;

    }

    printf("\n------Patient records------\n");

    for(int i=0;i<count;i++)
    {
        printf("\nPatient %d\n",i+1);
        printf("Name:%s\n",patients[i].name);
        printf("Age:%d\n",patients[i].age);
        printf("Gender:%s\n",patients[i].gender);
        printf("disease:%s\n",patients[i].disease);
    }
}

int main()
{
    int choice;

    while(1)
    {
        printf("\n------Hospital managment system------\n");
        printf("1. Add patient record\n");
        printf("2. View patient record\n");
        printf("3. Exit\n");

        printf("Enter your choice : ");
        scanf("%d",&choice);
    

        switch(choice)
        {
        case 1:
        addPatient();
        break;

        case 2:
        viewPatient();
        break;

        case 3:
        exit(0);

        default:
        printf("Invalid choice. Try again\n");
        }

    }
        return 0;
}