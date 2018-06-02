#ifndef APPLICATION_H
#define APPLICATION_H

namespace proto {

  class Config;
  class Window;
  class Input;
  class Graphics;
  class Audio;

  class Application {
    public:
      Application(
        Config& config,
        Window& window,
        Input& input,
        Graphics& graphics,
        Audio& audio);
      ~Application();
      void start();
  };

} // !namespace proto

#endif // !APPLICATION_H

