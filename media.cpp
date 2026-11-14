#include <iostream>
#include <cstring>
#include "media.h"
//constructor
Media::Media(const char t[], int y) {
  strcpy(title, t); //copy title with t
  year = y; 
}
const char* Media::getTitle() {
  return title;
}
int Media::getYear() {
  return year;
}
void Media::print() {
  cout << "Title: " << title << endl;
  cout << "Year: " << endl;
}
