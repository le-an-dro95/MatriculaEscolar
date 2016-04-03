#include <stdio.h>
#include <vector>
#include <conio.h>
#include "Usuario.h"
#include "Aluno.h"
#include "Professor.h"
#include "Secretario.h"

int main(int argc, char **argv)
{ 
    vector <Usuario*> pessoas;//vector para estanciar mais de uma pessoa
   
    pessoas.push_back(new Aluno);
    pessoas.push_back(new Secretario);
    pessoas.push_back(new Professor);
    
    
    for(int i=0;i<pessoas.size();i++){
    pessoas[i]->apresentarMenu();
    getch();
    }
}