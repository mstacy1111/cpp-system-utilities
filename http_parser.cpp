#include <iostream>
#include <sstream>
#include <string>

void parseHttpRequest(const std::string& request) {
    std::istringstream stream(request);
    std::string line;
    while (std::getline(stream, line) && line != "\r") {
        std::cout << "Line: " << line << std::endl;
    }
}
