#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>


struct
{
    int id;
    char name[50];
    int roll_no;
    int  class_no;
    char contact[15];
    char father_name[50];
    char mother_name[50];
    char blood_group[7];

}student;

int main()
{
    int x, choice, shift, IDnum, shift1, found, IDmod, IDdel;
    char search_name[50], contact_no[11];
    FILE *fp;
    FILE *fp2;

    level1:
        system("cls");
        printf("\t\t------------------------\n");
        printf("\t\t||  Student Database  ||\n");
        printf("\t\t|| Made by Tech Squad ||\n");
        printf("\t\t------------------------\n\n");
        printf("\n1. Add student information\n");
        printf("2. Search\n");
        printf("3. List\n");
        printf("4. Exit\n\n");
        printf("Enter your choice :  ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
            level2:
                system("cls");
                printf("\t\t  Student Database\n");
                printf("\t\t Made by Tech Squad\n");
                printf("\t\t--------------------\n\n");
                printf("\n\nEnter student information\n");
                printf("Enter ID : ");
                scanf("%d", &student.id);
                printf("Enter Name : ");
                scanf("%s",&student.name);
                printf("Enter Class : ");
                scanf("%d",&student.class_no);
                printf("Enter Roll : ");
                scanf("%d",&student.roll_no);
                printf("Enter father's name : ");
                scanf("%s", student.father_name);
                printf("Enter mother's name : ");
                scanf("%s", student.mother_name);
                printf("Enter Contact no : ");
                scanf("%s", student.contact);
                printf("Enter blood group : ");
                scanf("%s", student.blood_group);



                fp = fopen("students.DAT", "a+");

                fprintf(fp, "\n%d\t %s\t %d\t %d\t %s\t %s\t %s\t %s\t", student.id, student.name, student.class_no, student.roll_no, student.father_name, student.mother_name, student.contact, student.blood_group);
                fclose(fp);
                printf("Adding complete\n");

                printf("\n\n____________________________________________________");
                printf("\n\n1. Wish to add another record ?\n");
                printf("2. Go to main menu\n");
                printf("3. Close the application\n");
                scanf("%d", &shift);

                if( shift==1 )
                    goto level2;
                if ( shift==2 )
                    goto level1;
                if ( shift== 3)
                    goto level5;
                else
                    goto level1;


        case 2:
            level3:
                system("cls");
                printf("\t\t  Student Database\n");
                printf("\t\t Made by Tech Squad\n");
                printf("\t\t--------------------\n\n");
                printf("\n\n1. Search by ID.\n");
                printf("2. Search by name.\n");
                printf("3. Search by contact.\n");
                printf("Enter your choice :  ");
                scanf("%d", &shift1);

                switch(shift1)
                {
                    case 1:
                    system("cls");
                    found=0;
                    printf("\t\t  Student Database\n");
                    printf("\t\t Made by Tech Squad\n");
                    printf("\t\t--------------------\n\n");
                    printf("\nEnter ID number : ");
                    scanf("%d", &IDnum);
                    if ((fp=fopen("students.DAT", "r"))==NULL)
                    {
                        printf("\n!Then file is Empty");
                    }
                    else
                    {
                        while( !feof(fp))
                        {
                            fscanf(fp, "\n%d\t %s\t %d\t %d\t %s\t %s\t %s\t %s\t", &student.id, &student.name, &student.class_no, &student.roll_no, &student.father_name, &student.mother_name ,&student.contact, &student.blood_group);
                            if(student.id == IDnum)
                            {
                                printf("Record Found\n");
                               printf("\nStudent Id : %d\nStudent Name : %s\nClass : %d\nRoll : %d\nFather's name : %s\nMother's name : %s\nContact Number : %s\nBlood group : %s", student.id, student.name, student.class_no, student.roll_no, student.father_name, student.mother_name, student.contact, student.blood_group);
                                found=1;
                            }
                        }
                        if( found==0 )
                                {
                                    printf("\nRecord not found\n!!!");
                                }
                    }

                printf("\n\n____________________________________________________");
                printf("\n\n1. Wish to search another record ?\n");
                printf("2. Go to main menu\n");
                printf("3. Close the application\n");
                printf("Enter your choice :  ");
                scanf("%d", &shift);

                if( shift==1 )
                    goto level3;
                if ( shift==2 )
                    goto level1;
                if ( shift== 3)
                    goto level5;
                else
                    goto level1;



                    case 2:
                    system("cls");
                    found=0;
                    printf("\t\t  Student Database\n");
                    printf("\t\t Made by Tech Squad\n");
                    printf("\t\t--------------------\n\n");
                    printf("\nEnter student  name : ");
                    scanf("%s",  search_name);
                    if ((fp=fopen("students.DAT", "r"))==NULL)
                    {
                        printf("\n!Then file is Empty");
                    }
                    else
                    {
                        while( !feof(fp))
                        {
                            fscanf(fp, "\n%d\t %s\t %d\t %d\t %s\t %s\t %s\t %s\t", &student.id, &student.name, &student.class_no, &student.roll_no, &student.father_name, &student.mother_name ,&student.contact, &student.blood_group);
                            if( strcmp(student.name,search_name)==0)
                            {
                                printf("Record Found\n");
                                printf("\nStudent Id : %d\nStudent Name : %s\nClass : %d\nRoll : %d\nFather's name : %s\nMother's name : %s\nContact Number : %s\nBlood group : %s", student.id, student.name, student.class_no, student.roll_no, student.father_name, student.mother_name, student.contact, student.blood_group);
                                found=1;
                            }
                        }
                            if( found==0 )
                                {
                                    printf("\nRecord not found\n!!!");
                                }
                    }

                printf("\n\n____________________________________________________");
                printf("\n\n1. Wish to search another record ?\n");
                printf("2. Go to main menu\n");
                printf("3. Close the application\n");
                printf("Enter your choice :  ");
                scanf("%d", &shift);

                if( shift==1 )
                    goto level3;
                if ( shift==2 )
                    goto level1;
                if ( shift== 3)
                    goto level5;
                else
                    goto level1;


                    case 3:
                    system("cls");
                    found=0;
                    printf("\t\t  Student Database\n");
                    printf("\t\t Made by Tech Squad\n");
                    printf("\t\t--------------------\n\n");
                    printf("\nEnter contact no : ");
                    scanf("%s",  contact_no);
                    if ((fp=fopen("students.DAT", "r"))==NULL)
                    {
                        printf("\n!Then file is Empty");
                    }
                    else
                    {
                        while( !feof(fp))
                        {
                            fscanf(fp, "\n%d\t %s\t %d\t %d\t %s\t %s\t %s\t %s\t", &student.id, &student.name, &student.class_no, &student.roll_no, &student.father_name, &student.mother_name ,&student.contact, &student.blood_group);
                            if( strcmp(student.contact,contact_no)==0)
                            {
                                printf("Record Found\n");
                                printf("\nStudent Id : %d\nStudent Name : %s\nClass : %d\nRoll : %d\nFather's name : %s\nMother's name : %s\nContact Number : %s\nBlood group : %s", student.id, student.name, student.class_no, student.roll_no, student.father_name, student.mother_name, student.contact, student.blood_group);
                                found=1;
                            }
                        }
                        if( found==0 )
                                {
                                    printf("\nRecord not found\n!!!");
                                }
                    }
                printf("\n\n____________________________________________________");
                printf("\n\n1. Wish to search another record ?\n");
                printf("2. Go to main menu\n");
                printf("3. Close the application\n");
                printf("Enter your choice :  ");
                scanf("%d", &shift);

                if( shift==1 )
                    goto level3;
                if ( shift==2 )
                    goto level1;
                if ( shift== 3)
                    goto level5;
                else
                    goto level1;

                }





        case 3:
            level4:
                system("cls");
                printf("\t\t  Student Database\n");
                printf("\t\t Made by Tech Squad\n");
                printf("\t\t--------------------\n\n");
                fp = fopen("students.DAT", "r");
                while(!feof(fp))
                {

                    fscanf(fp, "\n%d\t %s\t %d\t %d\t %s\t %s\t %s\t %s\t", &student.id, &student.name, &student.class_no, &student.roll_no, &student.father_name, &student.mother_name, &student.contact, &student.blood_group);
                    printf("\n\n#\nStudent Id : %d\nStudent Name : %s\nClass : %d\nRoll : %d\nFather's name : %s\nMother's name : %s\nContact Number : %s\nBlood group : %s", student.id, student.name, student.class_no, student.roll_no, student.father_name, student.mother_name, student.contact, student.blood_group);

                }
                printf("\n____________________________________________________");
                printf("\n\n1. Goto main menu\n");
                printf("2. Exit!\n");
                scanf("%d", &shift1);
                 if( shift1==1 )
                    goto level1;
                if ( shift1==2 )
                    goto level5;
                else
                    goto level1;



        case 4:
                level5:
                    break;
        default:
            goto level1;

        }

    getch();
    return 0;
}
