#include "DisciplinaPosGraduacao.h"
#include <iostream>
#include <string>
#include <conio.h>
#include <vector>
using namespace std;

DisciplinaPosGraduacao::DisciplinaPosGraduacao()
{
    this->nomeDisciplina="NomeDisciplina";
    this->nomeProfessor="NomeProfessor";
}

DisciplinaPosGraduacao::DisciplinaPosGraduacao(string nomeDisciplina, string nomeProfessor)
{
    this->nomeDisciplina=nomeDisciplina;
    this->nomeProfessor=nomeProfessor;
}

DisciplinaPosGraduacao::DisciplinaPosGraduacao(const DisciplinaPosGraduacao &outraDisciplina)
{
    this->nomeDisciplina=outraDisciplina.nomeDisciplina;
    this->nomeProfessor=outraDisciplina.nomeProfessor;
}


void DisciplinaPosGraduacao::detalharDisciplinasGraduacao(int indexDisciplina)
{
    system("cls");
    int resp=0;
    cout<<" \n ::: Dados de Disciplina ::: \n\n";
    if(indexDisciplina<0 && indexDisciplina>qtddeDisciplinas) 
    {
        cout<<"Disciplina nao encontrada"; 
    }
    cout<<"\nNome da Disciplina: "<<disciplinas[indexDisciplina].getDisciplina();
    cout<<"\nCodigo de PosGraduacao"<<codigoPos;
    cout<<"\nNumero de Registro: "<<indexDisciplina;
    cout<<"\nProfessor: "<<disciplinas[indexDisciplina].getNomeProfessor();
    cout<<"\nSala: "<<disciplinas[indexDisciplina].getNumeroSala();
    if(qtdDeAlunosNaDisciplina(indexDisciplina)==0)
    {
        cout<<"\nNenhum Aluno Matriculado";
        getch(); 
        return;
    }
    cout<<"\nQuantidade de Alunos Matriculados: "<<qtdDeAlunosNaDisciplina(indexDisciplina);
    cout<<"\nVisualizar Lista de Alunos? (1-sim, 0 - Sair): ";
    cin>>resp;
    if (resp==1) {listarAlunosDisciplina(indexDisciplina);}
}

void DisciplinaPosGraduacao::pegarBancoDadosGraduacao() //Simulando que algumas disciplinas ja estão cadastrada em um banco de dados
{
    disciplinas[0].setDisciplinas("Inteligência_Artificial_e_Robótica:");
    disciplinas[1].setDisciplinas("Linguagens_de_Programação_e_Compiladores:");
    disciplinas[2].setDisciplinas("Otimização_em_Computação_Científica:");
    disciplinas[3].setDisciplinas("Arquitetura_de_Computadores");
    disciplinas[4].setDisciplinas("Direitos_Legais_em_Computacao");
    qtddeDisciplinas=5;
}