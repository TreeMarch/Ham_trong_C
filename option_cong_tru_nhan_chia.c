#include <stdio.h>


int gia_tri(int a, int b,char toan_tu) {
    int result;
    switch (toan_tu) {
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '*':
            result = a * b;
            break;
        case '/':
            result = a / b;
            break;
        default:
            printf("invalid operation\n");
            return 0;
    }

    return  result;

}
int option_cong_tru_nhan_chia(){
//    int main(){
        int a ; int b ;
        char toan_tu;

        printf("nhap vao gia tri thu nhat : ");
        scanf("%d",&a);
        printf("nhap toan tu (+,-,*,/) : ");
        scanf(" %c",&toan_tu);
        printf("nhap vao gia tru thu hai : ");
        scanf("%d",&b);

        int result = gia_tri( a, b,toan_tu);
        printf("Ket Qua la : %d\n",result);
    }

//}