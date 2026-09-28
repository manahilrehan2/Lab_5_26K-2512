#include <stdio.h>
int main() {
    int permission;

    printf("Enter permission value: ");
    scanf("%d", &permission);

    if (permission & 1)
    {
        printf("View permission allowed\n");
    }

    if (permission & 2)
    {
        printf("Training permission allowed\n");
    }

    if (permission & 4)
    {
        printf("Testing permission allowed\n");
    }

    if (permission & 8)
    {
        printf("Deployment permission allowed\n");
    }

    if ((permission & 2) && (permission & 8))
    {
        printf("User has both Training and Deployment permissions\n");
    }



}