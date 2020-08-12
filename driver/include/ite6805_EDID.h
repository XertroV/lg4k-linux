///*****************************************
//  Copyright (C) 2009-2017
//  ITE Tech. Inc. All Rights Reserved
//  Proprietary and Confidential
///*****************************************
//   @file   <iTE6805_EDID.h>
//   @author Kuro.Chung@ite.com.tw
//   @date   2017/12/01
//   @fileversion: iTE6805_MCUSRC_1.10
//******************************************/

#ifndef _ITE6805_EDID_H_
#define _ITE6805_EDID_H_

#include "it6664_typedef.h"


#ifndef EDID_SELECT_TABLE
#define EDID_SELECT_TABLE	(16)  // 8->16 only 3840 EDID
#endif

// add by AndyNien, 20171209, const 
iTE_u8  Default_Edid_Block[256] = {			
// AverMedia GC573 EDID	// !!!!!!!!!! here we make 6663 & 68051 with same edid !!!!!!!!!//
// refer ite6664_defaultEDID.h add by AndyNien, 20171115				//
//////////////////////////////////////////////////////////////////////////////////////////

0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x06, 0xd8, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00,
0x24, 0x1c, 0x01, 0x03, 0x80, 0xa0, 0x5a, 0x78, 0xea, 0x08, 0xa5, 0xa2, 0x57, 0x4f, 0xa2, 0x28,
0x0f, 0x50, 0x54, 0x25, 0x0b, 0x00, 0xd1, 0xc0, 0x81, 0xc0, 0x81, 0x80, 0x81, 0x00, 0x8b, 0xc0,
0x95, 0x00, 0xb3, 0x00, 0x3b, 0x80, 0x08, 0xe8, 0x00, 0x30, 0xf2, 0x70, 0x5a, 0x80, 0xb0, 0x58,
0x8a, 0x00, 0x6d, 0x55, 0x21, 0x00, 0x00, 0x1e, 0x02, 0x3a, 0x80, 0x18, 0x71, 0x38, 0x2d, 0x40,
0x58, 0x2c, 0x45, 0x00, 0x40, 0x84, 0x63, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0xfc, 0x00, 0x41,
0x56, 0x54, 0x20, 0x43, 0x4c, 0x35, 0x31, 0x31, 0x2d, 0x48, 0x4e, 0x0a, 0x00, 0x00, 0x00, 0xfd,
0x00, 0x32, 0xf0, 0x1e, 0xde, 0x3c, 0x00, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x01, 0x7f,
0x02, 0x03, 0x50, 0x70, 0x5e, 0x61, 0x60, 0x66, 0x65, 0x5f, 0x5e, 0x5d, 0x10, 0x1f, 0x5a, 0x3f,
0x05, 0x14, 0x04, 0x13, 0x12, 0x11, 0x03, 0x02, 0x01, 0x22, 0x21, 0x20, 0x16, 0x15, 0x07, 0x06,
0x62, 0x63, 0x64, 0x23, 0x0f, 0x07, 0x07, 0x83, 0x4f, 0x00, 0x00, 0x6e, 0x03, 0x0c, 0x00, 0x10,
0x00, 0x38, 0x3c, 0x20, 0x00, 0x80, 0x01, 0x02, 0x03, 0x04, 0x67, 0xd8, 0x5d, 0xc4, 0x01, 0x78,
0x80, 0x03, 0xe2, 0x00, 0x4f, 0xe3, 0x05, 0xc0, 0x00, 0xe2, 0x0f, 0x0f, 0xe3, 0x06, 0x05, 0x01,
0x56, 0x5e, 0x00, 0xa0, 0xa0, 0xa0, 0x29, 0x50, 0x30, 0x20, 0x35, 0x00, 0x55, 0x50, 0x21, 0x00,
0x00, 0x1e, 0xfc, 0x7e, 0x80, 0x88, 0x70, 0x38, 0x12, 0x40, 0x18, 0x20, 0x35, 0x00, 0x20, 0x2f,
0x21, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84,
};

