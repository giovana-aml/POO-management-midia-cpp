#include <vector>

using namespace std;

class Midia
{

  string titulo;
  vector<string> artistas;
  int data;
  int duracao;
  vector<string> keywords;
  int numeroAcessos;

public:
  Midia(string titulo, vector<string> artistas, int data, int duracao, vector<string> keywords)
  {
    setTitulo(titulo);
    setArtistas(artistas);
    setData(data);
    setDuracao(duracao);
    setKeywords(keywords);
    setNumeroAcessos(0);
  }

  void setTitulo(string titulo)
  {
    titulo = titulo;
  }
  string getTitulo()
  {
    return titulo;
  }

  void setArtistas(vector<string> artistas)
  {
    artistas = artistas;
  }
  vector<string> getArtistas()
  {
    return artistas;
  }

  void setData(int data)
  {
    data = data;
  }
  int getData()
  {
    return data;
  }

  void setDuracao(int duracao)
  {
    duracao = duracao;
  }
  int getDuracao()
  {
    return duracao;
  }

  void setKeywords(vector<string> keywords)
  {
    keywords = keywords;
  }
  vector<string> getKeywords()
  {
    return keywords;
  }

  void setNumeroAcessos(int numeroAcessos)
  {
    numeroAcessos = numeroAcessos;
  }
  int getNumeroAcessos()
  {
    return numeroAcessos;
  }
  void incrementNumeroAcessos(int numeroAcessos)
  {
    int atualNumeroAcessos = getNumeroAcessos() + 1;
  }
};