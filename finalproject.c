#include <stdio.h>
#include <stdlib.h>

struct QNode;
struct Queue;
struct Queue* createQueue();
struct Queue* HarryPotter;
struct Queue* Inkheart;
struct Queue* ArtemisFowl;
struct Queue* HungerGames;
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

 else return 1;


}
void display()
{
    char books[4][30]={"Harry Potter","Inkheart","Artemis Fowl","Hunger Games","};
    for(int i=0;i<4;i++)
    {
        printf("%d. %s \n",(i+1),(books[i]));
    }

}

void reserve()
{

    int choice;
    int flag=1;
    do
    {


        printf("\n");
        display();
        printf("Choose one of the following books to borrow from\n");
        printf("Press 0 to go back to main menu \n");


    scanf("%d",&choice);
    if(choice==1)
    {
        if(check(HarryPotter)==0)
        {
            printf("Reservation Confirmed\n");
            enQueue(HarryPotter,1);
            flag=0;
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
            printf("Reservation Confirmed\n");
            enQueue(Inkheart,1);
            flag=0;
        }
        else printf("Book engaged\n");
    }
     else if(choice==3)
    {
        if(check(ArtemisFowl)==0)
        {
            printf("Reservation Confirmed\n");
            enQueue(ArtemisFowl,1);
            flag=0;
        }
        else printf("Sorry, someone else has already reserved this book. Choose another book. \n");
    }
     else if(choice==4)
    {
        if(check(HungerGames)==0)
        {
            printf("Reservation Confirmed\n");
            enQueue(HungerGames,1);
            flag=0;
        }
        else printf("Sorry, someone else has already reserved this book. Choose another book. \n");
    }
    else if(choice==0)
    {
        printf("Exiting to main menu \n");
        flag=0;
    }
    else
    {
        printf("Invalid input \n\n");
    }

}while(flag==1);
}
void returnBook()
{
    int flag=1;
    do
    {
        display();
         printf("\n");
        printf("Which book are you returning?\n");
        printf("Press 0 to return to main \n");
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

                printf("Book returned successfully\n");
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

                flag=0;
                deQueue(Inkheart);
                printf("Book returned successfully\n");
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
                flag=0;
                printf("Book returned successfully\n");
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
                flag=0;
                printf("Book returned successfully\n");

                deQueue(HungerGames);
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
    int c;
     HarryPotter = createQueue();
     Inkheart = createQueue();
    ArtemisFowl = createQueue();
    HungerGames = createQueue();
    do
    {
        printf("1. Reserve a book \n");
        printf("2. Return a book \n");
        printf("3. Exit \n");
        scanf("%d",&c);
         printf("\n");
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
