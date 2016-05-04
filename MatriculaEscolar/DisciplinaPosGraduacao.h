#ifndef DISCIPLINAPOSGRADUACAO_H
#define DISCIPLINAPOSGRADUACAO_H

class DisciplinaPosGraduacao
{
public:
    DisciplinaPosGraduacao();
    ~DisciplinaPosGraduacao();

    virtual void pegarBancoDadosGraduacao();
    virtual void detalharDisciplinasGraduacao(int indexDisciplina);
    
private:
    int codigoPos;
    string nomeDisciplina;
    sting nomeProfessor;
};

#endif // DISCIPLINAPOSGRADUACAO_H
