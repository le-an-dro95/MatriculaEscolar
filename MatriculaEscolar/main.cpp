#include <stdio.h>
#include <vector>
#include <conio.h>
#include "Usuario.h"
#include "Aluno.h"
#include "Professor.h"
#include "Secretario.h"
#include "Professores.h"
#include <iostream>

int main(int argc, char **argv)
{ 
    int tipo;
    do{
    cout<<"O que voce e? \n\n 1 - Secretario \n 2 - Professor \n 3 - Aluno \n 4 - SAIR\n\n";
    cin>>tipo;
    switch(tipo)
    {
        case 1:
        {
        Secretario sec;
        Professores professores;
        sec.apresentarMenu();
        break;
        }
        case 2:
        {
        Professor prof;
        prof.apresentarMenu();
        break;
        }
        case 3:
        {
        Aluno alunos;
        alunos.apresentarMenu();
        break;
        }
        case 4: {tipo=-9999; break;}
    }
    }while(tipo!=-9999);
}