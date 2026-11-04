#include <iostream>
#include "parent.h"
using namespace std;

class video {
 public:
  char getTitle();
  int getYear();
  char getPublisher();
  char getRating();
 private:
  char title;
  int year;
  char publisher;
  char rating;
};

//videoItem() {}
 //videoItem(const char* t, int y, const char* p, const char* r) {
//strncpy(title, t, sizeof(title) - 1);
//year = y;
//vector<videoItem> v;
//strncpy(publisher, p, sizeof(publisher) - 1);
//strncpy(rating, r, sizeof(rating) - 1);
