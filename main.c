#include <stdio.h>
    static int i=1;
void Haino(int num,char sou,char tag,char aux){
    if(num==1){
        printf("��%d�Σ���%c�˵����ƶ���%c����\n",i,sou,tag);
        i++;
    } else{
        Haino(num-1,sou,aux,tag);
        printf("��%d�Σ���%c�˵����ƶ���%c����\n",i,sou,tag);
        i++;
        Haino(num-1,aux,tag,sou);
    }
}

int main() {
    Haino(4,'A','C','B');
    printf("total %d",i-1);
    return 0;
}