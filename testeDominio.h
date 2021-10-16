#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"

using namespace std;

///
///Cada teste pode retornar um caso de SUCESSO ou FALHA, a depender do teste realizado.
///

///Teste unitário do domínio Capacidade.
class TUCapacidade { // Octavio - 190094087
private:
    const static int VALOR_VALIDO   = 100;
    const static int VALOR_INVALIDO = 600;
    Capacidade *capacidade;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

///Teste unitário do domínio Cargo.
class TUCargo { // Octavio - 190094087
private:
    const string VALOR_VALIDO   =  "ator";
    const string VALOR_INVALIDO = "Atores";
    Cargo *cargo;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

///Teste unitário do domínio Classificação.
class TUClassificacao { // Octavio - 190094087
private:
    const string VALOR_VALIDO   = "10";
    const string VALOR_INVALIDO = "80";
    Classificacao *classificacao;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

///Teste unitário do domínio Código.
class TUCodigo { // Lorenzo - 200022610
private:
    const string VALOR_VALIDO   = "AA0000";
    const string VALOR_INVALIDO = "AAA000";
    Codigo *codigo;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

///Teste unitário do domínio Data.
class TUData { // Lorenzo - 200022610
private:
    const string VALOR_VALIDO   = "29/02/2000";
    const string VALOR_INVALIDO = "29/02/2001";
    Data *data;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

///Teste unitário do domínio E-mail.
class TUEmail { // Lorenzo - 200022610
private:
    const string VALOR_VALIDO   = "neymarJr1234@aluno.unb.br";
    const string VALOR_INVALIDO = "neymarJr1234..@aluno.unb.br";
    Email *email;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

///Teste unitário do domínio Horário.
class TUHorario { // Eder - 170140636
private:
    const string VALOR_VALIDO   = "10:15";
    const string VALOR_INVALIDO = "12:44";
    Horario *horario;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

///Teste unitário do domínio Matrícula.
class TUMatricula { // Eder - 170140636
private:
    const string VALOR_VALIDO   = "12345";
    const string VALOR_INVALIDO = "12245";
    Matricula *matricula;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

///Teste unitário do domínio Nome.
class TUNome { // Lorenzo - 200022610
private:
    const string VALOR_VALIDO   = "Octavio.Silva";
    const string VALOR_INVALIDO = "octavio  silva";
    Nome *nome;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

///Teste unitário do domínio Senha.
class TUSenha { // octavio - 190094087
private:
    const string VALOR_VALIDO   = "d&vPy$$$";
    const string VALOR_INVALIDO = "d&vPyth@n";
    Senha *senha;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

///Teste unitário do domínio Telefone.
class TUTelefone { // Lorenzo - 200022610
private:
    const string VALOR_VALIDO   = "(61)-998713797";
    const string VALOR_INVALIDO = "(11) 400289223";
    Telefone *telefone;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

///Teste unitário do domínio Tipo.
class TUTipo { // Eder - 170140636
private:
    const string VALOR_VALIDO   = "drama";
    const string VALOR_INVALIDO = "DRAMAS";
    Tipo *tipo;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

#endif // TESTES_H_INCLUDED
