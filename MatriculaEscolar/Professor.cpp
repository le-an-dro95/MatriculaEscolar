#include "Professor.h"
#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

Professor::Professor()
{
    indexProfessor = 0;
    senha = "p123";
}

Professor::Professor(int indexProfessor, string senha)
{
    this->indexProfessor = indexProfessor;
    this->senha = senha;
}

Professor::Professor(const Professor &outro):Usuario(outro)
{
    indexProfessor = outro.indexProfessor;
    senha= outro.senha;
}

Professor::~Professor()
{
}

ostream &operator<<(ostream &out, const Professor &gente)
{
    out << "Registro: "<<gente.indexProfessor;
    return out;
}

const Professor & Professor::operator=(const Professor &gente)
{
    Usuario::operator =(gente);
    indexProfessor = gente.indexProfessor;
    senha = gente.senha;
    
    return *this;
}

bool Professor::operator==(const Professor &gente) const
{
    if(Usuario::operator ==(gente) && (indexProfessor == gente.indexProfessor) && (senha == gente.senha))
        return true;
    return false;
}

void Professor::apresentarMenu()
{  
    system("cls");
    if (professores.qtdProfessor()==0) {cout<<"\n\n Nenhum Professor Cadastrado"; getch(); return;}
    string resp;
    int op;
    cout<<"Numero de Registro: ";
    cin>>indexProfessor;
    
    do{
    resp = "1";
    system("cls");
    cout<<"::Bem Vindo::\n\n";
    cout<<" 1 - Consultar Disciplinas Atuais \n 2 - Lancar Nota de Aluno \n 3 - Lancar Frequencia \n 4 - SAIR\n";
    cin>>op;
    switch(op)
    {
        case 1: {mostrarDisciplinas(); getch(); break;}
        case 2: {lancarNotaAluno(); break;}
        case 3: {lancarFrequencia(); break;}
        case 4: {resp='0'; break;}
        default: {resp='0'; break;}
    }
    }while (resp != "0");
}

void Professor::mostrarDisciplinas()
{
    system("cls");
    cout<<"\n ::: Lista de Disciplinas ::: \n\n";
    int resp, indexDisciplina;
    string nomeProfessor;
    nomeProfessor = professores.getNomeProfessor(indexProfessor);
    disciplinasprof.proucurarDisciplinasDoProfessor(nomeProfessor);
    cout<<"\nVisulizar Informacoes de Disciplina? (1 - Sim, 0 - SAIR): ";
    cin>>resp;
    if(resp==1){
        cout<<"\n\nNumero da Disciplina: ";
        cin>>indexDisciplina;
        disciplinasprof.detalharDisciplinas(indexDisciplina);
    }
}

void Professor::lancarNotaAluno()
{
    string nomeProfessor;
    int indexDisciplina, indexAluno;
    system("cls");
    cout<<":: Lancar Notas ::\n\n";
    nomeProfessor = professores.getNomeProfessor(indexProfessor);
    disciplinasprof.proucurarDisciplinasDoProfessor(nomeProfessor);
    cout<<"\nDisciplina: ";
    cin>>indexDisciplina;
    disciplinasprof.listarAlunosDisciplina(indexDisciplina);
    cout<<"Aluno: ";
    cin>>indexAluno;
    disciplinasprof.lancarNotadoAluno(indexDisciplina,indexAluno);
}

void Professor::lancarFrequencia()
{
    system("cls");
    cout<<":: Lancar frequencia :: \n\n";
    getch();
}

void Professor::logar()
{
    int indexProfessor;
    string senha;
    cout<<"Numero de Registro: ";
    cin>>indexProfessor;
    cout<<"Senha: ";
    cin>>senha;
}

