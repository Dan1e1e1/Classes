#include <iostream>
#include <vector>
#include <cstring>
#include "video.h"
#include "music.h"
#include "movie.h"
#include <cstdlib>
using namespace std;

int main() {
  char input[7]; //used for the add, search, or delete
  char input1[6]; //used for video, music, or movie
  char find[81];
  int length;
  bool loop = true;
  vector<Media*> database;
  while (loop == true) {
    cout << "Enter ADD, SEARCH, DELETE, or QUIT" << endl;
    cin.getline(input, 7);
    if (strcmp(input, "ADD") == 0) {
      cout << "Enter VIDEO, MUSIC, or MOVIE" << endl;
      cin.getline(input1, 6);
      if (strcmp(input1, "VIDEO") == 0) {
	addVideo(database);
      }
      if (strcmp(input1, "MUSIC") == 0) {
	addMusic(database);
      }
      if (strcmp(input1, "MOVIE") == 0) {
	addMovie(database);
      }
    }
    if (strcmp(input, "SEARCH") == 0) {
      cout << "Enter the title or year in the media database" << endl;
      cin.getline(find, 81);
      bool found = false;
      length = database.size();
      for (int i = 0; i < length; i++) {
	if (strcmp(find, database[i]->getTitle()) == 0) {
	  database[i]->print();
	  found = true;
	}
	if (atoi(find) == database[i]->getYear()) {
	  database[i]->print();
	  found = true;
	}
      }
      if (found == false) {
	cout << "Sorry, that wasnt a valid title or year, try again";
      }
    }
    if (strcmp(input, "DELETE") == 0) {
      cout << "Enter the title or year in the media database" << endl;
      cin.getline(find, 81);
      bool found = false;
      for (int i = 0; i < length; i++) {
	if (strcmp(find, database[i]->getTitle()) || (atoi(find) == database[i]->getYear()) == 0) {
	  database[i]->print();
	  found = true;
	  char confirmation;
	  cout << "Are you sure you want to delete this item?(y/n)" << endl;
	  cin >> confirmation;
	  cin.ignore();
	  if (confirmation == 'y') {
	    delete database[i];
	  }
	}
      }
      if (found == false) {
	cout << "Sorry, that wasnt a valid title or year, try again";
      }
    }
    if (strcmp(input, "QUIT") == 0) {
      loop = false;
    }
  }
  //vector<Media*> database;
  //addMovie(database);
  //cout << database[0]->getTitle();
  //cout << database[0]->getYear();
  return 0; 

}
