#include "terminal.h"

terminal::terminal() {
	currDir = "/";
}

void terminal::start() {
	std::cout << "fsgila:~" << currDir;
	
}
