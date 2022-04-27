#include <vector>

using namespace std;

enum FormatosDeVideo
{

};

enum GenerosDeFilme
{

};

class Filme
{
  vector<FormatosDeVideo> formatoVideo;
  vector<GenerosDeFilme> generoFilme;

public:
  Filme(vector<FormatosDeVideo> formatoVideo, vector<GenerosDeFilme> generoFilme)
  {
    setFormatoDeVideo(formatoVideo);
    setGeneroDeFilme(generoFilme);
  }

  void setFormatoDeVideo(vector<FormatosDeVideo> formatoVideo)
  {
    formatoVideo = formatoVideo;
  }
  vector<FormatosDeVideo> getFormatoDeVideo()
  {
    return formatoVideo;
  }

  void setGeneroDeFilme(vector<GenerosDeFilme> generoFilme)
  {
    generoFilme = generoFilme;
  }
  vector<GenerosDeFilme> getGeneroDeFilme()
  {
    return generoFilme;
  }
};