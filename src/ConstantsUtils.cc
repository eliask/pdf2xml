//========================================================================
//
// ConstantsUtils.cc
//
// Contain all constants usefull for the pdftoxml tool. It's the initialization.
//
// author: Sophie Andrieu
// 05-2006
// Xerox Research Centre Europe
//
//========================================================================
/* $Author$
$Date$
$Header$
$Id$
$Name$
$Locker$
$Log$
Revision 1.2  2007/12/14 11:01:16  dejean
new command line
new attributes: idx, base

Revision 1.10  2007/12/14 10:07:17  hdejean
v 1.2 : idx  + base as default attribute

Revision 1.9  2007/12/14 09:20:58  hdejean
all

$RCSfile$
$Revision$
$Source$
$State$

*/

static const char cvsid[] = "$Revision$";
#include "ConstantsUtils.h"

namespace ConstantsUtils
{
	const char *EXTENSION_XML = ".xml";
	const char *EXTENSION_XML_MAJ = ".XML";
	const char *EXTENSION_VEC = ".vec";
	const char *EXTENSION_PBM = ".pbm";
	const char *EXTENSION_PPM = ".ppm";
	const char *EXTENSION_PDF = ".pdf";
	const char *EXTENSION_PDF_MAJ = ".PDF";
	const char *NAME_OUTLINE = "outline";
	const char *NAME_ANNOT = "annot";
	const char *NAME_DATA_DIR = "_data";
	
	const char *PDFTOXML_VERSION = "1.2";
	const char *PDFTOXML_NAME = "pdftoxml";

}
