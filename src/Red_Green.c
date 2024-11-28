#include <stdio.h>

int main(){
    char b;
    int x;
    printf("song kiriting: ");
    scanf("%d",&x);
    for(int i = 1; i <= x; i++){
        if(i % 3 == 0 && i % 5 == 0){
            printf("YashilQIzil\n");
        } else if(i % 3 == 0){
            printf("Qizil 3 %d\n",i);
        } else if(i % 5 == 0){
            printf("Yashil  %d\n",i);
        } else {
            printf("%d\n",i);
        }
    }
    printf("hatoli yuz berdi\n");
}