#ifndef GRAPHICS_H
#define GRAPHICS_H

namespace proto {

  class Config;
  class Window;

  class Graphics {
    public:
      Graphics(Config& config, Window& window);
      ~Graphics();
  };

} // !namespace proto

#endif // !GRAPHICS_H

