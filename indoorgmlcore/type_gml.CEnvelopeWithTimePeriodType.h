#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CEnvelopeWithTimePeriodType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CEnvelopeWithTimePeriodType

#include "type_gml.CEnvelopeType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CEnvelopeWithTimePeriodType : public ::indoorgmlcore::gml::CEnvelopeType
{
public:
	indoorgmlcore_EXPORT CEnvelopeWithTimePeriodType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CEnvelopeWithTimePeriodType(CEnvelopeWithTimePeriodType const& init);
	void operator=(CEnvelopeWithTimePeriodType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CEnvelopeWithTimePeriodType); }

	MemberAttribute<string_type,_altova_mi_gml_altova_CEnvelopeWithTimePeriodType_altova_frame, 0, 0> frame;	// frame CanyURI
	MemberElement<gml::CTimePositionType, _altova_mi_gml_altova_CEnvelopeWithTimePeriodType_altova_beginPosition> beginPosition;
	struct beginPosition { typedef Iterator<gml::CTimePositionType> iterator; };
	MemberElement<gml::CTimePositionType, _altova_mi_gml_altova_CEnvelopeWithTimePeriodType_altova_endPosition> endPosition;
	struct endPosition { typedef Iterator<gml::CTimePositionType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CEnvelopeWithTimePeriodType
