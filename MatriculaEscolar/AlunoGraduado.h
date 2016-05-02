#ifndef ALUNOGRADUADO_H
#define ALUNOGRADUADO_H

class AlunoGraduado
{
public:
    AlunoGraduado();
    ~AlunoGraduado();
    virtual void apresentarMenu();
    static void visualizarHistoricoEscolar();
    static void solicitarRegistroDiploma();
    static void solicitarSegundaViaDiploma();
    static void gerarAtestadoFinalizacaoGraduacao();
    
private:
    static int indexAluno;

};

#endif // ALUNOGRADUADO_H
