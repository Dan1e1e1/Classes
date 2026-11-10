#include <iostream>
#include "videochild.h"
using namespace std;

class video {
 public:
  //constructor
  video(char title, int year, char publisher, char rating);
  char getTitle();
  int getYear();
  char getPublisher();
  char getRating();
 protected:
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
