#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CAbstractEX_GeographicExtent_Type
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CAbstractEX_GeographicExtent_Type

#include "type_gco.CAbstractObject_Type.h"


namespace indoorgmlcore
{

namespace gmd
{	

class CAbstractEX_GeographicExtent_Type : public ::indoorgmlcore::gco::CAbstractObject_Type
{
public:
	indoorgmlcore_EXPORT CAbstractEX_GeographicExtent_Type(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CAbstractEX_GeographicExtent_Type(CAbstractEX_GeographicExtent_Type const& init);
	void operator=(CAbstractEX_GeographicExtent_Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CAbstractEX_GeographicExtent_Type); }
	MemberElement<gco::CBoolean_PropertyType, _altova_mi_gmd_altova_CAbstractEX_GeographicExtent_Type_altova_extentTypeCode> extentTypeCode;
	struct extentTypeCode { typedef Iterator<gco::CBoolean_PropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CAbstractEX_GeographicExtent_Type
