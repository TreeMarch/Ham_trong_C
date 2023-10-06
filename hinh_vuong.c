#include <stdio.h>
// 1. Khao bao NGUYEN MAU ham
void draw_rec(int s);
void draw_rec2(int width, int height);

// int func2(){

int hinh_vuong(){
//int main(){
    int size;
    //3.Goi ham
    printf("canh co 3 ngoi sao \n");
    draw_rec(3);

    printf("Mot doan code khac ....");
    printf("canh nay co 5 ngoi sao \n");
    draw_rec(5);

    printf("\n ban muon co bao nhieu ngoi sao o canh ?");
    scanf("%d",&size);
    draw_rec(size);

    printf( " ve hinh chu nhat ");
    draw_rec2(3,5);
    return 0;

}
//.2 Dinh nghia ham
void draw_rec(int s){
    printf("\nVe hinh moi vao :\n");
    for (int i = 0; i < s; ++i) {
        printf("\n");
        for (int j = 0; j < s; ++j) {
            printf("*");
         }
        }
}
void draw_rec2(int width, int height){
    printf("New Rectangle");
    for (int i = 0; i < height; ++i) {
        printf("\n");
        for (int j = 0; j < width; ++j) {
            printf("*");
        }
    }
}

//float tong(float a, float b);
//int main(){
//    float r;
//    r = tong(3,4);
//    printf("%f",r);
//}
//
//float tong(float a, float b)
//{
//    float c;
//    c = a + b;
//    return c;
//
//}