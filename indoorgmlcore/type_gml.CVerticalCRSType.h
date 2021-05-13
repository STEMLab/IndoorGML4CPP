#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CVerticalCRSType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CVerticalCRSType

#include "type_gml.CAbstractCRSType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CVerticalCRSType : public ::indoorgmlcore::gml::CAbstractCRSType
{
public:
	indoorgmlcore_EXPORT CVerticalCRSType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CVerticalCRSType(CVerticalCRSType const& init);
	void operator=(CVerticalCRSType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CVerticalCRSType); }
	MemberElement<gml::CVerticalCSPropertyType, _altova_mi_gml_altova_CVerticalCRSType_altova_verticalCS> verticalCS;
	struct verticalCS { typedef Iterator<gml::CVerticalCSPropertyType> iterator; };
	MemberElement<gml::CVerticalCSPropertyType, _altova_mi_gml_altova_CVerticalCRSType_altova_usesVerticalCS> usesVerticalCS;
	struct usesVerticalCS { typedef Iterator<gml::CVerticalCSPropertyType> iterator; };
	MemberElement<gml::CVerticalDatumPropertyType, _altova_mi_gml_altova_CVerticalCRSType_altova_verticalDatum> verticalDatum;
	struct verticalDatum { typedef Iterator<gml::CVerticalDatumPropertyType> iterator; };
	MemberElement<gml::CVerticalDatumPropertyType, _altova_mi_gml_altova_CVerticalCRSType_altova_usesVerticalDatum> usesVerticalDatum;
	struct usesVerticalDatum { typedef Iterator<gml::CVerticalDatumPropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CVerticalCRSType
