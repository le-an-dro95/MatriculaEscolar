#include "Disciplinas.h"
#include <iostream>
#include <string>
#include <vector>
#include <conio.h>
#include <stdlib.h> 
using namespace std;

const int MAX_DISCIPLINAS=30;
int qtddeDisciplinas=0;
int qtddeAlunosDisciplina=0;

Disciplinas disciplinas[MAX_DISCIPLINAS];

Disciplinas::Disciplinas()
{
    this->nomeDisciplina="NomeDisciplina";
    this->nomeProfessor="NomeProfessor";
}

Disciplinas::Disciplinas(string nomeDisciplina, string nomeProfessor)
{
    this->nomeDisciplina=nomeDisciplina;
    this->nomeProfessor=nomeProfessor;
}

Disciplinas::Disciplinas(const Disciplinas &outraDisciplina)
{
    this->nomeDisciplina=outraDisciplina.nomeDisciplina;
    this->nomeProfessor=outraDisciplina.nomeProfessor;
}

Disciplinas::~Disciplinas()
{
}

void Disciplinas::cadastrarDisciplina(const string &nomeDisciplina)
{
    disciplinas[qtddeDisciplinas].setDisciplinas(nomeDisciplina);
    qtddeDisciplinas+=1;
}

void Disciplinas::setDisciplinas(string nomeDisciplina)
{
    this->nomeDisciplina=nomeDisciplina;
}

int Disciplinas::qtdDisciplinas()
{
    if(qtddeDisciplinas==0) return 0;
    else return qtddeDisciplinas-1;
}

string Disciplinas::getDisciplina()
{
    return this->nomeDisciplina;
}

void Disciplinas::detalharDisciplinas(int indexDisciplina)
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

void Disciplinas::disciplinasCadastradas()
{
    system("cls");
    if(qtddeDisciplinas!=0){

        cout<<"::: Disciplinas Cadastradas ::: \n\n";
        for(int i=0;i<qtddeDisciplinas;i++){
            cout<<""<<i<<"- "<<disciplinas[i].getDisciplina()<<"\n";
        }
    }
    else cout<<"\nNao existe disciplinas cadastradas";
}

void Disciplinas::pegarBancoDados() //Simulando que algumas disciplinas ja estão cadastrada em um banco de dados
{
    disciplinas[0].setDisciplinas("Matematica_Computacional");
    disciplinas[1].setDisciplinas("Sistemas_Operacionais");
    disciplinas[2].setDisciplinas("Programacao_II");
    disciplinas[3].setDisciplinas("Calculo_II");
    disciplinas[4].setDisciplinas("Programacao_I");
    qtddeDisciplinas=5;
}

void Disciplinas::matricularAlunoEmDisciplina(int indexDisciplina, string nomeAluno)
{
    disciplinas[indexDisciplina].incluirNoVetorAluno(nomeAluno);
}

void Disciplinas::incluirNoVetorAluno(string nomeAluno)
{ 
    this->alunosDisciplina.push_back(nomeAluno);
} 


void Disciplinas::listarAlunosDisciplina(int indexDisciplina)
{
    disciplinas[indexDisciplina].percorrerVetorAlunosDisciplina();
}

int Disciplinas::qtdDeAlunosNaDisciplina(int indexDisciplina)
{
    return disciplinas[indexDisciplina].tamanhoDoVetorDisciplina();
}

int Disciplinas::tamanhoDoVetorDisciplina()
{
    return alunosDisciplina.size();
}

void Disciplinas::percorrerVetorAlunosDisciplina()
{
    system("cls");
    cout<<"---- Lista de Alunos da Disciplina ----\n\n";
    if (alunosDisciplina.size()==0)
    { 
    cout<<"\n\nNao Existem Alunos Matriculados";
    getch();
    return;
    }
    for(int i=0;i<alunosDisciplina.size();i++){
        for(int j=0;j<alunos.qtdAlunos();j++){
            if(alunosDisciplina[i] == alunos.getNomeAluno(j))
            cout<<""<<j<<" - "<<alunosDisciplina[i]<<"\n";
        }
    }
}

void Disciplinas::adicionarProfessorDisciplina(string nomeProfessor, int indexDisciplina)
{
    disciplinas[indexDisciplina].adicionarProfessor(nomeProfessor);
}

void Disciplinas::adicionarProfessor(string nomeProfessor)
{
    this->nomeProfessor=nomeProfessor;
}

string Disciplinas::getNomeProfessor()
{
    return this->nomeProfessor;
}

int Disciplinas::procurarDisciplinasDoProfessor(string nomeProfessor)
{
    int achou=0;
    for (int i=0;i<qtddeDisciplinas;i++)
    {
    if(disciplinas[i].getNomeProfessor()==nomeProfessor){
        cout<<" "<<i<<" - "<<disciplinas[i].getDisciplina()<<"\n";
        achou+=1;
    }
    }
    if (achou==0) {cout<<"\n Nenhuma Disciplina \n"; getch(); return achou;}
}

void Disciplinas::procurarDisciplinasAluno(string nomeAluno)
{
    for (int i=0;i<qtddeDisciplinas;i++)
        disciplinas[i].procurarAlunoemDisciplina(i, nomeAluno);
}

void Disciplinas::procurarAlunoemDisciplina(int indexDisciplina, string nomeAluno)
{
    for(int j=0;j<alunosDisciplina.size();j++)
    {
        if (alunosDisciplina[j] == nomeAluno)
            cout<<" "<<indexDisciplina<<" - "<<nomeDisciplina<<"\n";
    }
}

void Disciplinas::lancarNotadoAluno(int indexDisciplina,int indexAluno)
{
    disciplinas[indexDisciplina].chamarAlunos(indexAluno);
}

void Disciplinas::chamarAlunos(int indexAluno)
{
    alunos.lancarNotas(indexAluno);
}

void Disciplinas::visualizarNota(int indexDisciplina, int indexAluno)
{
    disciplinas[indexDisciplina].buscarNota(indexAluno);
}

void Disciplinas::buscarNota(int indexAluno)
{
    alunos.mostrarNotadoAluno();
}

void Disciplinas::buscarSala(int indexDisciplina)
{
    int nturno, sala;
    enum {manha=1,tarde, noite};
    
    cout<<"\n\nDigite o Turno: (1- manha, 2-tarde, 3-noite):";
    cin>>nturno;
    
    if((nturno >= manha) && (nturno <= noite))
    {
    switch(nturno)
    {
    case manha:
    {
        sala = rand() % 5;
        disciplinas[indexDisciplina].adicionarSala(sala);    
        break;
    }
    case tarde:
    {
        sala = rand() % 5;
        disciplinas[indexDisciplina].adicionarSala(sala);    
        break;
    }
    case noite:
    {
        sala = rand() % 5;
        disciplinas[indexDisciplina].adicionarSala(sala);    
        break;
    } 
    } 
    }  
}

void Disciplinas::adicionarSala(int NumeroSala)
{
    this->NumeroSala=NumeroSala;
}
void Disciplinas::mostrarNumeroSala(int indexDisciplina)
{
    cout<<" "<<disciplinas[indexDisciplina].getNumeroSala();
}

int Disciplinas::getNumeroSala()
{
    return this->NumeroSala;
}
