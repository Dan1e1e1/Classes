#include <iostream>
#include <cstring>
#include <vector>
#include "video.h"
using namespace std;

videoItem::videoItem(const char t[], int y, const char p[], float r) : Media(t, y) {
  strcpy(publisher, p);
  rating = r;
}
const char* videoItem::getPublisher() {
  return publisher;
}

float videoItem::getRating() {
  return rating;
}
void addVideo(vector<Media*>& database) {
  char title[81];
  char publisher[81];
  int year;
  float rating;
  
  cout << "enter a title" << endl;
  cin.getline(title, 81);
  cout << "enter a year" << endl;
  cin >> year;
  cin.ignore(); //prevent skipping
  cout << "enter a publisher" << endl;
  cin.getline(publisher, 81);
  cout << "enter a rating" << endl;
  cin >> rating;
  cin.ignore();
  videoItem* item = new videoItem(title, year, publisher, rating);
  database.push_back(item);
  cout << "added video" << endl;
}
