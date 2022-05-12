#include <iostream>
#include "headers/midia.hpp"
#include "headers/musica.hpp"
#include "headers/filme.hpp"
#include <vector>
using namespace std;

int main()
{
  vector<Musica> musicas;
  vector<Filme> filmes;
  vector<string> artistas;
  vector<string> keywords;
  vector<GeneroDeMusica> generoDeMusica;
  vector<FormatoDeAudio> formatoDeAudio;

  cout << "Hello!!" << endl;

  generoDeMusica.push_back(Rock);
  generoDeMusica.push_back(Heavy_Metal);
  // usar sort para ordenar o vector

  // Midia midia1("Title", artistas, 123, 0, keywords, 0);
  Musica musica1(formatoDeAudio, generoDeMusica, "Title", artistas, 123, 0, keywords, 0);
  musicas.push_back(musica1);
  musica1.print();
  return 0;
};