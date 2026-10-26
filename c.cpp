#include <iostream>
using namespace std;

class parent {
 protected:
  char title;
  int year;
 private:
  char publisher;
  int rating;
  int duration;
  char director;
 public:
  char* getTitle();
  int getYear();
  char* getPublisher();
  int getRating();
  int getDuration();
  char* getDirector();
};