// this is the fixed edid, cannot be change
//
//
// note: this block is fixed, 
//       so, if user doing edid restore defauld api, system will copy this block to Default_Edid_Block
//
 iTE_u8  Fix_Edid_Block_Number = 2;
 iTE_u8  Fix_Edid_Block[256] = {				
0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00,  0x06, 0xd8, 0x42, 0x00, 0x00, 0x00, 0x00, 0x00,
0x24, 0x1c, 0x01, 0x03, 0x80, 0xa0, 0x5a, 0x78,  0xea, 0x08, 0xa5, 0xa2, 0x57, 0x4f, 0xa2, 0x28,
0x0f, 0x50, 0x54, 0x25, 0x0b, 0x00, 0xd1, 0xc0,  0x81, 0xc0, 0x81, 0x80, 0x81, 0x00, 0x8b, 0xc0,
0x95, 0x00, 0xb3, 0x00, 0x3b, 0x80, 0x08, 0xe8,  0x00, 0x30, 0xf2, 0x70, 0x5a, 0x80, 0xb0, 0x58,
0x8a, 0x00, 0x6d, 0x55, 0x21, 0x00, 0x00, 0x1e,  0x02, 0x3a, 0x80, 0x18, 0x71, 0x38, 0x2d, 0x40,
0x58, 0x2c, 0x45, 0x00, 0x40, 0x84, 0x63, 0x00,  0x00, 0x1e, 0x00, 0x00, 0x00, 0xfc, 0x00, 0x41,
0x56, 0x54, 0x20, 0x43, 0x4c, 0x35, 0x31, 0x31,  0x2d, 0x48, 0x4e, 0x0a, 0x00, 0x00, 0x00, 0xfd,
0x00, 0x32, 0xf0, 0x1e, 0xde, 0x3c, 0x00, 0x0a,  0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x01, 0x7f,
0x02, 0x03, 0x50, 0x70, 0x5e, 0x61, 0x60, 0x66,  0x65, 0x5f, 0x5e, 0x5d, 0x10, 0x1f, 0x5a, 0x3f,
0x05, 0x14, 0x04, 0x13, 0x12, 0x11, 0x03, 0x02,  0x01, 0x22, 0x21, 0x20, 0x16, 0x15, 0x07, 0x06,
0x62, 0x63, 0x64, 0x23, 0x0f, 0x07, 0x07, 0x83,  0x4f, 0x00, 0x00, 0x6e, 0x03, 0x0c, 0x00, 0x10,
0x00, 0x38, 0x3c, 0x20, 0x00, 0x80, 0x01, 0x02,  0x03, 0x04, 0x67, 0xd8, 0x5d, 0xc4, 0x01, 0x78,
0x80, 0x03, 0xe2, 0x00, 0x4f, 0xe3, 0x05, 0xc0,  0x00, 0xe2, 0x0f, 0x0f, 0xe3, 0x06, 0x05, 0x01,
0x56, 0x5e, 0x00, 0xa0, 0xa0, 0xa0, 0x29, 0x50,  0x30, 0x20, 0x35, 0x00, 0x55, 0x50, 0x21, 0x00,
0x00, 0x1e, 0xfc, 0x7e, 0x80, 0x88, 0x70, 0x38,  0x12, 0x40, 0x18, 0x20, 0x35, 0x00, 0x20, 0x2f,
0x21, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00,  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x84,

};



void iTE6805_EDID_RAMInitial(void *ite6805_handle);
void iTE6805_EDID_ParseVSDB_3Dblock(void *ite6805_handle);
iTE_u8 iTE6805_EDID_UpdateRAM(void *ite6805_handle, iTE_u8 *pEDID,iTE_u8 BlockNUM);
iTE_u8 iTE6805_EDID_Find_Phyaddress(iTE_u8 *pEDID);

#endif // _ITE6805_EDID_H_
