/*	superblock.h
 * 	deskripsi superblock
 * 
 * 
 */
#ifndef SUPERBLOCK_H
#define SUPERBLOCK_H

#include "superheader.h"
#include "inode.h"
#include "datablock.h"

typedef struct SuperBlock {
								//Jml Byte	: deskripsi
	byte fs_magicnumber;		//1			: magic number
	
	t_Inode* inode_first;		//1 		: alamat block tempat inode pertama
	//harusnya ada bitmap
	ui inode_count;				//4			: jumlah seluruh inode yang bisa ditampung
	ui inode_free;				//4			: jumlah inode yang kosong

} t_SuperBlock;

#endif
