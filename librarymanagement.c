#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#define size 20
int stack[size];
int top=0;
char name[20];
void push()
{
	char name[20];
    top=top+1;
    stack[top]=name;
    printf("%s",name);
}
/*struct node
{
    int data;
    struct node *next;
};*/
int main()
{
    int srn,choose,bookno1,bookno2;
    int booklist1,booklist2;

    printf("\t\t\t\t\t\tLIBRARY MANAGEMENT\t\t\t\t\t");
    printf("\n\n");
    printf("enter the details below :\n");
    printf("NAME : \n");
    scanf("%s",name);
    printf("SRN : \n");
    scanf("%d",&srn);
    printf("\n\nselect any one of the below to proceed....(1 or 2)\n\n\n");
    printf("1.RESERVE A BOOK\n");
    printf("2.BORROW A BOOK\n");
    scanf("%d",&choose);
    switch(choose)
    {
        case 1:printf("press 0 to view the list of books:");
               scanf("%d",&booklist1);
               if(booklist1==0)
               {
                   printf("\n\n1.The midnight line In search of lost time \n2.Ulysses \n3.Harry potter \n4.Don Quixote \n5.The great gatsby"
                          "\n6.One hundred years of solitude \n7.Moby Dick \n8.War and peace \n9.Hamlet \n10.Sherlock holmes"
                          "\n11.The odessy \n12.Crime and punishment \n13.Madam Bovary \n14.The divine comedy \n15.The hercules"
                          "\n16.Alice in the wonderland \n17.Wings of fire \n18.To the light house \n19.Catch-22 \n20.Nineteen eighty four \n\n");
                   printf("enter the book number to reserve: ");
                   scanf("%d",&bookno1);
               }
               break;

        case 2:printf("press 9 to view the list of books:");
               scanf("%d",&booklist2);
               if(booklist2==9)
               {

                   printf("\n\n1.The midnight line In search of lost time \n2.Ulysses \n3.Harry potter \n4.Don Quixote \n5.The great gatsby"
                          "\n6.One hundred years of solitude \n7.Moby Dick \n8.War and peace \n9.Hamlet \n10.Sherlock holmes"
                          "\n11.The odessy \n12.Crime and punishment \n13.Madam Bovary \n14.The divine comedy \n15.The hercules"
                          "\n16.Alice in the wonderland \n17.Wings of fire \n18.To the light house \n19.Catch-22 \n20.Nineteen eighty four \n\n");
                   printf("enter the book number to reserve: ");
                   scanf("%d",&bookno2);
               }
               break;
        default:printf("\n\nSORRY!! wrong choice\n\n");
               break;
    }




}
