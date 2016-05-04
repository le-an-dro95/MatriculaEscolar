#ifndef ALUNOSPOSGRADUACAO_H
#define ALUNOSPOSGRADUACAO_H

class AlunosPosGraduacao
{
public:   
    AlunosPosGraduacao();
    AlunosPosGraduacao(string, int);
    AlunosPosGraduacao(const AlunosGraduacao &);
    ~AlunosPosGraduacao();
    
    virtual void pegarBancoDados();
    virtual void alunosCadastrados();
    
private:
    int codigoPos;
    string nomeAluno;

};

#endif // ALUNOSPOSGRADUACAO_H
