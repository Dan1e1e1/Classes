#include <iostream>
#include <cstring>
#include <vector>
#include "music.h"
//using namespace std;
musicItem::musicItem(const char t[], const char a[], int y, float d, const char p[]) : Media(t, y) {
  strcpy(artist, a);
  duration = d;
  strcpy(publisher, p);
}
const char* musicItem::getArtist() {
  return artist;
}
const char* musicItem::getPublisher() {
  return publisher;
}
void addMusic(vector<Media*>& database) {
  char title[81];
  char artist[81];
  char publisher[81];
  int year;
  float duration;
  cout << "Enter a title: ";
  cin.getline(title, 81);
  cout << "Enter a year: ";
  cin >> year;
  cin.ignore();
  cout << "Enter duration: ";
  cin >> duration;
  cout << "Enter a publisher: ";
  cin.ignore();
  cin.getline(publisher, 81);

  musicItem* item = new musicItem(title, artist, year, duration, publisher);
  database.push_back(item);
  cout << "Added music" << endl;
}
