#include <iostream>
#include <vector>

using namespace std;

//adding
void add();

void addVideo(char title, int year, char publisher, char rating);
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
  
  videoItem(const char* t, int y, const char* p, const char* r) {
    year = y;
    vector<videoItem> videoItemV;
  
  }
};
int main() {
  videoItem videoItemV;
  for (const auto& value : videoItemV) {
    cout << value;
  }
}
