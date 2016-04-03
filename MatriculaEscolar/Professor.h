#ifndef PROFESSOR_H
#define PROFESSOR_H
#include "Usuario.h"
#include <string>

using namespace std;

class Professor: public Usuario
{
    friend ostream &operator<<(ostream &, const Professor &);
public:
    Professor();
    Professor(string, string);
    Professor(const Professor &);
    ~Professor();

    virtual void apresentarMenu();
    void consultarTurma();
    void lancarNotaAluno();
    void lancarFrequencia();
    
    bool operator==(const Professor &) const;
    const Professor &operator=(const Professor &);
    
private:

    string registro;
    string senha;

};

#endif // PROFESSOR_H
