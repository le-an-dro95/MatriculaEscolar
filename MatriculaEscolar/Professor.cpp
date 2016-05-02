#include "Professor.h"
#include <iostream>
#include <string>
#include <conio.h>

const int MAX_PROFESSORES = 30;

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
    int resp;
    int op;
    do{
    cout<<"Numero de Registro: ";
    cin>>indexProfessor;
    }while(indexProfessor>professores.qtdProfessor());
    do{
    resp = 1;
    system("cls");
    cout<<"::Bem Vindo::\n\n";
    cout<<" 1 - Consultar Disciplinas Atuais \n 2 - Lancar Nota de Aluno \n 3 - SAIR\n";
    cin>>op;
    switch(op)
    {
        case 1: {mostrarDisciplinas(); getch(); break;}
        case 2: {lancarNotaAluno(); break;}
        case 3: {resp= 0; break;}
        default: {resp= 1; break;}
    }
    }while (resp != 0);
}

void Professor::mostrarDisciplinas()
{
    do{
    system("cls");
    cout<<"\n ::: Lista de Disciplinas ::: \n\n";
    int resp, indexDisciplina;
    string nomeProfessor;
    nomeProfessor = professores.getNomeProfessor(indexProfessor);
    if (disciplinasprof.procurarDisciplinasDoProfessor(nomeProfessor) == 0) {return;}
    cout<<"\nVisulizar Informacoes de Disciplina? (1 - Sim, 0 - SAIR): ";
    cin>>resp;
    switch(resp){
    case 1: 
    {
        cout<<"\n\nNumero da Disciplina: ";
        cin>>indexDisciplina;
        if (indexDisciplina>disciplinasprof.qtdDisciplinas()) {break;}
        disciplinasprof.detalharDisciplinas(indexDisciplina);
        getch();
        break;
    }
    case 0: {return;}
    default: {break;}
    }
    }while (1);
}


void Professor::lancarNotaAluno()
{
    string nomeProfessor;
    int indexDisciplina, indexAluno;
    system("cls");
    cout<<":: Lancar Notas ::\n\n";
    nomeProfessor = professores.getNomeProfessor(indexProfessor);
    if (disciplinasprof.procurarDisciplinasDoProfessor(nomeProfessor) == 0) {return;}
    cout<<"\n\nDisciplina: ";
    cin>>indexDisciplina;
    disciplinasprof.listarAlunosDisciplina(indexDisciplina);
    if (disciplinasprof.qtdDeAlunosNaDisciplina(indexDisciplina)== 0){return;}
    cout<<"\n\nAluno: ";
    cin>>indexAluno;
    disciplinasprof.lancarNotadoAluno(indexDisciplina,indexAluno);
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

