#include <stdio.h>

void timSoBoiChiaHetCHo50(int num01, int num02);

int review01{
//    int main(){
        int num01 ,num02;
        printf("nhap gia tri num01 : ");
        scanf("%d",&num01);
        printf("nhap gia tri num02 : ");
        scanf("%d",&num02);

        if (num01 < num02){
            printf("cac so chia het cho 50 tu %d den %d la :\n",num01,num02);
            timSoBoiChiaHetCHo50(num01,num02);
        }
        else{
            printf("cac so chia het cho 50 tu %d den %d la : ",num02,num01);
            timSoBoiChiaHetCHo50(num02,num01);
        }
    return 0;
    }

void timSoBoiChiaHetCHo50(int num01, int num02){
    for (int num = num01; num <= num02; num++) {
        if(num % 50 == 0)
            printf("%d\n",num);
    }
}
//};
