#include "Proto.hpp"

void appMain(int argc, char* argv[]) {
  proto::Config config(argc, argv);

  proto::Window window(config);

  proto::Input input(config);

  proto::Graphics graphics(config, window);

  proto::Audio audio(config);

  proto::Application application(
    config,
    window,
    input,
    graphics,
    audio);

  application.start();
}

PROTO_APPMAIN(appMain);
