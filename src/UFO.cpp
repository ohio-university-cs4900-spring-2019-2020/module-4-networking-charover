#include "UFO.h"

#ifdef AFTR_CONFIG_USE_BOOST

using namespace Aftr;

UFO* UFO::New(Vector position, const std::string file) {
    return new UFO(position, file);
}

UFO::UFO(Vector position, const std::string file) {
    this -> ufo = WO::New(file);
    this -> ufo -> setPosition(20,80,40);
    //this-> ufo-> rotateAboutGlobalX(1.571);
}

#endif