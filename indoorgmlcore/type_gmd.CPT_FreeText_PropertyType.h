#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CPT_FreeText_PropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CPT_FreeText_PropertyType

#include "type_gco.CCharacterString_PropertyType.h"


namespace indoorgmlcore
{

namespace gmd
{	

class CPT_FreeText_PropertyType : public ::indoorgmlcore::gco::CCharacterString_PropertyType
{
public:
	indoorgmlcore_EXPORT CPT_FreeText_PropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CPT_FreeText_PropertyType(CPT_FreeText_PropertyType const& init);
	void operator=(CPT_FreeText_PropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CPT_FreeText_PropertyType); }
	MemberElement<gmd::CPT_FreeText_Type, _altova_mi_gmd_altova_CPT_FreeText_PropertyType_altova_PT_FreeText> PT_FreeText;
	struct PT_FreeText { typedef Iterator<gmd::CPT_FreeText_Type> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CPT_FreeText_PropertyType
