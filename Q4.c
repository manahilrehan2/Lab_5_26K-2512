#include <stdio.h>
int main() {
    int convocategory;
    int choices;

    printf("Enter conversation category (1=Greeting, 2=Study, 3=Weather, 4=Help): ");
    scanf("%d", &convocategory);

    switch (convocategory)
    {
    case 1:
        printf("Enter response choices (1=Hello, 2=How are you, 3=Goodbye): ");
        scanf("%d", &choices);

        switch (choices)
        {
        case 1:
            printf("Hello, Manahil!");
            break;
        
        case 2:
            printf("How are you?");
            break;
        
        case 3:
            printf("Goodbye, see you soon!");
            break;
        }
        break;
    
    case 2:
        printf("Enter response choices (1=Programming, 2=Mathematics, 3=AI): ");
        scanf("%d", &choices);

        switch (choices)
        {
        case 1:
            printf("Want to write a program code?");
            break;
        
        case 2:
            printf("Lets solve some maths problems together!");
            break;
        
        case 3:
            printf("Want to learn more about AI?");
            break;
        }
        break;
    
    case 3:
        printf("Enter response choices (1=Today, 2=Tomorrow, 3=Forecast): ");
        scanf("%d", &choices);

        switch (choices)
        {
        case 1:
            printf("Today's weather information selected.");
            break;
        
        case 2:
            printf("Tomorrow's weather information selected.");
            break;
        
        case 3:
            printf("Weather forecast selected.");
            break;
        }
        break;

    case 4:
        printf("Enter subcategory (1=About Chatbot, 2=Commands, 3=Exit): ");
        scanf("%d", &choices);

        switch (choices)
        {
        case 1:
            printf("Hi, I am your personal AI chatbot.");
            break;
        
        case 2:
            printf("You can ask me to help you write your assignment.");
            break;
        
        case 3:
            printf("Exiting chatbot, Goodbye.");
            break;
        }
        break;
    }
    
}