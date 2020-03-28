//
// Created by Oz Zafar on 28/03/2020.
//

#include <iostream>
#include "Container.h"


int Container::getWeight() const {
    return weight;
}

const char *Container::getDestinationPort() const {
    return destinationPort;
}

char *Container::getId() const {
    return id;
}

Container::Container(int weight, char destinationPort[], char *id) : weight(weight) {
    if (strlen((destinationPort))!=5){
        std::cout << "Error: destination port is illegal" << std::endl;
    } else {
        //this->destinationPort = new char[5];
        this->id = id;
    }
}


