#include <iostream>
#include "ll.h"

int main(int argc, char **argv) {
    LL l;
    for (int i = 1; i < argc; i++) {
        l.insert_node(i, argv[i]);
    }
    
    l.print_all();
}