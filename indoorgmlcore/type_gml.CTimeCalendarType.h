#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTimeCalendarType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTimeCalendarType

#include "type_gml.CTimeReferenceSystemType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CTimeCalendarType : public ::indoorgmlcore::gml::CTimeReferenceSystemType
{
public:
	indoorgmlcore_EXPORT CTimeCalendarType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CTimeCalendarType(CTimeCalendarType const& init);
	void operator=(CTimeCalendarType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CTimeCalendarType); }
	MemberElement<gml::CTimeCalendarEraPropertyType, _altova_mi_gml_altova_CTimeCalendarType_altova_referenceFrame> referenceFrame;
	struct referenceFrame { typedef Iterator<gml::CTimeCalendarEraPropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTimeCalendarType
