#ifndef PROTO_H
#define PROTO_H

namespace proto {
  extern int start(int argc, char* argv[], void(*appMain)(int, char**));
} // !namespace proto

#define PROTO_APPMAIN(appMain) int main(int argc, char* argv[]){return proto::start(argc, argv, appMain);}

// * Proto Modules
// By defining the PROTO_NO_{MODULE_NAME} tags prior to including the Proto.hpp file
// You can control which modules are included into your code files to keep files lean
// For example, If you know you won't use any graphics in a cpp file, you can define
// PROTO_NO_GRAPHICS and that module will not be included into your cpp file, thus you
// Will have a leaner compilation unit and lower compile times.

#ifndef PROTO_NO_APPLICATION
#include "Application.hpp"
#endif

#ifndef PROTO_NO_AUDIO
#include "Audio.hpp"
#endif

#ifndef PROTO_NO_CONFIG
#include "Config.hpp"
#endif

#ifndef PROTO_NO_GRAPHICS
#include "Graphics.hpp"
#endif

#ifndef PROTO_NO_INPUT
#include "Input.hpp"
#endif

#ifndef PROTO_NO_WINDOW
#include "Window.hpp"
#endif

#endif // !PROTO_H

