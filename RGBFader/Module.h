#ifndef MODULE
#define MODULE

#define MAX_PROFILES 10


struct colour{
  byte r;
  byte g;
  byte b;
};

struct colourV{
  byte lowV;
  byte highV;
};

struct stage{
  colour c;
  byte brighntess;
  byte maxBrightness;
};

struct PROFILE{
  byte id;
  int stageNum;
  stage stage0;
  stage stage1;
  stage stage2;
};

class Module{
private:
  PROFILE* profiles[];
  int nextProfileID();
public:
  Module();
  ~Module();
  void addProfile(PROFILE*);
  int nextProfile();
  void switchProfile();
  void updateColour();
};

#endif
