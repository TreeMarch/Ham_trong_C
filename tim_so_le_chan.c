#include <stdio.h>

int gia_tri(int a , int b , char toan_tu){
    int ket_qua;
    int kiem_tra;

    switch (toan_tu) {
        case '+':
            ket_qua = a + b;
            break;
        case '-':
            ket_qua = a - b;
            break;
        case '*':
            ket_qua = a * b;
            break;
        case '/':
            ket_qua = a / b;
            break;
        default:
            printf("invalid operation\n");
            return 0;
    }
}