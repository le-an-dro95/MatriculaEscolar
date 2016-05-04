#include <stdio.h>
#include <vector>
#include <conio.h>
#include "Usuario.h"
#include "AlunoGraduado.h"
#include "AlunoGraduando.h"
#include "Professor.h"
#include "Secretario.h"
#include <iostream>

int main(int argc, char **argv)
{ 
    vector <Usuario*> pessoas;//vector para estanciar mais de uma pessoa
    
    pessoas.push_back(new Secretario);
    pessoas.push_back(new AlunoGraduando);
    pessoas.push_back(new Professor);
    pessoas.push_back(new AlunoGraduado);
    pessoas.push_back(new Secretario);
    
    
    for(int i=0; i<pessoas.size();i++)
    {
        pessoas[i]->logarNoSistema();
        
        AlunoGraduando * alunoGraduandoPtr = dynamic_cast<AlunoGraduando *>(pessoas[i]);
        if (alunoGraduandoPtr != 0) 
        {
            system("cls");
            cout<<"\nLista de Livros: \n\n";
            alunoGraduandoPtr->consultarDisciplinas();
        }
    }
    
    
    int tipo;
    do{
    system("cls");
    cout<<":::Bem Vindo:: \n\n 1 - Secretario \n 2 - Professor \n 3 - Aluno Graduado(Finalizado) \n 4 - Aluno Graduando \n 5 - SAIR\n\n";
    cin>>tipo;
    switch(tipo)
    {
        case 1:
        {
        Secretario sec;
        sec.logarNoSistema();
        break;
        }
        case 2:
        {
        Professor prof;
        prof.logarNoSistema();
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
        alunos.logarNoSistema();
        break;
        }
        case 5: {tipo=-9999; break;}
    }
    }while(tipo!=-9999);
}