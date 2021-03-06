#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CRS_Identifier_Type
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CRS_Identifier_Type

#include "type_gmd.CMD_Identifier_Type.h"


namespace indoorgmlcore
{

namespace gmd
{	

class CRS_Identifier_Type : public ::indoorgmlcore::gmd::CMD_Identifier_Type
{
public:
	indoorgmlcore_EXPORT CRS_Identifier_Type(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CRS_Identifier_Type(CRS_Identifier_Type const& init);
	void operator=(CRS_Identifier_Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CRS_Identifier_Type); }
	MemberElement<gco::CCharacterString_PropertyType, _altova_mi_gmd_altova_CRS_Identifier_Type_altova_codeSpace> codeSpace;
	struct codeSpace { typedef Iterator<gco::CCharacterString_PropertyType> iterator; };
	MemberElement<gco::CCharacterString_PropertyType, _altova_mi_gmd_altova_CRS_Identifier_Type_altova_version> version;
	struct version { typedef Iterator<gco::CCharacterString_PropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CRS_Identifier_Type
