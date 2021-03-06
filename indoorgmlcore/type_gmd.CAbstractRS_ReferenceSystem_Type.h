#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CAbstractRS_ReferenceSystem_Type
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CAbstractRS_ReferenceSystem_Type

#include "type_gco.CAbstractObject_Type.h"


namespace indoorgmlcore
{

namespace gmd
{	

class CAbstractRS_ReferenceSystem_Type : public ::indoorgmlcore::gco::CAbstractObject_Type
{
public:
	indoorgmlcore_EXPORT CAbstractRS_ReferenceSystem_Type(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CAbstractRS_ReferenceSystem_Type(CAbstractRS_ReferenceSystem_Type const& init);
	void operator=(CAbstractRS_ReferenceSystem_Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CAbstractRS_ReferenceSystem_Type); }
	MemberElement<gmd::CRS_Identifier_PropertyType, _altova_mi_gmd_altova_CAbstractRS_ReferenceSystem_Type_altova_name> name;
	struct name { typedef Iterator<gmd::CRS_Identifier_PropertyType> iterator; };
	MemberElement<gmd::CEX_Extent_PropertyType, _altova_mi_gmd_altova_CAbstractRS_ReferenceSystem_Type_altova_domainOfValidity> domainOfValidity;
	struct domainOfValidity { typedef Iterator<gmd::CEX_Extent_PropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CAbstractRS_ReferenceSystem_Type
