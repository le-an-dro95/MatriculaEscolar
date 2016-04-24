#include <stdio.h>
#include <vector>
#include <conio.h>
#include "Usuario.h"
#include "Aluno.h"
#include "Professor.h"
#include "Secretario.h"
#include <iostream>

int main(int argc, char **argv)
{ 
    cout<<"Ola Mundo";
    
    Professor prof;
    Secretario sec;
    
    sec.apresentarMenu();
    prof.apresentarMenu();
    
    /*vector <Usuario*> pessoas;//vector para estanciar mais de uma pessoa
    
    pessoas.push_back(new Secretario);
    pessoas.push_back(new Professor);
    pessoas.push_back(new Aluno);
    
    for(int i=0;i<pessoas.size();i++){
    pessoas[i]->apresentarMenu();
    getch();
    }*/
}