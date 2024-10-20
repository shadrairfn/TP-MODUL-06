#include <iostream>
#include "dll.h"

using namespace std;

bool isEmpty_103012300012(List L){
    if (first(L) == NULL) {
        return true;
    }
    return false;
}

void createList_103012300012(List &L) {
    first(L) = NULL;
    last(L) = NULL;
}

void createNewElmt_103012300012(infotype X, address &P) {
    P = new elmList;
    info(P) = X;
    next(P) = NULL;
    prev(P) = NULL;
}

void insertFirst_103012300012(List &L, address P) {
    if (isEmpty_103012300012(L)) {
        first(L) = P;
        last(L) = P;
    } else {
        next(P) = first(L);
        prev(first(L)) = P;
        first(L) = P;
    }
}

void inserAfter_103012300012(List &L, address &Prec, address &P) {
    if (Prec != last(L)) {
        next(P) = next(Prec);
        next(Prec) = P;
        prev(next(P)) = P;
        prev(P) = Prec;
    } else {
        next(Prec) = P;
        prev(P) = Prec;
        last(L) = P;
    }
}

void insertLast_103012300012(List &L, address P) {
    if (isEmpty_103012300012(L)) {
        first(L) = P;
        last(L) = P;
    } else {
        next(last(L)) = P;
        prev(P) = last(L);
        last(L) = P;
    }
}

void deleteFirst_103012300012(List &L, address &P) {
    if (isEmpty_103012300012(L)) {
        P = NULL;
    } else {
        P = first(L);
        first(L) = next(P);
        prev(first(L)) = NULL;
        next(P) = NULL;
    }
}

void deleteAfter_103012300012(List &L, address &Prec, address &P) {
    P = next(Prec);
    next(Prec) = next(P);
    prev(next(P)) = Prec;
    next(P) = NULL;
    prev(P) = NULL;
}

void deleteLast_103012300012(List &L, address &P) {
    if (isEmpty_103012300012(L)) {
        P = NULL;
    } else {
        P = last(L);
        last(L) = prev(P);
        next(last(L)) = NULL;
        prev(P) = NULL;
    }
}

void concat_103012300012(List L1, List L2, List &L3) {
    createList_103012300012(L3);
    address p = first(L1);
    while (p != NULL) {
        address newP;
        createNewElmt_103012300012(info(p), newP);
        insertLast_103012300012(L3, newP);
        p = next(p);
    }
    p = first(L2);
    while (p != NULL) {
        address newP;
        createNewElmt_103012300012(info(p), newP);
        insertLast_103012300012(L3, newP);
        p = next(p);
    }
}

address findLagu_103012300012(string judulLagu, List L) {
    address p = first(L);
        while (p != NULL) {
            if (info(p).judulLagu == judulLagu) {
                return p;
            }
            p = next(p);
        }
    return p;
}

void removeLagu_103012300012(string judulLagu, List &L) {
    address q;
    address p = first(L);
    p = findLagu_103012300012(judulLagu, L);
    if (p == first(L)) {
        deleteFirst_103012300012(L, q);
    } else if (p == last(L)) {
        deleteLast_103012300012(L, q);
    } else {
        deleteAfter_103012300012(L, prev(p), q);
    }

}
