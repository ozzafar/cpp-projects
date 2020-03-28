#include <iostream>
#include "cpp/Container.h"

int main() {
    Container container(0, "port", "id");
    char* id =  container.getId();
    std::cout << id << std::endl;
    return 0;
}
