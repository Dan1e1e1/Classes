#pragma once
#include <iostream>
#include <vector>
#include "media.h"

//using namepspace std;

class musicItem : public Media {
 public:
  musicItem(const char t[], const char a[], int y, float d, const char p[]);
  const char* getArtist();
  float getDuration();
  const char* getPublisher();
 private:
  char artist[81];
  float duration;
  char publisher[81];
};
void addMusic(vector<Media*>& database);
