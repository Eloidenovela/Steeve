#include "terminal.hpp"

namespace terminal {

    std::string exec(std::string cmd) {
        std::array<char, 128> buffer;
        std::string res;

        std::unique_ptr<FILE, decltype(&pclose)> pipe(popen(cmd.c_str(), "r"), pclose);

        if (!pipe)
            throw std::runtime_error("falha");
        
        while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr) {
            res += buffer.data();
        }

        return res;
    }

}