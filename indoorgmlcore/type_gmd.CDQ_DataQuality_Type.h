#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CDQ_DataQuality_Type
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CDQ_DataQuality_Type

#include "type_gco.CAbstractObject_Type.h"


namespace indoorgmlcore
{

namespace gmd
{	

class CDQ_DataQuality_Type : public ::indoorgmlcore::gco::CAbstractObject_Type
{
public:
	indoorgmlcore_EXPORT CDQ_DataQuality_Type(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CDQ_DataQuality_Type(CDQ_DataQuality_Type const& init);
	void operator=(CDQ_DataQuality_Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CDQ_DataQuality_Type); }
	MemberElement<gmd::CDQ_Scope_PropertyType, _altova_mi_gmd_altova_CDQ_DataQuality_Type_altova_scope> scope;
	struct scope { typedef Iterator<gmd::CDQ_Scope_PropertyType> iterator; };
	MemberElement<gmd::CDQ_Element_PropertyType, _altova_mi_gmd_altova_CDQ_DataQuality_Type_altova_report> report;
	struct report { typedef Iterator<gmd::CDQ_Element_PropertyType> iterator; };
	MemberElement<gmd::CLI_Lineage_PropertyType, _altova_mi_gmd_altova_CDQ_DataQuality_Type_altova_lineage> lineage;
	struct lineage { typedef Iterator<gmd::CLI_Lineage_PropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CDQ_DataQuality_Type
