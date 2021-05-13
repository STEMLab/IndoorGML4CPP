#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTinType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTinType

#include "type_gml.CSurfaceType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CTinType : public ::indoorgmlcore::gml::CSurfaceType
{
public:
	indoorgmlcore_EXPORT CTinType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CTinType(CTinType const& init);
	void operator=(CTinType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CTinType); }
	MemberElement<gml::CLineStringSegmentArrayPropertyType, _altova_mi_gml_altova_CTinType_altova_stopLines> stopLines;
	struct stopLines { typedef Iterator<gml::CLineStringSegmentArrayPropertyType> iterator; };
	MemberElement<gml::CLineStringSegmentArrayPropertyType, _altova_mi_gml_altova_CTinType_altova_breakLines> breakLines;
	struct breakLines { typedef Iterator<gml::CLineStringSegmentArrayPropertyType> iterator; };
	MemberElement<gml::CLengthType, _altova_mi_gml_altova_CTinType_altova_maxLength> maxLength;
	struct maxLength { typedef Iterator<gml::CLengthType> iterator; };
	MemberElement<gml::CcontrolPointType, _altova_mi_gml_altova_CTinType_altova_controlPoint> controlPoint;
	struct controlPoint { typedef Iterator<gml::CcontrolPointType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTinType
