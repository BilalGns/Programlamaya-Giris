#include <stdio.h>

int main(){

    int examGrade[10] = {0};
    int maxGrade = 0, minGrade = 100;
    float average = 0, sum = 0;

    for (int i = 0; i < 10; i++){

        printf("\nEnter a exam grade : ");
        scanf("%d", &examGrade[i]); 

        sum += examGrade[i]; 
        
        if (examGrade[i] > maxGrade)
        {
            maxGrade = examGrade[i];
        } else if (examGrade[i] < minGrade) {
            minGrade = examGrade[i];
        }      
    }

    average = sum/10.0;

    printf("Class average : %.3f\n", average);
    printf("Highest exam grade : %d\n", maxGrade);
    printf("Lowest exam grade : %d\n", minGrade);


    return 0;
}