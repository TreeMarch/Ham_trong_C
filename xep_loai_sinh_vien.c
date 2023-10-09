#include <stdio.h>

char xepLoaiSinhVien(int marks){
    char grade;

    if(marks >= 90){
        grade = 'A';
    }
    else if(marks >= 80){
        grade = 'B';
    }
    else if(marks >= 70){
        grade = 'C';
    }
    else if(marks >= 60){
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }

    return grade;

}
int grade(){
//int main(){
    int marks ;

    printf("Mark >= 90 ==> Grade: A\n");
    printf("Mark >= 80 ==> Grade: B\n");
    printf("Mark >= 70 ==> Grade: C\n");
    printf("Mark >= 60 ==> Grade: D\n");
    printf("Mark < 60 ==> Grade: F\n");
    printf("Enter marks : ");
    scanf("%d",&marks);

    char grade = xepLoaiSinhVien(marks);
    printf("Grade :  %c\n",grade);

    return 0;
}