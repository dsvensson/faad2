/*
** FAAD2 - Freeware Advanced Audio (AAC) Decoder including SBR decoding
** Copyright (C) 2003-2004 M. Bakker, Ahead Software AG, http://www.nero.com
**  
** This program is free software; you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation; either version 2 of the License, or
** (at your option) any later version.
** 
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.
** 
** You should have received a copy of the GNU General Public License
** along with this program; if not, write to the Free Software 
** Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
**
** Any non-GPL usage of this software or parts of this software is strictly
** forbidden.
**
** Commercial non-GPL licensing of this software is possible.
** For more info contact Ahead Software through Mpeg4AAClicense@nero.com.
**
** $Id: error.c,v 1.19 2004/01/05 14:05:11 menno Exp $
**/

#include "common.h"
#include "error.h"

int8_t *err_msg[] = {
    "No error",
    "Gain control not yet implemented",
    "Pulse coding not allowed in short blocks",
    "Invalid huffman codebook",
    "Negative scalefactor found, should be impossible",
    "Unable to find ADTS syncword",
    "Channel coupling not yet implemented",
    "Channel configuration not allowed in error resilient frame",
    "Bit error in error resilient scalefactor decoding",
    "Error decoding huffman scalefactor (bitstream error)",
    "Error decoding huffman codeword (bitstream error)",
    "Non existent huffman codebook number found",
    "Maximum number of channels exceeded",
    "Maximum number of bitstream elements exceeded",
    "Input data buffer too small",
    "Array index out of range",
    "Maximum number of scalefactor bands exceeded",
    "Quantised value out of range",
    "LTP lag out of range"
};

