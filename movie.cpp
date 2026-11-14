#include <iostream>
#include <cstring>
#include <vector>
#include "movie.h"
//using namespace std;
movieItem::movieItem(const char t[], const char di[], int y, float d, float r) : Media(t, y) {
  strcpy(director, di);
  duration = d;
  rating = r;
}
const char* movieItem::getDirector() {
  return director;
}
float movieItem::getDuration() {
  return duration;
}
float movieItem::getRating() {
  return rating;
}
void addMovie(vector<Media*>& database) {
  char title[81];
  char director[81];
  int year;
  float duration;
  float rating;
  cout << "Enter movie title" << endl;
  cin.getline(title, 81);
  cout << "Enter a director" << endl;
  cin.getline(director, 81);
  cout << "Enter year" << endl;
  cin >> year;
  cout << "Enter duration" << endl;
  cin >> duration;
  cout << "Enter rating out of 10" << endl;
  cin >> rating;
  cin.ignore();
  movieItem* item = new movieItem(title, director, year, duration, rating);
  database.push_back(item);
  cout << "added movie" << endl;
}
void movieItem::print() {
  cout << "\n\n\n\n\n";
  cout << "Movie" << endl;
  cout << "Title: " << getTitle() << endl;
  cout << "Director: " << getDirector() << endl;
  cout << "Year: " << getYear() << endl;
  cout << "Duration: " << getDuration() << endl;
  cout << "Rating: " << getRating() << endl;
}
