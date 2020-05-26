// $Id: treatment.h 518 2014-01-31 14:31:26Z mo $

/*
Qxw is a program to help construct and publish crosswords.

Copyright 2011-2019 Mark Owen; Windows port by Peter Flippant
http://www.quinapalus.com
E-mail: qxw@quinapalus.com

This file is part of Qxw.

Qxw is free software: you can redistribute it and/or modify
it under the terms of version 2 of the GNU General Public License
as published by the Free Software Foundation.

Qxw is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with Qxw.  If not, see <http://www.gnu.org/licenses/> or
write to the Free Software Foundation, Inc., 51 Franklin Street,
Fifth Floor, Boston, MA  02110-1301, USA.
*/




#ifndef __TREATMENT_H__
#define __TREATMENT_H__

extern int getinitflist(int**l,int*ll,struct lprop*lp,int wlen);
extern int pregetinitflist(void);
extern int postgetinitflist(void);
extern char*loadtpi(void);
extern void unloadtpi(void);
extern void reloadtpi(void);

#endif
