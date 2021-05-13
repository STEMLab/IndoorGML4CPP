#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CNodesType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CNodesType

#include "type_gml.CAbstractFeatureType.h"


namespace indoorgmlcore
{

class CNodesType : public ::indoorgmlcore::gml::CAbstractFeatureType
{
public:
	indoorgmlcore_EXPORT CNodesType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CNodesType(CNodesType const& init);
	void operator=(CNodesType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CNodesType); }
	MemberAttribute<string_type,_altova_mi_altova_CNodesType_altova_aggregationType, 1, 6> aggregationType;	// aggregationType CAggregationType

	MemberAttribute<bool,_altova_mi_altova_CNodesType_altova_owns, 0, 0> owns;	// owns Cboolean
	MemberElement<CStateMemberType, _altova_mi_altova_CNodesType_altova_stateMember> stateMember;
	struct stateMember { typedef Iterator<CStateMemberType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};


}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CNodesType
