#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CPrimalSpaceFeaturesType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CPrimalSpaceFeaturesType

#include "type_gml.CAbstractFeatureType.h"


namespace indoorgmlcore
{

class CPrimalSpaceFeaturesType : public ::indoorgmlcore::gml::CAbstractFeatureType
{
public:
	indoorgmlcore_EXPORT CPrimalSpaceFeaturesType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CPrimalSpaceFeaturesType(CPrimalSpaceFeaturesType const& init);
	void operator=(CPrimalSpaceFeaturesType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CPrimalSpaceFeaturesType); }
	MemberAttribute<string_type,_altova_mi_altova_CPrimalSpaceFeaturesType_altova_aggregationType, 1, 6> aggregationType;	// aggregationType CAggregationType
	MemberElement<CCellSpaceMemberType, _altova_mi_altova_CPrimalSpaceFeaturesType_altova_cellSpaceMember> cellSpaceMember;
	struct cellSpaceMember { typedef Iterator<CCellSpaceMemberType> iterator; };
	MemberElement<CCellSpaceBoundaryMemberType, _altova_mi_altova_CPrimalSpaceFeaturesType_altova_cellSpaceBoundaryMember> cellSpaceBoundaryMember;
	struct cellSpaceBoundaryMember { typedef Iterator<CCellSpaceBoundaryMemberType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};


}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CPrimalSpaceFeaturesType
