#include <iostream>
#include <string>
using namespace std;

#define N_MANGA 3

struct manga_t {
    int year;
    string title;
    string author;
} manga[N_MANGA];

struct person_t {
    string name;
    int age;
    manga_t favManga;
};

void printManga(manga_t m);

int main() {
    int i;
    manga_t kor;
    manga_t *pManga;
    person_t mauro;

    // dereferencing struct values and assignment
    manga[0].year = 2002;
    manga[0].title = "Rosario Vampire";
    manga[0].author = "Akihisa Ikeda";
    manga[1].year = 1999;
    manga[1].title = "Nightmare of Fabrication";
    manga[1].author = "Yoshitoshi Abe";
    manga[2].year = 1974;
    manga[2].title = "Tiger Mask";
    manga[2].author = "Unknown";

    for (i = 0; i < N_MANGA; i++) {
        printManga(manga[i]);
    }

    // pointers to structs
    pManga = &kor;
    pManga->year = 1990;
    pManga->author = "Izumi Matsumoto";
    pManga->title = "Kimagure Orange Road";

    printManga(*pManga);

    // nested structs
    mauro.name = "Mauro Bisiani";
    mauro.age = 39;
    mauro.favManga = manga[1];

    printManga(mauro.favManga);

    return 0;
}

void printManga(manga_t m) {
    cout << "Year: " << m.year << endl;
    cout << "Title: " << m.title << endl;
    cout << "Author: " << m.author << endl;
    return;
}















