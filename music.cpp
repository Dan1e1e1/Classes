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
float musicItem::getDuration() {
  return duration;
}
void addMusic(vector<Media*>& database) {
  char title[81];
  char artist[81];
  char publisher[81];
  int year;
  float duration;
  cout << "Enter a title" << endl;
  cin.getline(title, 81);
  cout << "Enter a year" << endl;
  cin >> year;
  cin.ignore();
  cout << "Enter an artist" << endl;
  cin.getline(artist, 81);
  cout << "Enter duration" << endl;
  cin >> duration;
  cin.ignore();//prevents skipping
  cout << "Enter a publisher" << endl;
  cin.getline(publisher, 81);

  musicItem* item = new musicItem(title, artist, year, duration, publisher);
  database.push_back(item);
  cout << "Added music" << endl;
}
void musicItem::print() {
  cout << "\n\n\n\n\n";
  cout << "Music" << endl;
  cout << "Title: " << getTitle() << endl;
  cout << "Artist: " << getArtist() << endl;
  cout << "Year: " << getYear() << endl;
  cout << "Duration: " << getDuration() << endl;
  cout << "Publisher: " << getPublisher() << endl;
}
