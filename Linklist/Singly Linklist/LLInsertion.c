#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *newnode = NULL;
struct node *temp = NULL;

void create(int n)
{
    int i, data;
    head = (struct node *)malloc(sizeof(struct node));
    if (head != NULL)
    {
        printf("Enter the data of node 1: ");
        scanf("%d", &data);
        head->data = data;
        head->next = NULL;
        temp = head;
        for (i = 2; i <= n; i++)
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            if (newnode != NULL){
                printf("Enter the data of node %d: ", i);
                scanf("%d", &data);
                newnode->data = data;
                newnode->next = NULL;
                temp->next = newnode;
                temp = temp->next;
            }else{
                printf("Unable to allocate memory.\n");
                break;
            }
        }
    }
    else{
        printf("Unable to allocate memory.\n");
    }
}

void display()
{
    if (head == NULL){
        printf("List is empty.\n");
    }else{
        temp = head;
        while (temp != NULL){
            printf("Data: = %d\n", temp->data);
            temp = temp->next;
        }
    }
}

struct node *insertAtBeginning(int data)
{
    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode != NULL){
        newnode->data = data;
        newnode->next = head;
        head = newnode;
        printf("SUCCESSFULLY INSERTED NODE AT BEGINNING\n");
    }else{
        printf("Unable to allocate memory.\n");
    }
    return head;
}

struct node *insertAtEnd(int data)
{
    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode != NULL){
        newnode->data = data;
        newnode->next = NULL;
        temp = head;
        while (temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newnode;
        printf("SUCCESSFULLY INSERTED NODE AT END\n");
    }else{
        printf("Unable to allocate memory.\n");
    }
    return head;
}

struct node *insertAtMiddle(int data, int position)
{
    int i;
    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode != NULL){
        newnode->data = data;
        newnode->next = NULL;
        temp = head;
        for (i = 2; i <= position - 1; i++){
            temp = temp->next;
            if (temp == NULL){
                break;
            }
        }
        if (temp != NULL){
            newnode->next = temp->next;
            temp->next = newnode;
            printf("SUCCESSFULLY INSERTED NODE AT MIDDLE\n");
        }else{
            printf("Invalid position.");
        }
    }else{
        printf("Unable to allocate memory.\n");
    }
    return head;
}

int main()
{
    int n, data, choice = 1;
    printf("Enter the total number of nodes: ");
    scanf("%d", &n);
    create(n);
    printf("DATA IN THE LIST BEFORE INSERTION\n ");
    display();
    while (choice != 0){
        printf("Enter 1 to insert a node at beginning\n "); 
        printf("Enter 2 to insert a node at end\n ");
        printf("Enter 3 to insert a node at middle\n ");
        printf("Enter 0 to exit\n ");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        if (choice == 1){
            printf("Enter data to be inserted: ");
            scanf("%d", &data);
            head = insertAtBeginning(data);
            printf("DATA IN THE LIST AFTER INSERTION\n ");
            display();
        }else if (choice == 2){
            printf("Enter data to be inserted: ");
            scanf("%d", &data);
            head = insertAtEnd(data);
            printf("DATA IN THE LIST AFTER INSERTION\n ");
            display();
        }else if (choice == 3){
            int pos;
            printf("Enter data to be inserted: ");
            scanf("%d", &data);
            printf("Enter the position to insert new node: ");
            scanf("%d", &pos);
            head = insertAtMiddle(data, pos);
            printf("DATA IN THE LIST AFTER INSERTION\n ");
            display();
        }else if (choice == 0){
            break;
        }else{
            printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}



