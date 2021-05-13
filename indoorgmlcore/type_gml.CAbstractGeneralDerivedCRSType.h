#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractGeneralDerivedCRSType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractGeneralDerivedCRSType

#include "type_gml.CAbstractCRSType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CAbstractGeneralDerivedCRSType : public ::indoorgmlcore::gml::CAbstractCRSType
{
public:
	indoorgmlcore_EXPORT CAbstractGeneralDerivedCRSType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CAbstractGeneralDerivedCRSType(CAbstractGeneralDerivedCRSType const& init);
	void operator=(CAbstractGeneralDerivedCRSType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CAbstractGeneralDerivedCRSType); }
	MemberElement<gml::CGeneralConversionPropertyType, _altova_mi_gml_altova_CAbstractGeneralDerivedCRSType_altova_conversion> conversion;
	struct conversion { typedef Iterator<gml::CGeneralConversionPropertyType> iterator; };
	MemberElement<gml::CGeneralConversionPropertyType, _altova_mi_gml_altova_CAbstractGeneralDerivedCRSType_altova_definedByConversion> definedByConversion;
	struct definedByConversion { typedef Iterator<gml::CGeneralConversionPropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractGeneralDerivedCRSType
