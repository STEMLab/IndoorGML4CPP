#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTimeIntervalLengthType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTimeIntervalLengthType

#include "type_xs.CdecimalType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CTimeIntervalLengthType : public ::indoorgmlcore::xs::CdecimalType
{
public:
	indoorgmlcore_EXPORT CTimeIntervalLengthType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CTimeIntervalLengthType(CTimeIntervalLengthType const& init);
	void operator=(CTimeIntervalLengthType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CTimeIntervalLengthType); }
	indoorgmlcore_EXPORT void operator=(const double& value);

	MemberAttribute<string_type,_altova_mi_gml_altova_CTimeIntervalLengthType_altova_unit, 0, 0> unit;	// unit CTimeUnitType

	MemberAttribute<unsigned __int64,_altova_mi_gml_altova_CTimeIntervalLengthType_altova_radix, 0, 0> radix;	// radix CpositiveInteger

	MemberAttribute<__int64,_altova_mi_gml_altova_CTimeIntervalLengthType_altova_factor, 0, 0> factor;	// factor Cinteger
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTimeIntervalLengthType
