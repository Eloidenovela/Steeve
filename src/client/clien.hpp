#pragma once

#include "rpc/client.h"
namespace client {

    class client {
        rpc::client c;

        public:
            client(std::string addr, int port) : c(addr, port) 
            { }

            void call(std::string func_name);

    };
}