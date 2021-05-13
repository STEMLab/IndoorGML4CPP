#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CEX_Extent_Type
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CEX_Extent_Type

#include "type_gco.CAbstractObject_Type.h"


namespace indoorgmlcore
{

namespace gmd
{	

class CEX_Extent_Type : public ::indoorgmlcore::gco::CAbstractObject_Type
{
public:
	indoorgmlcore_EXPORT CEX_Extent_Type(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CEX_Extent_Type(CEX_Extent_Type const& init);
	void operator=(CEX_Extent_Type const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gmd_altova_CEX_Extent_Type); }
	MemberElement<gco::CCharacterString_PropertyType, _altova_mi_gmd_altova_CEX_Extent_Type_altova_description> description;
	struct description { typedef Iterator<gco::CCharacterString_PropertyType> iterator; };
	MemberElement<gmd::CEX_GeographicExtent_PropertyType, _altova_mi_gmd_altova_CEX_Extent_Type_altova_geographicElement> geographicElement;
	struct geographicElement { typedef Iterator<gmd::CEX_GeographicExtent_PropertyType> iterator; };
	MemberElement<gmd::CEX_TemporalExtent_PropertyType, _altova_mi_gmd_altova_CEX_Extent_Type_altova_temporalElement> temporalElement;
	struct temporalElement { typedef Iterator<gmd::CEX_TemporalExtent_PropertyType> iterator; };
	MemberElement<gmd::CEX_VerticalExtent_PropertyType, _altova_mi_gmd_altova_CEX_Extent_Type_altova_verticalElement> verticalElement;
	struct verticalElement { typedef Iterator<gmd::CEX_VerticalExtent_PropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gmd

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gmd_ALTOVA_CEX_Extent_Type
