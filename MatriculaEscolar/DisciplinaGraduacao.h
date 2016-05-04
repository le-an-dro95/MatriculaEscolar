#ifndef DISCIPLINAGRADUACAO_H
#define DISCIPLINAGRADUACAO_H
#include "Disciplinas.h"

class DisciplinaGraduacao: public Disciplinas
{
public:
    DisciplinaGraduacao();
    DisciplinaGraduacao(string, string);
    DisciplinaGraduacao(const DisciplinaGraduacao &);
    
    virtual void pegarBancoDadosGraduacao();
    virtual void detalharDisciplinasGraduacao(int indexDisciplina);
    
private: 
    int codigoGraduacao;
};

#endif // DISCIPLINAGRADUACAO_H
