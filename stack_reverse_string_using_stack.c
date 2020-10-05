#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Stack{
    int top;
    int capacity;
    char *str;
};
struct Stack *create_stack(int cap){
    struct Stack *s = (struct Stack *)malloc(sizeof(struct Stack));
    s->top = -1;
    s->capacity = cap;
    s->str = (char *)malloc(s->capacity*sizeof(char));
    return s;
}
void push(struct Stack *s,char ch){
    s->str[++s->top] = ch;
}
char pop(struct Stack *s){
    return s->str[s->top--];
}
void reverse(char *s){
    int len = strlen(s);
    struct Stack *stack = create_stack(len);
    for(int i=0; i<len; i++)
        push(stack,s[i]);
    for(int j=0; j<len; j++)
        s[j]=pop(stack);
}
int main()
{
    char str[100];
    printf("Enter string : ");
    // scanf("%s",str);
    gets(str);
    reverse(str);
    printf("Reversed string is : %s",str);
    // puts(str);
}
