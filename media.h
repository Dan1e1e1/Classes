#pragma once
#include <iostream>
#include <cstring>
using namespace std;

class Media {
 public:
  Media(const char t[], int y);
  virtual ~Media();
  const char* getTitle();
  int getYear();
  virtual void print();
 protected:
  char title[81];
  int year;
};
