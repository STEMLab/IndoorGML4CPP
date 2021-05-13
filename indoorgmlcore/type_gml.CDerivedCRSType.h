#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDerivedCRSType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDerivedCRSType

#include "type_gml.CAbstractGeneralDerivedCRSType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CDerivedCRSType : public ::indoorgmlcore::gml::CAbstractGeneralDerivedCRSType
{
public:
	indoorgmlcore_EXPORT CDerivedCRSType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CDerivedCRSType(CDerivedCRSType const& init);
	void operator=(CDerivedCRSType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CDerivedCRSType); }
	MemberElement<gml::CSingleCRSPropertyType, _altova_mi_gml_altova_CDerivedCRSType_altova_baseCRS> baseCRS;
	struct baseCRS { typedef Iterator<gml::CSingleCRSPropertyType> iterator; };
	MemberElement<gml::CCodeWithAuthorityType, _altova_mi_gml_altova_CDerivedCRSType_altova_derivedCRSType> derivedCRSType;
	struct derivedCRSType { typedef Iterator<gml::CCodeWithAuthorityType> iterator; };
	MemberElement<gml::CCoordinateSystemPropertyType, _altova_mi_gml_altova_CDerivedCRSType_altova_coordinateSystem> coordinateSystem;
	struct coordinateSystem { typedef Iterator<gml::CCoordinateSystemPropertyType> iterator; };
	MemberElement<gml::CCoordinateSystemPropertyType, _altova_mi_gml_altova_CDerivedCRSType_altova_usesCS> usesCS;
	struct usesCS { typedef Iterator<gml::CCoordinateSystemPropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDerivedCRSType
