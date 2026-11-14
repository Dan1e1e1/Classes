#include <iostream>
#include <cstring>
#include "media.h"
using namespace std;
//constructor
Media::Media(const char t[], int y) {
  strcpy(title, t); //copy title with t
  year = y; 
}
//destructor
Media::~Media() {
  cout << "Deleted media object" << endl;
}
const char* Media::getTitle() {
  return title;
}
int Media::getYear() {
  return year;
}
void Media::print() {
  cout << "Title: " << title << endl;
  cout << "Year: " << year << endl;
}
