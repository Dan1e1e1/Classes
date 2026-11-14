#pragma once
#include <iostream>
#include <vector>
#include "media.h"
using namespace std;
//Inheriting from Media
class videoItem : public Media {
 public:
  //constructor
  videoItem(const char t[], int y, const char p[], float r);
  const char* getPublisher();
  float getRating();
  void print() override;
 private:
  char publisher[81];
  float rating;

};
void addVideo(vector<Media*>&database);





