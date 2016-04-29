#include <MyQuasarSubModuleClass.h>

#include <iostream>

using namespace MyQuasarModule;

MyQuasarSubModuleClass::MyQuasarSubModuleClass()
{
	// FIXME: add component logging
	std::cout << "ctor MyQuasarSubModuleClass." << std::endl;
}

MyQuasarModuleClass::~MyQuasarModuleClass()
{
	// FIXME: add component logging
	std::cout << "dtor MyQuasarSubModuleClass." << std::endl;
}
