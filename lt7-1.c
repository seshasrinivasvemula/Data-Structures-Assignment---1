#include<stdio.h>
#define MAX_SIZE 100
int main(){
int capacity;
int queue[MAX_SIZE];
int stack[MAX_SIZE];
int top=-1;
if(scanf("%d",&capacity)!=1)return 0;
for(int i=0;i<capacity;i++){
    scanf("%d",&queue[i]);
}
printf("Original Queue :");
for(int i=0;i<capacity;i++){
    printf("%d",queue[i]);
}
printf("\n");
for(int i=0;i<capacity;i++){
   stack[++top]=queue[i];
}
for(int i=0;i<capacity;i++){
    queue[i]=stack[top--];
}
printf("Reversed Queue :");
for(int i=0;i<capacity;i++){
    printf("%d",queue[i]);
}
printf("\n");
return 0;
}