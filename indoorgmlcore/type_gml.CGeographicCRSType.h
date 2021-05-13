#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CGeographicCRSType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CGeographicCRSType

#include "type_gml.CAbstractCRSType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CGeographicCRSType : public ::indoorgmlcore::gml::CAbstractCRSType
{
public:
	indoorgmlcore_EXPORT CGeographicCRSType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CGeographicCRSType(CGeographicCRSType const& init);
	void operator=(CGeographicCRSType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CGeographicCRSType); }
	MemberElement<gml::CEllipsoidalCSPropertyType, _altova_mi_gml_altova_CGeographicCRSType_altova_usesEllipsoidalCS> usesEllipsoidalCS;
	struct usesEllipsoidalCS { typedef Iterator<gml::CEllipsoidalCSPropertyType> iterator; };
	MemberElement<gml::CGeodeticDatumPropertyType, _altova_mi_gml_altova_CGeographicCRSType_altova_usesGeodeticDatum> usesGeodeticDatum;
	struct usesGeodeticDatum { typedef Iterator<gml::CGeodeticDatumPropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CGeographicCRSType
