#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CProjectedCRSType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CProjectedCRSType

#include "type_gml.CAbstractGeneralDerivedCRSType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CProjectedCRSType : public ::indoorgmlcore::gml::CAbstractGeneralDerivedCRSType
{
public:
	indoorgmlcore_EXPORT CProjectedCRSType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CProjectedCRSType(CProjectedCRSType const& init);
	void operator=(CProjectedCRSType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CProjectedCRSType); }
	MemberElement<gml::CGeodeticCRSPropertyType, _altova_mi_gml_altova_CProjectedCRSType_altova_baseGeodeticCRS> baseGeodeticCRS;
	struct baseGeodeticCRS { typedef Iterator<gml::CGeodeticCRSPropertyType> iterator; };
	MemberElement<gml::CGeographicCRSPropertyType, _altova_mi_gml_altova_CProjectedCRSType_altova_baseGeographicCRS> baseGeographicCRS;
	struct baseGeographicCRS { typedef Iterator<gml::CGeographicCRSPropertyType> iterator; };
	MemberElement<gml::CCartesianCSPropertyType, _altova_mi_gml_altova_CProjectedCRSType_altova_cartesianCS> cartesianCS;
	struct cartesianCS { typedef Iterator<gml::CCartesianCSPropertyType> iterator; };
	MemberElement<gml::CCartesianCSPropertyType, _altova_mi_gml_altova_CProjectedCRSType_altova_usesCartesianCS> usesCartesianCS;
	struct usesCartesianCS { typedef Iterator<gml::CCartesianCSPropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CProjectedCRSType
