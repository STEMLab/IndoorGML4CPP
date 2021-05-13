#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTimeClockType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTimeClockType

#include "type_gml.CTimeReferenceSystemType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CTimeClockType : public ::indoorgmlcore::gml::CTimeReferenceSystemType
{
public:
	indoorgmlcore_EXPORT CTimeClockType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CTimeClockType(CTimeClockType const& init);
	void operator=(CTimeClockType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CTimeClockType); }
	MemberElement<gml::CStringOrRefType, _altova_mi_gml_altova_CTimeClockType_altova_referenceEvent> referenceEvent;
	struct referenceEvent { typedef Iterator<gml::CStringOrRefType> iterator; };
	MemberElement<xs::CtimeType, _altova_mi_gml_altova_CTimeClockType_altova_referenceTime> referenceTime;
	struct referenceTime { typedef Iterator<xs::CtimeType> iterator; };
	MemberElement<xs::CtimeType, _altova_mi_gml_altova_CTimeClockType_altova_utcReference> utcReference;
	struct utcReference { typedef Iterator<xs::CtimeType> iterator; };
	MemberElement<gml::CTimeCalendarPropertyType, _altova_mi_gml_altova_CTimeClockType_altova_dateBasis> dateBasis;
	struct dateBasis { typedef Iterator<gml::CTimeCalendarPropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTimeClockType
