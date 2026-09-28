#include <stdio.h>
int main() {
    int category;
    int subcategory;

    printf("Enter category (1=Animal, 2=Vehicle, 3=Food, 4=Human): ");
    scanf("%d", &category);

    switch (category)
    {
    case 1:
        printf("Enter subcategory (1=Cat, 2=Dog, 3=Bird): ");
        scanf("%d", &subcategory);

        switch (subcategory)
        {
        case 1:
            printf("Cat Selected");
            break;
        
        case 2:
            printf("Dog Selected");
            break;
        
        case 3:
            printf("Bird Selected");
            break;
        }
        break;
    
    case 2:
        printf("Enter subcategory (1=Car, 2=Bus, 3=Bike): ");
        scanf("%d", &subcategory);

        switch (subcategory)
        {
        case 1:
            printf("Car Selected");
            break;
        
        case 2:
            printf("Bus Selected");
            break;
        
        case 3:
            printf("Bike Selected");
            break;
        }
        break;
    
    case 3:
        printf("Enter subcategory (1=Pizza, 2=Burger, 3=Biryani): ");
        scanf("%d", &subcategory);

        switch (subcategory)
        {
        case 1:
            printf("Pizza Selected");
            break;
        
        case 2:
            printf("Burger Selected");
            break;
        
        case 3:
            printf("Biryani Selected");
            break;
        }
        break;

    case 4:
        printf("Enter subcategory (1=Male, 2=Female, 3=Child): ");
        scanf("%d", &subcategory);

        switch (subcategory)
        {
        case 1:
            printf("Male Selected");
            break;
        
        case 2:
            printf("Female Selected");
            break;
        
        case 3:
            printf("Child Selected");
            break;
        }
        break;
    }
    
}