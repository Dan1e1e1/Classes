#include <iostream>
#include <vector>
#include "video.h"
#include "music.h"
using namespace std;

int main() {
  vector<Media*> database;
  cout << "adding a music\n";
  addMusic(database);
  cout << database[0]->getTitle();
  cout << database[0]->getYear();
  return 0; 

}
