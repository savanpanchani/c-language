#include <stdio.h>

int main()
{
    int score;
    char grade;

    printf("Enter Your Score (out of 100): ");
    scanf("%d", &score);

    grade = (score >= 90) ? 'A' :
            (score >= 80) ? 'B' :
            (score >= 70) ? 'C' :
            (score >= 60) ? 'D' : 'F';
                        

    printf("Your grade is %c.", grade);

    switch(grade) {
        case 'A':
            printf(" Excellent Work!\n");
            break;
        case 'B':
            printf(" Well Done!\n");
            break;
        case 'C':
            printf(" Good Job!\n");
            break;
        case 'D':
            printf(" You Pssed, but you do better.\n");
            break;
        case 'F':
            printf(" Sorry, You Failed.\n");
            break;
        default:
            printf(" Invalid Grade.\n");
    }

    if (grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D') {
        printf("Congratulations! You Are Eligible For The Next Year.\n");
    } else {
        printf("Please Try Again Next Time.\n");
    }

}