#ifndef _5_PNG_H
#define _5_PNG_H

#include <wx/mstream.h>
#include <wx/image.h>
#include <wx/bitmap.h>

static const unsigned char _5_png[] =
{
	0x89, 0x50, 0x4E, 0x47, 0x0D, 0x0A, 0x1A, 0x0A, 0x00, 0x00, 
	0x00, 0x0D, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0xB6, 
	0x00, 0x00, 0x00, 0x0D, 0x08, 0x06, 0x00, 0x00, 0x00, 0x04, 
	0xFD, 0x94, 0xB2, 0x00, 0x00, 0x00, 0x01, 0x73, 0x52, 0x47, 
	0x42, 0x00, 0xAE, 0xCE, 0x1C, 0xE9, 0x00, 0x00, 0x00, 0x04, 
	0x67, 0x41, 0x4D, 0x41, 0x00, 0x00, 0xB1, 0x8F, 0x0B, 0xFC, 
	0x61, 0x05, 0x00, 0x00, 0x00, 0x09, 0x70, 0x48, 0x59, 0x73, 
	0x00, 0x00, 0x0E, 0xC4, 0x00, 0x00, 0x0E, 0xC4, 0x01, 0x95, 
	0x2B, 0x0E, 0x1B, 0x00, 0x00, 0x00, 0x7C, 0x49, 0x44, 0x41, 
	0x54, 0x68, 0x43, 0xED, 0xD9, 0xBB, 0x09, 0x80, 0x40, 0x10, 
	0x84, 0xE1, 0x3D, 0x8D, 0xC5, 0x06, 0x0C, 0x6D, 0xE3, 0x30, 
	0x36, 0xB2, 0x20, 0x53, 0xC1, 0xE6, 0xEC, 0xC2, 0xD8, 0x58, 
	0x8C, 0x7C, 0x2E, 0xC6, 0x26, 0xC2, 0x31, 0xFC, 0x1F, 0x1C, 
	0x33, 0x05, 0x0C, 0x9B, 0x5C, 0x30, 0xB3, 0xFD, 0x7C, 0x80, 
	0x94, 0xCC, 0x13, 0x90, 0xF2, 0x5E, 0xEC, 0xA5, 0xAA, 0xAF, 
	0xF8, 0x4D, 0x39, 0x6E, 0xDE, 0xBE, 0xC9, 0xBB, 0xD9, 0x5B, 
	0x9A, 0x42, 0xE1, 0x25, 0x51, 0x4D, 0x3B, 0x79, 0x7B, 0x0C, 
	0xFD, 0xEA, 0x4D, 0x5B, 0x8C, 0xF1, 0x4E, 0x2E, 0x36, 0x24, 
	0x31, 0x6C, 0x48, 0x62, 0xD8, 0x90, 0xC4, 0xB0, 0x21, 0x89, 
	0x61, 0x43, 0x12, 0xC3, 0x86, 0x24, 0x86, 0x0D, 0x49, 0x0C, 
	0x1B, 0x92, 0xF8, 0x52, 0x87, 0x24, 0x2E, 0x36, 0x04, 0x99, 
	0x1D, 0x87, 0x3F, 0x0B, 0x15, 0xE3, 0xCF, 0x63, 0x2A, 0x00, 
	0x00, 0x00, 0x00, 0x49, 0x45, 0x4E, 0x44, 0xAE, 0x42, 0x60, 
	0x82, 
};

wxBitmap& _5_png_to_wx_bitmap()
{
	static wxMemoryInputStream memIStream( _5_png, sizeof( _5_png ) );
	static wxImage image( memIStream, wxBITMAP_TYPE_PNG );
	static wxBitmap bmp( image );
	return bmp;
}


#endif //_5_PNG_H
