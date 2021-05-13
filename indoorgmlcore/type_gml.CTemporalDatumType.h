#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTemporalDatumType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTemporalDatumType

#include "type_gml.CTemporalDatumBaseType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CTemporalDatumType : public ::indoorgmlcore::gml::CTemporalDatumBaseType
{
public:
	indoorgmlcore_EXPORT CTemporalDatumType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CTemporalDatumType(CTemporalDatumType const& init);
	void operator=(CTemporalDatumType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CTemporalDatumType); }
	MemberElement<xs::CdateTimeType, _altova_mi_gml_altova_CTemporalDatumType_altova_origin> origin;
	struct origin { typedef Iterator<xs::CdateTimeType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTemporalDatumType
