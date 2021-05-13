#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CEdgesType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CEdgesType

#include "type_gml.CAbstractFeatureType.h"


namespace indoorgmlcore
{

class CEdgesType : public ::indoorgmlcore::gml::CAbstractFeatureType
{
public:
	indoorgmlcore_EXPORT CEdgesType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CEdgesType(CEdgesType const& init);
	void operator=(CEdgesType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CEdgesType); }
	MemberAttribute<string_type,_altova_mi_altova_CEdgesType_altova_aggregationType, 1, 6> aggregationType;	// aggregationType CAggregationType

	MemberAttribute<bool,_altova_mi_altova_CEdgesType_altova_owns, 0, 0> owns;	// owns Cboolean
	MemberElement<CTransitionMemberType, _altova_mi_altova_CEdgesType_altova_transitionMember> transitionMember;
	struct transitionMember { typedef Iterator<CTransitionMemberType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};


}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CEdgesType
