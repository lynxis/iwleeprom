/*
****************************************************************************
*
* Copyright (C) 2010, Gennady "ShultZ" Kozlov <qpxtool@mail.ru>
*
* 
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by
* the Free Software Foundation; either version 2 of the License, or
* (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
****************************************************************************
*/

#ifndef athio_h_included
#define athio_h_included
#include "iwleeprom.h"

#define ATHEROS_PCI_VID 0x168c
#define ATH_EEPROM_SIZE  0x800

extern struct dev_ops dev_ops_ath5k;
extern struct dev_ops dev_ops_ath9k;

#endif

