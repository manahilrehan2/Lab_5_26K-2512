#include <stdio.h>
int main() {
    int age;
    int income;
    int creditScore;
    char Loan;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your monthly income: ");
    scanf("%d", &income);

    printf("Enter your Credit score: ");
    scanf("%d", &creditScore);

    printf("\nDo you already have an existing loan? (Y = yes, N = no): \n");
    scanf(" %c", &Loan);

    if(age >= 21){
        if(income >= 100000 && creditScore >= 750 && Loan == 'N'){
            printf("Applicant has High Approval Chance");
        }else if(income >= 75000 && creditScore >= 650 && Loan == 'Y'){
            printf("Applicant needs Manual Review");
        }else if(income >= 50000 && creditScore >= 600){
            printf("Applicant is possibily eligible");
        }else{
            printf("Applicant is Rejected");
        }
    }else{
        printf("Applicant is Rejected");
    }

return 0;
}