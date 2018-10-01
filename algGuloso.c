#include <stdio.h>

int max(int* vetor, int pos){
    int i;
    int valor = 0;
    int newPos = pos;
    for(i=1; i<=vetor[pos] && pos+i <6 ;i++ ){
        if(vetor[pos+i]>= valor){
            valor= vetor[pos+i];
            newPos = pos+i;
        }
    }
    return newPos;
}

int saltos(int* vetor, int pos,int jump){
    int newPos;

    if(pos == 5){
        return jump;
    }
    else{
        newPos = max(vetor,pos);
        saltos(vetor, newPos, jump+1);
    }
}

int main(void){
    int vetor[6];
    int i, res;
    for(i=0;i<6;i++){
        vetor[i] = 1;
    }
    res = saltos(vetor, 0, 0);
    printf("A quantidade de saltos no vetor eh: %d",res);
}

