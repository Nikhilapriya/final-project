#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#define size 20
int stack[size];
int top=0;
char name[50];
int srn;

struct QNode;
struct Queue;
struct Queue* createQueue();
struct Queue* HarryPotter;
struct Queue* Inkheart;
struct Queue* ArtemisFowl;
struct Queue* HungerGames;
struct Queue* Ulysses;
struct Queue* DonQuixote;
struct Queue* TheAlchemist;
struct Queue* MobyDick;
struct Queue* WarAndPeace;
struct Queue* Hamlet;
struct Queue* SherlockHolmes;
struct Queue* TheOdessy;
struct Queue* CrimeAndPunishment;
struct Queue* MadamBovary;
struct Queue* TheHercules;
struct Queue* AliceInTheWonderland;
struct Queue* WingsOfFire;
struct Queue* SmallFry;
struct Queue* Catch22;
struct Queue* NineteenEightyFour;

struct QNode {
    int key;
    struct QNode* next;
};


struct Queue {
    struct QNode *front, *rear;
};


struct QNode* newNode(int k)
{
    struct QNode* temp = (struct QNode*)malloc(sizeof(struct QNode));
    temp->key = k;
    temp->next = NULL;
    return temp;
}


struct Queue* createQueue()
{
    struct Queue* q = (struct Queue*)malloc(sizeof(struct Queue));
    q->front = q->rear = NULL;
    return q;
}


void enQueue(struct Queue* q, int k)
{

    struct QNode* temp = newNode(k);

    if (q->rear == NULL) {
        q->front = q->rear = temp;
        return;
    }


    q->rear->next = temp;
    q->rear = temp;
}

void deQueue(struct Queue* q)
{

    if (q->front == NULL)
       {
        return;
       }
 else{

    struct QNode* temp = q->front;

    q->front = q->front->next;

    if (q->front == NULL)
        q->rear = NULL;

    free(temp);

}
}


