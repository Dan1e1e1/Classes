#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Media {
 public:
  Media(const char t[], int y);
  const char* getTitle();
  int getYear();
 protected:
  char title[81];
  int year;
};
