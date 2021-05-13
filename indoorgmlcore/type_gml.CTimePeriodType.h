#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTimePeriodType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTimePeriodType

#include "type_gml.CAbstractTimeGeometricPrimitiveType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CTimePeriodType : public ::indoorgmlcore::gml::CAbstractTimeGeometricPrimitiveType
{
public:
	indoorgmlcore_EXPORT CTimePeriodType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CTimePeriodType(CTimePeriodType const& init);
	void operator=(CTimePeriodType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CTimePeriodType); }
	MemberElement<gml::CTimePositionType, _altova_mi_gml_altova_CTimePeriodType_altova_beginPosition> beginPosition;
	struct beginPosition { typedef Iterator<gml::CTimePositionType> iterator; };
	MemberElement<gml::CTimeInstantPropertyType, _altova_mi_gml_altova_CTimePeriodType_altova_begin> begin;
	struct begin { typedef Iterator<gml::CTimeInstantPropertyType> iterator; };
	MemberElement<gml::CTimePositionType, _altova_mi_gml_altova_CTimePeriodType_altova_endPosition> endPosition;
	struct endPosition { typedef Iterator<gml::CTimePositionType> iterator; };
	MemberElement<gml::CTimeInstantPropertyType, _altova_mi_gml_altova_CTimePeriodType_altova_end> end;
	struct end { typedef Iterator<gml::CTimeInstantPropertyType> iterator; };
	MemberElement<xs::CdurationType, _altova_mi_gml_altova_CTimePeriodType_altova_duration> duration;
	struct duration { typedef Iterator<xs::CdurationType> iterator; };
	MemberElement<gml::CTimeIntervalLengthType, _altova_mi_gml_altova_CTimePeriodType_altova_timeInterval> timeInterval;
	struct timeInterval { typedef Iterator<gml::CTimeIntervalLengthType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTimePeriodType
