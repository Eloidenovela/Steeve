#include "server.hpp"
#include <iostream>
#include <string>
#include "../terminal/terminal.hpp"

namespace server {

    void server::run() {
        s.bind("steeve", [&](){
            while (true) {
                std::string command;
                std::cout << "s/> ";
                std::cin >> command;
                std::cout << terminal::exec(command) << std::endl;

                if (command == "exit")
                    return "bye";
            }
        });

        s.run();
    }
}