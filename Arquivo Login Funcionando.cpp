#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef  struct {
    char login [ 30 ]; 
    char senha [ 30 ]; 
} pessoa; pessoa p [ 0 ]; 


// pessoa[5]


int  main () {


    char login  [ 30 ]; 
    char senha [ 30 ]; 
    printf("\n\t\tOLIMPIADAS 2021\n\n");
    printf("\n\t\tEfetue o login para entrar em sua conta:\n\n");
    

    strcpy(p[0].login,"Allyson"); 
    strcpy(p[0].senha,"123"); 
    
    strcpy(p[1].login,"Sandra"); 
    strcpy(p[1].senha,"146"); 
    
    strcpy(p[2].login,"Luiz"); 
    strcpy(p[2].senha,"156"); 
    
    strcpy(p[3].login,"Marcos"); 
    strcpy(p[3].senha,"164"); 
    
    strcpy(p[4].login,"Amanda"); 
    strcpy(p[4].senha,"159"); 
      
    
    printf ( " \nlogin: " );
    scanf ( "%s" , login); 

    printf ( " \nsenha: " );
    scanf ( "%s" , senha); 

    if (( strcmp (login, p [ 0 ]. login ) == 0 ) && ( strcmp (senha, p [ 0 ]. senha ) == 0 )) { 
        printf ( " Usuário logado " );
    } else {
        printf ( " Login e / ou senha incorretos " ); 
    }
    return  0 ;
}
