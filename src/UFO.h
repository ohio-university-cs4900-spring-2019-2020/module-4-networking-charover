#pragma once

#include "Model.h"
#include "WO.h"

#ifdef AFTR_CONFIG_USE_BOOST

namespace Aftr
{

class UFO
{
public:
   static UFO* New(Vector position = Vector(0, 0, 0), const std::string file = "../mm/models/grunt.3ds");
   void setPosition(float x, float y, float z) {
     ufo -> setPosition(Vector(x, y, z));
   };
   void setPosition(Vector v) {
     ufo -> setPosition(v);
   };
   Vector getPosition() {
     return ufo -> getPosition();
   };
   WO* getUfo() {
     return ufo;
   };

protected:
   WO* ufo;

   UFO(Vector position = Vector(0, 0, 0), const std::string file = "../mm/models/grunt.3ds");
};

}

#endif