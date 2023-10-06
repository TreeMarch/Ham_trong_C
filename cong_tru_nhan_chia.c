#include <stdio.h>

//float tong(int x, int y);
//
//int main(){
//    float r;
//    r = tong(4,6);
//    printf("%f",r);
//}
//
//float tong(int x , int y) {
//    float c;
//    c = x + y;
//    return c;
//}

int add(int a, int b);

int cong_tru_nhan_chia(){
//int main(){
    int result = add(5,8);
    printf("Tong la : %d\n",result);

    int result2 = add(4,3);
    printf("TOng la :%d\n",result2);

    int num1,num2;
    printf("nhap so hang thu nhat la : ");
    scanf("%d",&num1);
    printf("nhap so hang thu hai la : ");
    scanf("%d",&num2);


    int result3 = add(num1,num2);
    printf("Tong la : %d\n",result3);
    return 0;

}
int add(int a,int b){
    printf("\n Thuc hien tinh cong : \n");
    printf("so hang a = %d\n",a);
    printf("so hang b = %d\n",b);
    return  a + b ;
}