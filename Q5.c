#include <stdio.h>
int main() {
    int confidence;
    int type;

    printf("Enter your confidence score: ");
    scanf("%d", &confidence);

    printf("Enter User Type(1=Authorized , 0=UnAuthorized): ");
    scanf("%d", &type);

    if (confidence >= 80)
    {
        if (type == 1)
        {
            printf("Access Granted");
        }
        else
        {
            printf("Access Denied");
        }
    }
    else if (confidence >= 50)
    {
        if (type == 0)
        {
            printf("Access Denied");
        }
        else
        {
            printf("Manual Verification");
        }
    }
    else
    {
        printf("Access Denied");
    }

}