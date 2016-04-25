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
    string resp;
    char op;
    do{
    system("cls");
    cout<<"::Bem Vindo::\n\n";
    cout<<" 1 - Consultar Disciplinas Atuais \n 2 - Lancar Nota de Aluno \n 3 - Lancar Frequencia \n 4 - SAIR\n";
    cin>>op;
    switch(op)
    {
        case '1': {mostrarDisciplinas(); break;}
        case '2': {lancarNotaAluno(); break;}
        case '3': {lancarFrequencia(); break;}
        case '4': {resp='4'; break;}
        default:  {resp='0'; break;}
    }
    }while (resp != "4");
}

void Professor::consultarTurma()
{
    system("cls");
    cout<<":: Consultar Turma ::\n\n";
    disciplinasprof.detalharDisciplinas();
    getch();
}

void Professor::lancarNotaAluno()
{
    system("cls");
    cout<<":: Lancar Notas ::\n\n";
    getch();
}

void Professor::lancarFrequencia()
{
    system("cls");
    cout<<":: Lancar frequencia :: \n\n";
    getch();
}


string alldisciplinas[3];
int qtd=0;

/*void Professor::incluirDisciplina()
{
    string nDisciplina;
    disciplinasprof.listadeAlunos();
    //cout<<"Digite: ";
    //cin>>nDisciplina;
    //nDisciplina = disciplinas.getDisciplina(2);
    alldisciplinas[0] = nDisciplina;
    alldisciplinas[1] = "Mersha";
    alldisciplinas[2] = "esse";
    qtd=3;
}*/

void Professor::logar()
{
    int indexProfessor;
    string senha;
    cout<<"Numero de Registro: ";
    cin>>indexProfessor;
    cout<<"Senha: ";
    cin>>senha;
}

void Professor::mostrarDisciplinas()
{
    string nomeProfessor;
    nomeProfessor = professores.getNomeProfessor(indexProfessor);
    disciplinasprof.proucurarProfessor(nomeProfessor);//mostra as disciplinas que esse professor está cadastrado.
    getch();
}