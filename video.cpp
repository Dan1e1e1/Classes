#include <iostream>
#include "video.h"
using namespace std;

//class videoItem {
//public:
//char title[81];
//int year;
//char publisher[81];
//char rating[81];
//videoItem() {}
//videoItem(const char* t, int y, const char* p, const char* r) {
//  strncpy(title, t, sizeof(title) - 1);
//  year = y;
//  vector<videoItem> v;
//  strncpy(publisher, p, sizeof(publisher) - 1);
//  strncpy(rating, r, sizeof(rating) - 1);
//}
//};



void video::addVideo() {
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
  //return v;
}
