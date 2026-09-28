#include <stdio.h>
int main() {
    int problem;
    int algo;

    printf("Select a problem type (1=Classification, 2=Regression, 3=Clustering, 4=Computer Vision,): ");
    scanf("%d", &problem);

    switch (problem)
    {
    case 1:
        printf("Select an appropriate algorithm (1=Logistic Regression, 2=Decision Tree, 3=KNN): ");
        scanf("%d", &algo);

        switch (algo)
        {
        case 1:
            printf("Logistic Regression Selected");
            break;
        
        case 2:
            printf("Decision Tree Selected");
            break;
        
        case 3:
            printf("KNN Selected");
            break;
        }
        break;
    
    case 2:
        printf("Select an appropriate algorithm (1=Linear Regression, 2=Polynomial Regression, 3=SVR): ");
        scanf("%d", &algo);

        switch (algo)
        {
        case 1:
            printf("Linear Regression Selected");
            break;
        
        case 2:
            printf("Polynomial Regression Selected");
            break;
        
        case 3:
            printf("SVR Selected");
            break;
        }
        break;
    
    case 3:
        printf("Select an appropriate algorithm (1=K-Means, 2=Hierarchical Clustering, 3=DBSCAN): ");
        scanf("%d", &algo);

        switch (algo)
        {
        case 1:
            printf("K-Means Selected");
            break;
        
        case 2:
            printf("Hierarchical Clustering Selected");
            break;
        
        case 3:
            printf("DBSCAN Selected");
            break;
        }
        break;

    case 4:
        printf("Select an appropriate algorithm (1=CNN, 2=YOLO, 3=R-CNN): ");
        scanf("%d", &algo);

        switch (algo)
        {
        case 1:
            printf("CNN Selected");
            break;
        
        case 2:
            printf("YOLO Selected");
            break;
        
        case 3:
            printf("R-CNN Selected");
            break;
        }
        break;
    }
    
}