#include <iostream>
#include <vector>
#include "video.h"
#include "media.h"
using namespace std;

int main() {
  vector<Media*> database;
  cout << "adding a video\n";
  addVideo(database);
  cout << database[0]->getTitle();
  cout << database[0]->getYear();
  return 0; 

}
