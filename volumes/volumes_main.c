/*
*
* Autor: Gabriel Marques <snortt@gmail.com>
* Criado: Seg 18 Jul 2016 09:38:51 BRT
*/

#include "includes.h" 
#include "volumes_math.h"

int main(int argc, char *argv[]) {
  
    if (argc != 2) {
        fprintf(stderr,"Uso: %s <opt>\n", argv[0]);
        fprintf(stderr,"  -v : Imprime em funcao do volume\n");
        fprintf(stderr,"  -h : Imprime em funcao da altura\n");
        exit(EXIT_FAILURE);
    }

    if ( strcmp("-v",argv[1]) == 0 ) 
        emFuncaoDoVolume();

    if ( strcmp("-h",argv[1]) == 0 )
        emFuncaoDaAltura();

    exit(EXIT_SUCCESS);
}
    
