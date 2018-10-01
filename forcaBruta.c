#include <stdio.h>

void forcaBruta(char* palavra, int pos){

    if(pos == 8){
        printf("%s\n",palavra);
    }
    else{
        int i=0;
        for(i='a';i<'d';i++){
            palavra[pos]=i;
            forcaBruta(palavra,pos+1);
        }
    }

}

int main(void){
    char palavra[9];
    forcaBruta(palavra, 0);
}