int check(struct Queue* q)
{
    if (q->front == NULL)
        return 0;
    else
        return 1;
}
void display()
{
    char books[20][20]={"Harry Potter","Inkheart","Artemis Fowl","Hunger Games","Ulysses",
                    "Don Quixote","The Alchemist","Moby Dick","War And Peace","Hamlet",
                    "Sherlock Holmes","The Odessy","Crime And Punishment","Madam Bovary ","The Hercules",
                    "Alice In The Wonderland","Wings Of Fire","Small Fry","Catch-22","Nineteen Eighty Four"};
    for(int i=0;i<20;i++)
    {
        printf("%d. %s \n",(i+1),(books[i]));
    }
}
void details()
{
    int counter=0;
    printf("\n\n");
    printf("Name: ");
    while(name[counter]!=NULL)
    {
        printf("%c",name[counter++]);
    }
    printf("\n");
    printf("SRN: %d\n",srn);
}
void reserve()
{
    int choice;
    int flag=1;
    do
    {
        printf("\n");
        display();
        printf("\nChoose one of the following books to borrow from\n");
        printf("\nPress 0 to go back to main menu \n");
    scanf("%d",&choice);
    if(choice==1)
    {
        if(check(HarryPotter)==0)
        {
            details();
            printf("Reservation Confirmed  :) :) :)\n");
            enQueue(HarryPotter,srn);
            flag=0;
            printf("");
        }
        else
        {
            printf("Sorry, someone else has already reserved this book. Choose another book. \n");
        }
    }
     else if(choice==2)
    {
        if(check(Inkheart)==0)
        {
            details();
            printf("Reservation Confirmed :) :) :)\n");
            enQueue(Inkheart,srn);
            flag=0;
        }
        else printf("Book engaged @_@ @_@ @_@\n");
    }
     else if(choice==3)
    {
        if(check(ArtemisFowl)==0)
        {
            details();
            printf("Reservation Confirmed :) :) :)\n");
            enQueue(ArtemisFowl,srn);
            flag=0;
        }
        else printf("Sorry, someone else has already reserved this book. Choose another book. \n\n");
    }
     else if(choice==4)
    {
        if(check(HungerGames)==0)
        {
            details();
            printf("Reservation Confirmed :) :) :)\n");
            enQueue(HungerGames,srn);
            flag=0;
        }
        else printf("Sorry, someone else has already reserved this book. Choose another book. \n\n");
    }
     else if(choice==5)
    {
        if(check(Ulysses)==0)
        {
            details();
            printf("Reservation Confirmed :) :) :)\n");
            enQueue(Ulysses,srn);
            flag=0;
        }
        else printf("Book engaged @_@ @_@ @_@\n");
    }
     else if(choice==6)
    {
        if(check(DonQuixote)==0)
        {
            details();
            printf("Reservation Confirmed :) :) :)\n");
            enQueue(DonQuixote,srn);
            flag=0;
        }
        else printf("Book engaged @_@ @_@ @_@\n");
    }
     else if(choice==7)
    {
        if(check(TheAlchemist)==0)
        {   details();
            printf("Reservation Confirmed :) :) :)\n");
            enQueue(TheAlchemist,srn);
            flag=0;
        }
        else printf("Book engaged @_@ @_@ @_@\n");
    }
    else if(choice==8)
    {
        if(check(MobyDick)==0)
        {
            details();
            printf("Reservation Confirmed :) :) :)\n");
            enQueue(MobyDick,srn);
            flag=0;
        }
        else printf("Book engaged @_@ @_@ @_@\n");
    }
    else if(choice==9)
    {
        details();
        if(check(WarAndPeace)==0)
        {
            printf("Reservation Confirmed :) :) :)\n");
            enQueue(WarAndPeace,srn);
            flag=0;
        }
        else printf("Book engaged @_@ @_@ @_@\n");
    } else if(choice==10)
    {
        if(check(Hamlet)==0)
        {
            details();
            printf("Reservation Confirmed :) :) :)\n");
            enQueue(Hamlet,srn);
            flag=0;
        }
        else printf("Book engaged @_@ @_@ @_@\n");
    }
     else if(choice==11)
    {
        if(check(SherlockHolmes)==0)
        {
            details();
            printf("Reservation Confirmed :) :) :)\n");
            enQueue(SherlockHolmes,srn);
            flag=0;
        }
        else printf("Book engaged @_@ @_@ @_@\n");
    }
     else if(choice==12)
    {
        if(check(TheOdessy)==0)
        {
            details();
            printf("Reservation Confirmed :) :) :)\n");
            enQueue(TheOdessy,srn);
            flag=0;
        }
        else printf("Book engaged @_@ @_@ @_@\n");
    }
     else if(choice==13)
    {
        if(check(CrimeAndPunishment)==0)
        {
            details();
            printf("Reservation Confirmed :) :) :)\n");
            enQueue(CrimeAndPunishment,srn);
            flag=0;
        }
        else printf("Book engaged @_@ @_@ @_@\n");
    }
     else if(choice==14)
    {
        if(check(MadamBovary)==0)
        {
            details();
            printf("Reservation Confirmed :) :) :)\n");
            enQueue(MadamBovary,srn);
            flag=0;
        }
        else printf("Book engaged @_@ @_@ @_@\n");
    }
    else if(choice==15)
    {
        details();
        if(check(TheHercules)==0)
        {
            printf("Reservation Confirmed :) :) :)\n");
            enQueue(TheHercules,srn);
            flag=0;
        }
        else printf("Book engaged @_@ @_@ @_@\n");
    }
    else if(choice==16)
    {
        if(check(AliceInTheWonderland)==0)
        {
            details();
            printf("Reservation Confirmed :) :) :)\n");
            enQueue(AliceInTheWonderland,srn);
            flag=0;
        }
        else printf("Book engaged @_@ @_@ @_@\n");
    }
    else if(choice==17)
    {
        details();
        if(check(WingsOfFire)==0)
        {
            printf("Reservation Confirmed :) :) :)\n");
            enQueue(WingsOfFire,srn);
            flag=0;
        }
        else printf("Book engaged @_@ @_@ @_@\n");
    }
     else if(choice==18)
    {
        if(check(SmallFry)==0)
        {
            details();
            printf("Reservation Confirmed :) :) :)\n");
            enQueue(SmallFry,srn);
            flag=0;
        }
        else printf("Book engaged @_@ @_@ @_@\n");
    }
    else if(choice==19)
    {
        if(check(Catch22)==0)
        {
            details();
            printf("Reservation Confirmed :) :) :)\n");
            enQueue(Catch22,srn);
            flag=0;
        }
        else printf("Book engaged @_@ @_@ @_@\n");
    }
    else if(choice==20)
    {
        details();
        if(check(NineteenEightyFour)==0)
        {
            printf("Reservation Confirmed :) :) :)\n");
            enQueue(NineteenEightyFour,srn);
            flag=0;
        }
        else printf("Book engaged @_@ @_@ @_@\n");
    }

    else if(choice==0)
    {
        printf("Exiting to main menu \n");
        flag=0;
    }
    else
    {
        printf("xxxxx Invalid input xxxxx \n\n");
    }
}while(flag==1);
}
void returnBook()
{
    int flag=1,choice;
    do
    {
        display();
        printf("\n");
        printf("Which book are you returning?\n\n");
        printf("Press 0 to return to main \n\n");
        int choice;
        scanf("%d",&choice);
        if(choice==1)
        {
            if(check(HarryPotter)==0)
            {
                printf("You have not borrowed this book. Please enter the right choice.\n");
            }
            else
            {
                details();
                printf("Book returned successfully^_^ ^_^ ^_^\n");
                deQueue(HarryPotter);
                flag=0;
            }
        }
      else if(choice==2)
        {
            if(check(Inkheart)==0)
            {
                printf("You have not borrowed this book. Please enter the right choice.\n");
            }
            else
            {
                details();
                flag=0;
                deQueue(Inkheart);
                printf("Book returned successfully^_^ ^_^ ^_^\n");
            }
        }
        else if(choice==3)
        {
            if(check(ArtemisFowl)==0)
            {
                printf("You have not borrowed this book. Please enter the right choice.\n");
            }
            else
            {
                details();
                flag=0;
                printf("Book returned successfully^_^ ^_^ ^_^\n");
                deQueue(ArtemisFowl);
            }
        }
        else if(choice==4)
        {
            if(check(HungerGames)==0)
            {
                printf("You have not borrowed this book. Please enter the right choice.\n");
            }
            else
            {
                details();
                flag=0;
                printf("Book returned successfully^_^ ^_^ ^_^\n");
                deQueue(HungerGames);
            }
        }

        else if(choice==5)
        {
            if(check(Ulysses)==0)
            {
                printf("You have not borrowed this book. Please enter the right choice.\n");
            }
            else
            {
                details();
                flag=0;
                deQueue(Ulysses);
                printf("Book returned successfully^_^ ^_^ ^_^\n");
            }
        }else if(choice==6)
        {
            if(check(DonQuixote)==0)
            {
                printf("You have not borrowed this book. Please enter the right choice.\n");
            }
            else
            {
                details();
                flag=0;
                deQueue(DonQuixote);
                printf("Book returned successfully^_^ ^_^ ^_^\n");
            }
        }else if(choice==7)
        {
            if(check(TheAlchemist)==0)
            {
                printf("You have not borrowed this book. Please enter the right choice.\n");
            }
            else
            {
                details();
                flag=0;
                deQueue(TheAlchemist);
                printf("Book returned successfully^_^ ^_^ ^_^\n");
            }
        }else if(choice==8)
        {
            if(check(MobyDick)==0)
            {
                printf("You have not borrowed this book. Please enter the right choice.\n");
            }
            else
            {
                details();
                flag=0;
                deQueue(MobyDick);
                printf("Book returned successfully^_^ ^_^ ^_^\n");
            }
        }else if(choice==9)
        {
            if(check(WarAndPeace)==0)
            {
                printf("You have not borrowed this book. Please enter the right choice.\n");
            }
            else
            {
                details();
                flag=0;
                deQueue(WarAndPeace);
                printf("Book returned successfully^_^ ^_^ ^_^\n");
            }
        }else if(choice==10)
        {
            if(check(Hamlet)==0)
            {
                printf("You have not borrowed this book. Please enter the right choice.\n");
            }
            else
            {
                details();
                flag=0;
                deQueue(Hamlet);
                printf("Book returned successfully^_^ ^_^ ^_^\n");
            }
        }else if(choice==11)
        {
            if(check(SherlockHolmes)==0)
            {
                printf("You have not borrowed this book. Please enter the right choice.\n");
            }
            else
            {
                details();
                flag=0;
                deQueue(SherlockHolmes);
                printf("Book returned successfully^_^ ^_^ ^_^\n");
            }
        }else if(choice==12)
        {
            if(check(TheOdessy)==0)
            {
                printf("You have not borrowed this book. Please enter the right choice.\n");
            }
            else
            {
                flag=0;
                details();
                deQueue(TheOdessy);
                printf("Book returned successfully^_^ ^_^ ^_^\n");
            }
        }else if(choice==13)
        {
            if(check(CrimeAndPunishment)==0)
            {
                printf("You have not borrowed this book. Please enter the right choice.\n");
            }
            else
            {
                details();
                flag=0;
                deQueue(CrimeAndPunishment);
                printf("Book returned successfully^_^ ^_^ ^_^\n");
            }
        }else if(choice==14)
        {
            if(check(MadamBovary)==0)
            {
                printf("You have not borrowed this book. Please enter the right choice.\n");
            }
            else
            {
                details();
                flag=0;
                deQueue(MadamBovary);
                printf("Book returned successfully^_^ ^_^ ^_^\n");
            }
        }else if(choice==15)
        {
            if(check(TheHercules)==0)
            {
                printf("You have not borrowed this book. Please enter the right choice.\n");
            }
            else
            {
                details();
                flag=0;
                deQueue(TheHercules);
                printf("Book returned successfully^_^ ^_^ ^_^\n");
            }
        }else if(choice==16)
        {
            if(check(AliceInTheWonderland)==0)
            {
                printf("You have not borrowed this book. Please enter the right choice.\n");
            }
            else
            {
                details();
                flag=0;
                deQueue(AliceInTheWonderland);
                printf("Book returned successfully^_^ ^_^ ^_^\n");
            }
        }else if(choice==17)
        {
            if(check(WingsOfFire)==0)
            {
                printf("You have not borrowed this book. Please enter the right choice.\n");
            }
            else
            {
                flag=0;
                details();
                deQueue(WingsOfFire);
                printf("Book returned successfully^_^ ^_^ ^_^\n");
            }
        }else if(choice==18)
        {
            if(check(SmallFry)==0)
            {
                printf("You have not borrowed this book. Please enter the right choice.\n");
            }
            else
            {
                details();
                flag=0;
                deQueue(SmallFry);
                printf("Book returned successfully^_^ ^_^ ^_^\n");
            }
        }else if(choice==19)
        {
            if(check(Catch22)==0)
            {
                printf("You have not borrowed this book. Please enter the right choice.\n");
            }
            else
            {
                details();
                flag=0;
                deQueue(Catch22);
                printf("Book returned successfully^_^ ^_^ ^_^\n");
            }
        }
        else if(choice==20)
        {
            if(check(NineteenEightyFour)==0)
            {
                printf("You have not borrowed this book. Please enter the right choice.\n");
            }
            else
            {
                details();
                flag=0;
                deQueue(NineteenEightyFour);
                printf("Book returned successfully^_^ ^_^ ^_^\n");
            }
        }

        else if(choice==0)
        {
            printf("Returning to main \n\n");
            flag=0;
        }
        else
            printf("Invalid input. Please enter the right choice.\n");
    }
    while(flag==1);
}
int main()
{
    int bookno1,bookno2;
    int booklist1,booklist2;
    int c;
    HarryPotter = createQueue();
    Inkheart = createQueue();
    ArtemisFowl = createQueue();
    HungerGames = createQueue();
    Ulysses = createQueue();
    DonQuixote = createQueue();
    ArtemisFowl = createQueue();
    TheAlchemist= createQueue();
    MobyDick = createQueue();
    WarAndPeace = createQueue();
    Hamlet = createQueue();
    SherlockHolmes = createQueue();
    TheOdessy = createQueue();
    CrimeAndPunishment = createQueue();
    MadamBovary = createQueue();
    TheHercules = createQueue();
    AliceInTheWonderland = createQueue();
    WingsOfFire = createQueue();
    SmallFry = createQueue();
    Catch22 = createQueue();
    NineteenEightyFour = createQueue();


    printf("\n\n\n\t\t\t\t\t\t*****LIBRARY MANAGEMENT*****\t\t\t\t\t");
    printf("\n\n");
    printf("enter the details below :)\n");
    printf("NAME : \n");
    scanf("%s",name);
    printf("SRN : \n");
    scanf("%d",&srn);
    printf("\n\nselect any one of the below to proceed....(1 or 2 or 3)\n");


    do
    {
        printf("\n1. Reserve a book \n");
        printf("2. Return a book \n");
        printf("3. exit \n\n\n");
        scanf("%d",&c);
        printf("\n\n");
        if(c==1)
        {
            reserve();
             printf("\n");
        }
        else if(c==2)
        {
            returnBook();
             printf("\n");
        }
        else if(c==3)
        {
                printf("Exiting program\n");
                 printf("\n");
        }
        else
            printf("Invalid input.\n");
    }
    while(c!=3);
}
