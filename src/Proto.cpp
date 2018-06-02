#include "Proto.hpp"

#include <iostream>
#include <sstream>
#include <stdexcept>

namespace proto {

  int start(int argc, char* argv[], void(*appMain)(int, char**)) {
    try {
      appMain(argc, argv);
    } catch (std::exception& ex) {
      std::stringstream msg;

      msg
        << "[FATAL] Proto has encountered an error and cannot continue: \n"
        << ex.what();

      std::cerr << msg.str() << std::endl;

      return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
  }

} // !namespace proto

