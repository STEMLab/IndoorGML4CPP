#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTimeCalendarEraType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTimeCalendarEraType

#include "type_gml.CDefinitionType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CTimeCalendarEraType : public ::indoorgmlcore::gml::CDefinitionType
{
public:
	indoorgmlcore_EXPORT CTimeCalendarEraType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CTimeCalendarEraType(CTimeCalendarEraType const& init);
	void operator=(CTimeCalendarEraType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CTimeCalendarEraType); }
	MemberElement<gml::CStringOrRefType, _altova_mi_gml_altova_CTimeCalendarEraType_altova_referenceEvent> referenceEvent;
	struct referenceEvent { typedef Iterator<gml::CStringOrRefType> iterator; };
	MemberElement<gml::CCalDateType, _altova_mi_gml_altova_CTimeCalendarEraType_altova_referenceDate> referenceDate;
	struct referenceDate { typedef Iterator<gml::CCalDateType> iterator; };
	MemberElement<xs::CdecimalType, _altova_mi_gml_altova_CTimeCalendarEraType_altova_julianReference> julianReference;
	struct julianReference { typedef Iterator<xs::CdecimalType> iterator; };
	MemberElement<gml::CTimePeriodPropertyType, _altova_mi_gml_altova_CTimeCalendarEraType_altova_epochOfUse> epochOfUse;
	struct epochOfUse { typedef Iterator<gml::CTimePeriodPropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTimeCalendarEraType
