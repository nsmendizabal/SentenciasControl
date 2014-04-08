//
//  main.c
//  Ordenamiento
//
//  Created by Jorge Mendizabal Navarro on 4/8/14.
//  Copyright (c) 2014 Jorge Mendizabal Navarro. All rights reserved.
//

#include <stdio.h>

int ordena(int c,int r, int k);

int main(int argc, const char * argv[]){

    int resultado = ordena(9, 10, 3);
    
    if (resultado == 1)
        printf("medio es mayor a promedio");
    else if (resultado== 0)
        printf("Medio es igual a promedio");
    else if (resultado == -1)
        printf("Promedio es mayor a medio");
    
    
    return 0;
}


;
int ordena(int c,int r, int k){
    
    int medio,promedio;
    
    int valores[3];
    valores[0] = 0;
    valores[1] = 0;
    valores[2] = 0;
    
    
    if ((c < r) && (c < k)) {
        
        valores[0] = c;
        if (r < k) {
            valores[1] = r;
            valores[2] = k;
        }else{
            valores[1] = k;
            valores[2] = r;
        }
        
    }else if ((r < c) && (r < k)) {
        
        valores[0] = r;
        if (c < k) {
            valores[1] = c;
            valores[2] = k;
        }else{
            valores[1] = k;
            valores[2] = c;
        }
        
    }else if ((k < c) && (k < r)) {
        
        valores[0] = k;
        if (c < r) {
            valores[1] = c;
            valores[2] = r;
        }else{
            valores[1] = r;
            valores[2] = c;
        }
    }
    
    promedio = (valores[0]+valores[1]+valores[2])/3;
    medio = valores[1];
    
    if (medio==promedio) {
        return 0;
    }
    
    else if(medio>promedio){
        return 1;
    }
    
    else if (medio<promedio){
        return -1;
    }
    return 0;
}


