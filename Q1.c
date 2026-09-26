#include <stdio.h>
int main() {
    float programming;
    float maths;
    float AI;
    float attendancePer;
    float avg;

    printf("Enter marks in programming: ");
    scanf("%f", &programming);

    printf("Enter marks in maths: ");
    scanf("%f", &maths);

    printf("Enter marks in AI: ");
    scanf("%f", &AI);

    printf("Enter student's attendance in percentage: ");
    scanf("%f", &attendancePer);

    if(programming >= 50){
        if(maths >= 50){
            if(AI >= 50){
                if(attendancePer >= 75){
                    printf("Student is Eligible");
                    avg = (programming + maths + AI) / 3;
                    printf("Average = %.2f\n", avg);
                    if(avg >= 80){
                        printf("Performance is Excellent");
                    }else if(avg >= 70){
                        printf("Performance is Very Good");
                    }else if(avg >= 60){
                        printf("Performance is Good");
                    }else if(avg >= 50){
                        printf("Performance is Satisfactory");
                    }else{
                        printf("Performance is Poor");
                    }
                }else{
                    printf("Student is Not Eligible");
                }
            }else{
                printf("Student is Not Eligible");
            }
        }else{
            printf("Student is Not Eligible");
        }

    }else{
        printf("Student is Not Eligible");
    }
return 0;
}
