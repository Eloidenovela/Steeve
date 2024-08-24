#include "server/server.hpp"

int main(int argc, char** argv) {

    server::server s("0.0.0.0", 8080);
    s.run();

    return 0;
}
