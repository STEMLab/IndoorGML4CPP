#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTimeCoordinateSystemType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTimeCoordinateSystemType

#include "type_gml.CTimeReferenceSystemType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CTimeCoordinateSystemType : public ::indoorgmlcore::gml::CTimeReferenceSystemType
{
public:
	indoorgmlcore_EXPORT CTimeCoordinateSystemType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CTimeCoordinateSystemType(CTimeCoordinateSystemType const& init);
	void operator=(CTimeCoordinateSystemType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CTimeCoordinateSystemType); }
	MemberElement<gml::CTimePositionType, _altova_mi_gml_altova_CTimeCoordinateSystemType_altova_originPosition> originPosition;
	struct originPosition { typedef Iterator<gml::CTimePositionType> iterator; };
	MemberElement<gml::CTimeInstantPropertyType, _altova_mi_gml_altova_CTimeCoordinateSystemType_altova_origin> origin;
	struct origin { typedef Iterator<gml::CTimeInstantPropertyType> iterator; };
	MemberElement<gml::CTimeIntervalLengthType, _altova_mi_gml_altova_CTimeCoordinateSystemType_altova_interval> interval;
	struct interval { typedef Iterator<gml::CTimeIntervalLengthType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTimeCoordinateSystemType
