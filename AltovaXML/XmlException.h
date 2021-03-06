////////////////////////////////////////////////////////////////////////
//
// XmlException.h
//
// This file was generated by XMLSpy 2021r2sp1 Enterprise Edition.
//
// YOU SHOULD NOT MODIFY THIS FILE, BECAUSE IT WILL BE
// OVERWRITTEN WHEN YOU RE-RUN CODE GENERATION.
//
// Refer to the XMLSpy Documentation for further details.
// http://www.altova.com/xmlspy
//
////////////////////////////////////////////////////////////////////////

#pragma once
#ifndef ALTOVA_XMLEXCEPTION_H_INCLUDED
#define ALTOVA_XMLEXCEPTION_H_INCLUDED

#include "AltovaXMLAPI.h"
#include "../Altova/AltovaException.h"

namespace altova {


class ALTOVAXML_DECLSPECIFIER CXmlException : public CAltovaException
{
public:
	CXmlException(int nCode, const tstring& sMessage);
};


} // namespace altova

#endif // ALTOVA_XMLEXCEPTION_H_INCLUDED
