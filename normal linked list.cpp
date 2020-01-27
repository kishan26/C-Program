#include<stdio.h>
#include<conio.h>
#include<malloc.h>

struct node
{
int value;
struct node *next;
};

typedef struct node abd;
abd *first,*second,*third,*prev,*head;
int data;


main()
{

first=(abd*)malloc(sizeof(abd));
second=(abd*)malloc(sizeof(abd));
third=(abd*)malloc(sizeof(abd));

first->value=5;
second->value=6;
third->value=7;

first->next=second;
second->next=third;
third->next=first;

prev=third;

printf("%d",first->value);
printf("%d",second->value);
printf("%d",third->value);
}

