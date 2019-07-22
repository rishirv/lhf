#pragma once

// Header file for denStream class - see denStream.cpp for descriptions
#include <map>
#include "preprocessor.hpp"

class denStream : public preprocessor {
  private:
		
  	
  public:
  denStream();
  pipePacket runPreprocessor(pipePacket inData);
  bool configPreprocessor(std::map<std::string, std::string> configMap);
}; 