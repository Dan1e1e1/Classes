#include <iostream>
#include <vector>
#include "video.h"
#include "music.h"
#include "movie.h"
using namespace std;

int main() {
  vector<Media*> database;
  cout << "adding a movie\n";
  addMovie(database);
  cout << database[0]->getTitle();
  cout << database[0]->getYear();
  return 0; 

}
