//
// Created by marcin2 on 04.08.17.
//

#include <iostream>
#include "Atom.h"

int Atom::total_count = 0;

Atom::Atom() {
    total_count++;
    number = total_count;
    std::cout<<number<<" - "<<"Atom object is being created"<<stdd::endl;
}

Atom::~Atom() {
    std::cout<<number<<" - "<<"Atom object is being destroyed"<<std::endl;
    total_count--;
}
