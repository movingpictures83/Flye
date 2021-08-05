#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "FlyePlugin.h"


void FlyePlugin::input(std::string file) {
	 inputfile = file;
 std::ifstream ifile(inputfile.c_str(), std::ios::in);


 std::string temp;
 ifile >> dataType;
 ifile >> dataFile;
 ifile >> genomeSize;
}

void FlyePlugin::run() {
   
}

void FlyePlugin::output(std::string file) {
	// flye --nano-raw LongReads.fastq.gz --genome-size 7.2m --out-dir 02_flye
	 std::string outputfile = file;
	 std::string command = "flye --"+dataType+" "+std::string(PluginManager::prefix())+"/"+dataFile+" --genome-size "+genomeSize+" --out-dir "+outputfile;
	 std::cout << command << std::endl;
 system(command.c_str());
}

PluginProxy<FlyePlugin> FlyePluginProxy = PluginProxy<FlyePlugin>("Flye", PluginManager::getInstance());
