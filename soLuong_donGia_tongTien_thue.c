#include <stdio.h>

float total(int soLuong,float donGia){
    float tongGia = soLuong * donGia;
    float VAT = tongGia * 0.1;

    if(tongGia >= 200){
        tongGia * 0.95;
    }
    else if(tongGia >= 100){
        tongGia * 0.98;
    }

    return tongGia + VAT;
}
//int totalMoney(){
int main(){
    int soLuong;
    float donGia;

    printf("nhap so luong mat hang : ");
    scanf("%d",&soLuong);
    printf("don gia cua san pham la : ");
    scanf("%f",&donGia);

     float TotalPrice = total(soLuong,donGia);
     printf("tong tien kem theo thue la : $%.2f",TotalPrice);

    return 0;


}