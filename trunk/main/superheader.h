/* superheader.h
 * beberapa tipe terstruktur yang digunakan di setiap header lain pada deskripsi filesystem
 * 
 */

#ifndef SUPER_H
#define SUPER_H

enum bool {false=0, true=1};	//boolean

typedef unsigned char byte;		//byte
typedef unsigned int ui;		//unsigned integer

//perintah yang disediakan
string endCmd = "--";
string cmd[] = {"pwd", "cp", "cat", "mv", "rm", "status", "cd", "mkdir", "ls", endCmd};
int numberOfCmd = 9;

#endif
