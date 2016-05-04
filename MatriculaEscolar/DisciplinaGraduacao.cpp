#include "DisciplinaGraduacao.h"
#include <iostream>
#include <string>
#include <conio.h>
#include <vector>
using namespace std;

const int MAX_DISCIPLINAS=30;
const int MAX_DISCIPLINAS_POR_ALUNO=3;

DisciplinaGraduacao::DisciplinaGraduacao()
{
    this->nomeDisciplina="NomeDisciplina";
    this->nomeProfessor="NomeProfessor";
}

DisciplinaGraduacao::DisciplinaGraduacao(string nomeDisciplina, string nomeProfessor)
{
    this->nomeDisciplina=nomeDisciplina;
    this->nomeProfessor=nomeProfessor;
}

DisciplinaGraduacao::DisciplinaGraduacao(const DisciplinaGraduacao &outraDisciplina)
{
    this->nomeDisciplina=outraDisciplina.nomeDisciplina;
    this->nomeProfessor=outraDisciplina.nomeProfessor;
}


void DisciplinaGraduacao::detalharDisciplinasGraduacao(int indexDisciplina)
{
    system("cls");
    int resp=0;
    cout<<" \n ::: Dados de Disciplina ::: \n\n";
    if(indexDisciplina<0 && indexDisciplina>qtddeDisciplinas) 
    {
        cout<<"Disciplina nao encontrada"; 
    }
    cout<<"\nNome da Disciplina: "<<disciplinas[indexDisciplina].getDisciplina();
    cout<<"\nNumero de Registro: "<<indexDisciplina;
    cout<<"\nCodigo de Graduacao"<<codigoGraduacao;
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

void DisciplinaGraduacao::pegarBancoDadosGraduacao() //Simulando que algumas disciplinas ja estão cadastrada em um banco de dados
{
    disciplinas[0].setDisciplinas("Matematica_Computacional");
    disciplinas[1].setDisciplinas("Sistemas_Operacionais");
    disciplinas[2].setDisciplinas("Programacao_II");
    disciplinas[3].setDisciplinas("Calculo_II");
    disciplinas[4].setDisciplinas("Programacao_I");
    qtddeDisciplinas=5;
}