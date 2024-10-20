#ifndef DLL_H_INCLUDED
#define DLL_H_INCLUDED
#include <iostream>
#define info(P) P->info
#define next(P) P->next
#define prev(P) P->prev
#define first(L) L.first
#define last(L) L.last

using namespace std;

struct lagu {
    string namaBand;
    string judulLagu;
};

typedef lagu infotype;
typedef struct elmList *address;

struct elmList {
    infotype info;
    address next;
    address prev;
};

struct List {
    address first;
    address last;
};

bool isEmpty_103012300012(List L);
void createList_103012300012(List &L);
void createNewElmt_103012300012(infotype X, address &P);

void insertFirst_103012300012(List &L, address P);
void inserAfter_103012300012(List &L, address &Prec, address &P);
void insertLast_103012300012(List &L, address P);

void deleteFirst_103012300012(List &L, address &P);
void deleteAfter_103012300012(List &L, address &Prec, address &P);
void deleteLast_103012300012(List &L, address &P);\

void concat_103012300012(List L1, List L2, List &L3);
address findLagu_103012300012(string judulLagu, List L);
void removeLagu_103012300012(string judulLagu, List &L);


#endif // DLL_H_INCLUDED
