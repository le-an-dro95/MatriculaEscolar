#include <stdio.h>
#include <vector>
#include <conio.h>
#include "Usuario.h"
#include "AlunoGraduado.h"
#include "AlunoGraduando.h"
#include "Professor.h"
#include "Secretario.h"
#include "Professores.h"
#include <iostream>

int main(int argc, char **argv)
{ 
    int tipo;
    do{
    system("cls");
    cout<<"O que voce e? \n\n 1 - Secretario \n 2 - Professor \n 3 - Aluno Graduado(Finalizado) \n 4 - Aluno Graduando \n 5 - SAIR\n\n";
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
        AlunoGraduado alunos;
        alunos.apresentarMenu();
        break;
        }
        case 4: 
        {
        AlunoGraduando alunos;
        alunos.apresentarMenu();
        break;
        }
        case 5: {tipo=-9999; break;}
    }
    }while(tipo!=-9999);
}