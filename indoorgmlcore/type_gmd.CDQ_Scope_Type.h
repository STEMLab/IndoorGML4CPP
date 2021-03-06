#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CDQ_Scope_Type
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CDQ_Scope_Type

#include "type_gco.CAbstractObject_Type.h"


namespace indoorgmlcore
{

namespace gmd
{	

class CDQ_Scope_Type : public ::indoorgmlcore::gco::CAbstractObject_Type
{
public:
	indoorgmlcore_EXPORT CDQ_Scope_Type(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CDQ_Scope_Type(CDQ_Scope_Type const& init);
	void operator=(CDQ_Scope_Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CDQ_Scope_Type); }
	MemberElement<gmd::CMD_ScopeCode_PropertyType, _altova_mi_gmd_altova_CDQ_Scope_Type_altova_level> level;
	struct level { typedef Iterator<gmd::CMD_ScopeCode_PropertyType> iterator; };
	MemberElement<gmd::CEX_Extent_PropertyType, _altova_mi_gmd_altova_CDQ_Scope_Type_altova_extent> extent;
	struct extent { typedef Iterator<gmd::CEX_Extent_PropertyType> iterator; };
	MemberElement<gmd::CMD_ScopeDescription_PropertyType, _altova_mi_gmd_altova_CDQ_Scope_Type_altova_levelDescription> levelDescription;
	struct levelDescription { typedef Iterator<gmd::CMD_ScopeDescription_PropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CDQ_Scope_Type
