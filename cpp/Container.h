//
// Created by Oz Zafar on 28/03/2020.
//

#ifndef CPP_PROJECTS_CONTAINER_H
#define CPP_PROJECTS_CONTAINER_H

#include <cstring>

class Container {
    int weight;
    char destinationPort[5];
    char *id;

public:
    Container(int weight, char *destinationPort, char *id);

    int getWeight() const;

    const char *getDestinationPort() const;

    char *getId() const;

};


#endif //CPP_PROJECTS_CONTAINER_H
