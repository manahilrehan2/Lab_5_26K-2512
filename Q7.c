#include <stdio.h>
int main() {
    int confidence;
    int threshold;

    printf("Enter confidence score: ");
    scanf("%d", &confidence);

    printf("Enter required confidence threshold: ");
    scanf("%d", &threshold);

    if (confidence >= 90)
    {
        printf("Very High Confidence\n");
    }
    else if (confidence >= 75)
    {
        printf("High Confidence\n");
    }
    else if (confidence >= 50)
    {
        printf("Moderate Confidence\n");
    }
    else
    {
        printf("Low Confidence\n");
    }

    if (confidence >= threshold && confidence >= 50)
    {
        printf("Accepted");
    }
    else
    {
        printf("Rejected");
    }

}