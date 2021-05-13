#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCoordinateSystemAxisType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCoordinateSystemAxisType

#include "type_gml.CIdentifiedObjectType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CCoordinateSystemAxisType : public ::indoorgmlcore::gml::CIdentifiedObjectType
{
public:
	indoorgmlcore_EXPORT CCoordinateSystemAxisType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CCoordinateSystemAxisType(CCoordinateSystemAxisType const& init);
	void operator=(CCoordinateSystemAxisType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CCoordinateSystemAxisType); }

	MemberAttribute<string_type,_altova_mi_gml_altova_CCoordinateSystemAxisType_altova_uom, 0, 0> uom;	// uom CUomIdentifier
	MemberElement<gml::CCodeType, _altova_mi_gml_altova_CCoordinateSystemAxisType_altova_axisAbbrev> axisAbbrev;
	struct axisAbbrev { typedef Iterator<gml::CCodeType> iterator; };
	MemberElement<gml::CCodeWithAuthorityType, _altova_mi_gml_altova_CCoordinateSystemAxisType_altova_axisDirection> axisDirection;
	struct axisDirection { typedef Iterator<gml::CCodeWithAuthorityType> iterator; };
	MemberElement<xs::CdoubleType, _altova_mi_gml_altova_CCoordinateSystemAxisType_altova_minimumValue> minimumValue;
	struct minimumValue { typedef Iterator<xs::CdoubleType> iterator; };
	MemberElement<xs::CdoubleType, _altova_mi_gml_altova_CCoordinateSystemAxisType_altova_maximumValue> maximumValue;
	struct maximumValue { typedef Iterator<xs::CdoubleType> iterator; };
	MemberElement<gml::CCodeWithAuthorityType, _altova_mi_gml_altova_CCoordinateSystemAxisType_altova_rangeMeaning> rangeMeaning;
	struct rangeMeaning { typedef Iterator<gml::CCodeWithAuthorityType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CCoordinateSystemAxisType
