#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CSequenceRuleType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CSequenceRuleType

#include "type_gml.CSequenceRuleEnumerationType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CSequenceRuleType : public ::indoorgmlcore::gml::CSequenceRuleEnumerationType
{
public:
	indoorgmlcore_EXPORT CSequenceRuleType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CSequenceRuleType(CSequenceRuleType const& init);
	void operator=(CSequenceRuleType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CSequenceRuleType); }
	indoorgmlcore_EXPORT void operator=(const string_type& value);
	MemberAttribute<string_type,_altova_mi_gml_altova_CSequenceRuleType_altova_order, 1, 4> order;	// order CIncrementOrder

	MemberAttribute<string_type,_altova_mi_gml_altova_CSequenceRuleType_altova_axisOrder, 0, 0> axisOrder;	// axisOrder CAxisDirectionList
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CSequenceRuleType
