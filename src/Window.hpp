#ifndef WINDOW_H
#define WINDOW_H

namespace proto {

  class Config;

  class Window {
    public:
      Window(Config& config);
      ~Window();
  };

} // !namespace proto

#endif // !WINDOW_H

