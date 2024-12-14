#include <stdio.h>

//-- 5 öğrenci için 0-100 arası Vize,Final notlarından oluşan bir matriste her öğrencinin ortalama notunu hesaplayıp 4.sütuna yazınız.

int main(){
    
    int student_grades[5][4] = {{1,40,90,0}, {2,55,65,0}, {3,80,70,0}, {4,30,20,0}, {5,75,45,0}};

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 4; j++){
            student_grades[i][3] = (student_grades[i][1] + student_grades[i][2]) / 2;
            printf("%d  ", student_grades[i][j]);
        } printf("\n");
    }
 
    return 0;
}