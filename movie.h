#pragma once
#include <iostream>
#include <vector>
#include "media.h"
using namespace std;
class movieItem : public Media {
 public:
  movieItem(const char t[], const char di[], int y, float d, float r);
  const char* getDirector();
  float getDuration();
  float getRating();
 private:
  char director[81];
  float duration;
  float rating;
};
void addMovie(vector<Media*>& database);
