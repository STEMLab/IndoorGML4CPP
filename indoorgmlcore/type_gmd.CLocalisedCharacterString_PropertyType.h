#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CLocalisedCharacterString_PropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CLocalisedCharacterString_PropertyType

#include "type_gco.CObjectReference_PropertyType.h"


namespace indoorgmlcore
{

namespace gmd
{	

class CLocalisedCharacterString_PropertyType : public ::indoorgmlcore::gco::CObjectReference_PropertyType
{
public:
	indoorgmlcore_EXPORT CLocalisedCharacterString_PropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CLocalisedCharacterString_PropertyType(CLocalisedCharacterString_PropertyType const& init);
	void operator=(CLocalisedCharacterString_PropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CLocalisedCharacterString_PropertyType); }
	MemberElement<gmd::CLocalisedCharacterString_Type, _altova_mi_gmd_altova_CLocalisedCharacterString_PropertyType_altova_LocalisedCharacterString> LocalisedCharacterString;
	struct LocalisedCharacterString { typedef Iterator<gmd::CLocalisedCharacterString_Type> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CLocalisedCharacterString_PropertyType
