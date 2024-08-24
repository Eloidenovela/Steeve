#pragma once

#include "rpc/server.h"
#include <string>

namespace server {

    class server {
        rpc::server s;
        public:
            server(std::string addr, int port) 
                :s(addr, port) 
            { }

            void run();
    };

}