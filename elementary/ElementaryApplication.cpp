//
// Created by marcin2 on 04.08.17.
//

#include "ElementaryApplication.h"
#include "Atom.h"

#include <iostream>
#include <list>

void ElementaryApplication::run() {
    std::cout<<"Hello world!"<<std::endl;

    std::cout<<"I'm proceeding to have fun with containers."<<std::endl;
    fun_with_containers();
}

void ElementaryApplication::fun_with_containers() {
    /* The objects inside container are destroyed when container
     * is being destroyed but if you store pointers they won't be
     * destroyed automatically. You must do it by yourself.
     */

    auto create_list_of_n_atoms = [=](int n){
        std::list<Atom*> l;
        for(int i = 0; i<n; i++) {
            auto atom = new Atom();
            l.push_back(atom);
        }
        return l;
    };
    std::list<Atom*> list_of_atoms = create_list_of_n_atoms(110);
    for(auto it = list_of_atoms.cbegin(); it != list_of_atoms.cend(); it++){
        std::cout<<(*it)->number<<std::endl;
    }
    for(auto x : list_of_atoms){
        delete x;
    }
}
