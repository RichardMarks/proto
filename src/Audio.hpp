#ifndef AUDIO_H
#define AUDIO_H

namespace proto {

  class Config;

  class Audio {
    public:
      Audio(Config& config);
      ~Audio();
  };

} // !namespace proto

#endif // !AUDIO_H

