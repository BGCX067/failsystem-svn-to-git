/*	inode.h
 * 	definisi inode
 * 
 * 
 */

#include "superheader.h"
#include "datablock.h"

typedef struct Inode {
	ui inode_size;			//4 Byte 	: Ukuran Inode dalam Byte
	ui file_size;			//4 Byte	: Ukuran file dalam Byte
	t_Block* file_address;	//1 Byte	: Alamat block file pertama
	t_Block* file_parrent;	//1 Byte	: Alamat block yang merupakan parrent dari file yang ditunjuk oleh Inode
	byte file_type;			//1 Byte	: Penunjuk tipe file
	
	
} t_Inode;
