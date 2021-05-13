////////////////////////////////////////////////////////////////////////
//
// AltovaException.cpp
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


#include "StdAfx.h"
#include "Altova.h"
#include "AltovaException.h"

namespace altova {


CAltovaException::CAltovaException(int nCode, const tstring& sMessage, bool bUserExc)
	: m_nCode(nCode), m_sMessage(sMessage), m_bUserExc(bUserExc)
{
}


int CAltovaException::GetCode()
{
	return m_nCode;
}


const tstring& CAltovaException::GetInfo() const
{
	return m_sMessage;
}

bool CAltovaException::IsUserException() const
{
	return m_bUserExc;
}

} // namespace altova
