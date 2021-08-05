#ifndef FLYEPLUGIN_H
#define FLYEPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>
#include <vector>

class FlyePlugin : public Plugin
{
public: 
 std::string toString() {return "Flye";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;
 std::string dataType;
 std::string dataFile;
 std::string genomeSize;
};

#endif
