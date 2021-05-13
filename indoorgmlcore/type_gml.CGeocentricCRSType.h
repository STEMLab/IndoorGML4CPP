#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CGeocentricCRSType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CGeocentricCRSType

#include "type_gml.CAbstractCRSType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CGeocentricCRSType : public ::indoorgmlcore::gml::CAbstractCRSType
{
public:
	indoorgmlcore_EXPORT CGeocentricCRSType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CGeocentricCRSType(CGeocentricCRSType const& init);
	void operator=(CGeocentricCRSType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CGeocentricCRSType); }
	MemberElement<gml::CCartesianCSPropertyType, _altova_mi_gml_altova_CGeocentricCRSType_altova_usesCartesianCS> usesCartesianCS;
	struct usesCartesianCS { typedef Iterator<gml::CCartesianCSPropertyType> iterator; };
	MemberElement<gml::CSphericalCSPropertyType, _altova_mi_gml_altova_CGeocentricCRSType_altova_usesSphericalCS> usesSphericalCS;
	struct usesSphericalCS { typedef Iterator<gml::CSphericalCSPropertyType> iterator; };
	MemberElement<gml::CGeodeticDatumPropertyType, _altova_mi_gml_altova_CGeocentricCRSType_altova_usesGeodeticDatum> usesGeodeticDatum;
	struct usesGeodeticDatum { typedef Iterator<gml::CGeodeticDatumPropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CGeocentricCRSType
