/** Declaration of additional methods for NSTask

   Copyright (C) 2008 Free Software Foundation, Inc.

   Written by:  Richard Frith-Macdonald <rfm@gnu.org>

   This file is part of the GNUstep Base Library.

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.
   
   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with this library; if not, write to the Free
   Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02111 USA.

   AutogsdocSource: Additions/GSCategories.m

*/

#ifndef	INCLUDED_NSTASK_GS_H
#define	INCLUDED_NSTASK_GS_H

@interface	NSTask (GSCategories)
/** Returns the launch path for a tool given the name of a tool.<br />
 * Locates the tool by looking in the standard directories and,
 * if not found there, looking in the PATH set in the environment.<br />
 * On ms-windows, this also tries appending common executable path
 * extensions to the tool name in order to find it.<br />
 * Returns the path found, or nil if the tool could not be located.
 */
+ (NSString*) launchPathForTool: (NSString*)name;
@end

#endif	/* INCLUDED_NSTASK_GS */

