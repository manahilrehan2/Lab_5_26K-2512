#include <stdio.h>
#include <math.h>
int main() {
    double accuracy, confidence, Score;
    int datasetSize;
    int role, status, permission;

    printf("Enter model accuracy: ");
    scanf("%lf", &accuracy);

    printf("Enter confidence score: ");
    scanf("%lf", &confidence);

    printf("Enter dataset size: ");
    scanf("%d", &datasetSize);

    printf("Enter user role (1=Admin, 2=Developer, 3=Researcher): ");
    scanf("%d", &role);

    printf("Enter model status (1=Ready, 2=Testing, 3=Training): ");
    scanf("%d", &status);

    printf("Enter permission value (1=View, 2=Train, 4=Test, 8=Deploy): ");
    scanf("%d", &permission);


    Score = (accuracy + confidence) / 2;

    printf("\nModel Score: %.2lf\n", Score);

    printf("\nUser Role: ");

    switch (role)
    {
    case 1:
        printf("Admin\n");
        break;

    case 2:
        printf("Developer\n");
        break;

    case 3:
        printf("Researcher\n");
        break;

    default:
        printf("Invalid Role\n");
    }


    printf("Model Status: ");

    switch (status)
    {
    case 1:
        printf("Ready\n");
        break;

    case 2:
        printf("Testing\n");
        break;

    case 3:
        printf("Training\n");
        break;

    default:
        printf("Invalid Status\n");
    }

    if (permission & 8)
    {
        printf("Deployment Permission: Available\n");
    }
    else
    {
        printf("Deployment Permission: Not Available\n");
    }


    if (accuracy >= 80)
    {
        if (confidence >= 75)
        {
            if (datasetSize >= 1000)
            {
                if (status == 1)
                {
                    if (permission & 8)
                    {
                        printf("\nDeployment Ready: YES\n");
                    }
                    else
                    {
                        printf("\nDeployment Ready: NO - No deployment permission\n");
                    }
                }
                else
                {
                    printf("\nDeployment Ready: NO - Model is not ready\n");
                }
            }
            else
            {
                printf("\nDeployment Ready: NO - Dataset is too small\n");
            }
        }
        else
        {
            printf("\nDeployment Ready: NO - Confidence is too low\n");
        }
    }
    else
    {
        printf("\nDeployment Ready: NO - Accuracy is too low\n");
    }


    printf("Model Quality: %s\n",
           Score >= 80 ? "Good" : "Needs Improvement");


    printf("Size of model score variable: %zu bytes\n", sizeof(Score));
}