#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CAbstractMD_ContentInformation_Type
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CAbstractMD_ContentInformation_Type

#include "type_gco.CAbstractObject_Type.h"


namespace indoorgmlcore
{

namespace gmd
{	

class CAbstractMD_ContentInformation_Type : public ::indoorgmlcore::gco::CAbstractObject_Type
{
public:
	indoorgmlcore_EXPORT CAbstractMD_ContentInformation_Type(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CAbstractMD_ContentInformation_Type(CAbstractMD_ContentInformation_Type const& init);
	void operator=(CAbstractMD_ContentInformation_Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CAbstractMD_ContentInformation_Type); }
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CAbstractMD_ContentInformation_Type
