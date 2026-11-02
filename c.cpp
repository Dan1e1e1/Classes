#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

//adding
void add();

void addVideo();

void addMusic(char title, char artist, int year, int duration, char publisher);
void addMovie(char title, char director, int year, int duration, char rating);

void printTitle();
void printYear();

class videoItem {
 public:
  char title[81];
  int year;
  char publisher[81];
  char rating[81];
  videoItem() {}
  videoItem(const char* t, int y, const char* p, const char* r) {
    strncpy(title, t, sizeof(title) - 1);
    year = y;
    vector<videoItem> v;
    strncpy(publisher, p, sizeof(publisher) - 1);
    strncpy(rating, r, sizeof(rating) - 1);

  
  }
};
int main() {
  char action[5];
  cout << "what do you want to do?" << endl;
  cin.getline(action, 5);
  if (strcmp(action, "add") == 0) {
    addVideo();
  }
  videoItem* videoPtr = new videoItem();
//for (const auto& value : v) {
// cout << value;
// }
}
void addVideo() {
  vector<videoItem> v;
  videoItem item;
  cout << "enter a title ";
  cin >> item.title;
  cout << "enter a year";
  cin >> item.year;
  cout << "enter a publisher";
  cin >> item.publisher;
  cout << "enter a rating";
  cin >> item.rating;
  v.push_back(item);
  return v;
}
