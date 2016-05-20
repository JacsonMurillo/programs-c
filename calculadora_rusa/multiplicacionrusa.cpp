#include<stdio.h>
#include<stdlib.h>

int main(){

    int multiplicador = 13;
    int multiplicando = 15;
    int total = 0;

    while(multiplicador >=1){
    if(multiplicador % 2 == 1){
       total +=multiplicando;
     multiplicador >>= 0;
     multiplicador <<=1;
    }

    prontf(" %i", total);
  return EXIT_SUCCESS;
}
