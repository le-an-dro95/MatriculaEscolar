#ifndef ALUNOSGRADUACAO_H
#define ALUNOSGRADUACAO_H

class AlunosGraduacao: public Alunos
{
public:
    AlunosGraduacao();
    AlunosGraduacao(string, int);
    AlunosGraduacao(const AlunosGraduacao &);
    ~AlunosGraduacao();
    
    static void pegarBancoDados();
    static void alunosCadastrados();
    
private:
    int codigoGraduacao;
    string nomeAluno;

};

#endif // ALUNOSGRADUACAO_H
