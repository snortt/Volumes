/*
*
* Autor: Gabriel Marques <snortt@gmail.com>
* Criado: Seg 18 Jul 2016 09:38:51 BRT
*/

#include "includes.h"
#include "volumes_math.h"

void emFuncaoDoVolume(void) {
    float raio = DIAMETRO/2;
    float area_base; 
    float volume;
    float altura;
    
    area_base = PI * raio * raio;
    
    fprintf(stdout, "Litros equivalem a centímetros na panela\n");
    for ( volume = 0; volume <= VOLUME_FINAL; volume+=0.5 ) {
        altura = volume / area_base;
        fprintf(stdout, "%5.2f l : %5.2f cm\n", volume, altura*1000); // litro -> cm3
    }
}

void emFuncaoDaAltura(void) {
    float raio = DIAMETRO/2;
    float area_base; 
    float volume;
    float altura;
    
    area_base = PI * raio * raio;
    
    fprintf(stdout, "Centímetros na panela equivalem a litros\n");
    for ( altura = 0; altura <= ALTURA_FINAL; altura+=0.5 ) {
        volume = area_base * altura;
        
        fprintf(stdout, "%5.2f cm : %5.2f l\n", altura, volume/1000); // cm3 -> litro
   }
}

