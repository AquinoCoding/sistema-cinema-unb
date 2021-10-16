#include "testeEntidade.h"

 void TUParticipante::setUp(){
     participante = new Participante();
     estado = SUCESSO;
 }

 void TUParticipante::tearDown(){
     delete participante;
 }

 void TUParticipante::testarCenarioSucesso(){
     Matricula matricula;
     matricula.setValor(VALOR_VALIDO);
     participante->setMatricula(matricula);
     if(participante->getMatricula() != VALOR_VALIDO)
         estado = FALHA;

     Nome nome;
     nome.setValor(VALOR_VALIDO1);
     participante->setNome(nome);
     if(participante->getNome() != VALOR_VALIDO1)
         estado = FALHA;

     Nome sobrenome;
     sobrenome.setValor(VALOR_VALIDO1);
     participante->setNome(sobrenome);
     if(participante->getNome() != VALOR_VALIDO1)
         estado = FALHA;

     Email email;
     email.setValor(VALOR_VALIDO2);
     participante->setEmail(email);
     if(participante->getEmail() != VALOR_VALIDO2)
         estado = FALHA;

     Telefone telefone;
     telefone.setValor(VALOR_VALIDO3);
     participante->setTelefone(telefone);
     if(participante->getTelefone() != VALOR_VALIDO3)
         estado = FALHA;

     Senha senha;
     senha.setValor(VALOR_VALIDO4);
     participante->setSenha(senha);
     if(participante->getSenha() != VALOR_VALIDO4)
         estado = FALHA;

     Cargo cargo;
     cargo.setValor(VALOR_VALIDO5);
     participante->setCargo(cargo);
     if(participante->getCargo() != VALOR_VALIDO5)
         estado = FALHA;
 }

 int TUParticipante::run(){
     setUp();
     testarCenarioSucesso();
     tearDown();
     return estado;
 }

 //

 void TUPeca::setUp(){
     peca = new Peca();
     estado = SUCESSO;
 }

 void TUPeca::tearDown(){
     delete peca;
 }

 void TUPeca::testarCenarioSucesso(){
     Codigo identificador;
     identificador.setValor(VALOR_VALIDO);
     peca->setIdcodigo(identificador);
     if(peca->getIdcodigo() != VALOR_VALIDO)
         estado = FALHA;

     Nome nome;
     nome.setValor(VALOR_VALIDO1);
     peca->setNome(nome);
     if(peca->getNome() != VALOR_VALIDO1)
         estado = FALHA;

     Tipo tipo;
     tipo.setValor(VALOR_VALIDO2);
     peca->setTipo(tipo);
     if(peca->getTipo() != VALOR_VALIDO2)
         estado = FALHA;

     Classificacao classificacao;
     classificacao.setValor(VALOR_VALIDO3);
     peca->setClassificacao(classificacao);
     if(peca->getClassificacao() != VALOR_VALIDO3)
         estado = FALHA;

 }

 int TUPeca::run(){
     setUp();
     testarCenarioSucesso();
     tearDown();
     return estado;
 }

 //

  void TUSessao::setUp(){
     sessao = new Sessao();
     estado = SUCESSO;
 }

 void TUSessao::tearDown(){
     delete sessao;
 }

 void TUSessao::testarCenarioSucesso(){
     Codigo identificador;
     identificador.setValor(VALOR_VALIDO);
     sessao->setIdcodigo(identificador);
     if(sessao->getIdcodigo() != VALOR_VALIDO)
         estado = FALHA;

     Data data;
     data.setValor(VALOR_VALIDO1);
     sessao->setData(data);
     if(sessao->getData() != VALOR_VALIDO1)
         estado = FALHA;

     Horario horario;
     horario.setValor(VALOR_VALIDO2);
     sessao->setHorario(horario);
     if(sessao->getHorario() != VALOR_VALIDO2)
         estado = FALHA;

 }

 int TUSessao::run(){
     setUp();
     testarCenarioSucesso();
     tearDown();
     return estado;
 }

 //

   void TUSala::setUp(){
     sala = new Sala();
     estado = SUCESSO;
 }

 void TUSala::tearDown(){
     delete sala;
 }

 void TUSala::testarCenarioSucesso(){
     Codigo identificador;
     identificador.setValor(VALOR_VALIDO);
     sala->setIdcodigo(identificador);
     if(sala->getIdcodigo() != VALOR_VALIDO)
         estado = FALHA;

     Nome nome;
     nome.setValor(VALOR_VALIDO1);
     sala->setNome(nome);
     if(sala->getNome() != VALOR_VALIDO1)
         estado = FALHA;

     Capacidade capacidade;
     capacidade.setValor(VALOR_VALIDO2);
     sala->setCapacidade(capacidade);
     if(sala->getCapacidade() != VALOR_VALIDO2)
         estado = FALHA;
 }

 int TUSala::run(){
     setUp();
     testarCenarioSucesso();
     tearDown();
     return estado;
 }
