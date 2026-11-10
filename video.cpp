#include <iostream>
#include <vector>
#include "video.h"
using namespace std;

vector<videoItem> addVideo() {
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
