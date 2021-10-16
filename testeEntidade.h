#ifndef TESTES_ENTIDADES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"

using namespace std;

/// Teste unitário da entidade participante.

/// A entidade Participante valida: matrícula, nome, sobrenome, e-mail, telefone, senha e cargo.
class TUParticipante {
     private:
         const string VALOR_VALIDO    = "12345";
         const string VALOR_VALIDO1   = "Joao Pereira";
         const string VALOR_VALIDO2   = "roberto@gmail.com";
         const string VALOR_VALIDO3   = "(61)-999999999";
         const string VALOR_VALIDO4   = "OcTav1@!";
         const string VALOR_VALIDO5   = "ator";
         Participante *participante;
         int estado;
         void setUp();
         void tearDown();
         void testarCenarioSucesso();
     public:
         const static int SUCESSO =  0;
         const static int FALHA   = -1;
         int run();
};
/// Teste unitário da entidade Peça.

/// A entidade Peça valida: identificador, tipo e classificação.
class TUPeca {
     private:
         const string VALOR_VALIDO   = "AA0000";
         const string VALOR_VALIDO1   = "Orochi";
         const string VALOR_VALIDO2   = "drama";
         const string VALOR_VALIDO3   = "10";
         Peca *peca;
         int estado;
         void setUp();
         void tearDown();
         void testarCenarioSucesso();
     public:
         const static int SUCESSO =  0;
         const static int FALHA   = -1;
         int run();
};

/// Teste unitário da entidade Sessão.

/// A entidade Sessão valida: identificador, data e horário.
class TUSessao {
     private:
         const string VALOR_VALIDO = "AA0000";
         const string VALOR_VALIDO1 = "25/12/2021";
         const string VALOR_VALIDO2 = "23:45";
         Sessao *sessao;
         int estado;
         void setUp();
         void tearDown();
         void testarCenarioSucesso();
     public:
         const static int SUCESSO =  0;
         const static int FALHA   = -1;
         int run();
};

/// Teste unitário da entidade Sala.

/// A entidade Sala valida: identificador, nome e capacidade.
class TUSala {
     private:
         const string VALOR_VALIDO   = "AA0000";
         const string VALOR_VALIDO1   = "MBAPPE";
         const static float VALOR_VALIDO2 = 100.0;
         Sala *sala;
         int estado;
         void setUp();
         void tearDown();
         void testarCenarioSucesso();
     public:
         const static int SUCESSO =  0;
         const static int FALHA   = -1;
         int run();
};

#endif // TESTES_H_INCLUDED

