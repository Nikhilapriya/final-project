#include<stdio.h> 
#include<stdlib.h> 
#include<string.h>

struct Node 
{ 
   char data; 
   struct Node *next; 
}; 
  
  
void push(struct Node** top_ref, int new_data); 
  

int pop(struct Node** top_ref); 


int match(char ch1, char ch2) 
{ 
    if (ch1 == '(' && ch2 == ')') 
     return 1; 
    else
     return 0; 
} 
 
int isBalanced(char stmt[])
{ 
   int i = 0; 
  
   
   struct Node *stack = NULL; 
 
   while (stmt[i])
   { 
      
      if(stmt[i]=='(')
        push(&stack, stmt[i]);
        
      if (stmt[i] == ')' ) 
      { 
         if (stack == NULL) 
           return 0;
          else if ( match(pop(&stack), stmt[i])==0 ) 
           return 0; 
      } 
      i++; 
   } 
     
   if (stack == NULL) 
     return 1; 
   else
     return 0;  
}  
  

int main() 
{ 
    char stmt[100]; 
    int flag;
    int input;
    do
    {
        flag=1;
        input=1;
        printf("Enter an expression containing only parenthesis \n");
        printf("Enter to '#' to exit \n");
        scanf("%s",stmt);
        if(stmt[0]=='#')
        {
            flag=0;
            break;
        }
        int i=0;
        for(i=0; i<strlen(stmt);i++)
        {
            if(stmt[i]=='(' || stmt[i]==')')
                continue;
            else
            {       input=0;
                    printf("Invalid input. Please enter parenthesis only. \n \n");
                    break;
            }

        }
        if(flag==1 && input==1)
        { 
            
            if(isBalanced(stmt)==1)
                printf("Balanced \n\n");
            else
                printf("Not balanced \n\n");
        }
    }
    while(flag!=0);
}
  

void push(struct Node** top_ref, int new_data) 
{ 
  struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 
  
  if (new_node == NULL) 
  { 
     printf("Stack overflow \n"); 
     getchar(); 
     exit(0); 
  }            
  
  new_node->data  = new_data; 
  new_node->next = (*top_ref);  
  (*top_ref)    = new_node; 
} 
  

int pop(struct Node** top_ref) 
{ 
  char res; 
  struct Node *top; 
 
  if (*top_ref == NULL) 
  { 
     printf("Stack overflow \n"); 
     getchar(); 
     exit(0); 
  } 
  else
  { 
     top = *top_ref; 
     res = top->data; 
     *top_ref = top->next; 
     free(top); 
     return res; 
  } 
} 