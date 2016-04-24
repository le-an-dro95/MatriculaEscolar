#ifndef DISCIPLINAS_H
#define DISCIPLINAS_H
#include <string>
#include <vector>

using namespace std;


class Disciplinas
{
public:
    Disciplinas();
    ~Disciplinas();
    
    void disciplinasCadastradas();
    void cadastrar(const string &);
    string getDisciplina(int);
    
private:
    string codigo;
    string nome;
    string *disciplinas;
};

#endif // DISCIPLINAS_H
