/* terminal.h
 * mendefinsikan header untuk terminal utama
 * 
 */

#ifndef TERMINAL_H
#define TERMINAL_H

#include "../main/superheader.h"

class terminal {
	private:
		string currDir;
	
	public:
		terminal();
		void start();
}
