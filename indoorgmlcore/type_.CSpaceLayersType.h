#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CSpaceLayersType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CSpaceLayersType

#include "type_gml.CAbstractFeatureType.h"


namespace indoorgmlcore
{

class CSpaceLayersType : public ::indoorgmlcore::gml::CAbstractFeatureType
{
public:
	indoorgmlcore_EXPORT CSpaceLayersType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CSpaceLayersType(CSpaceLayersType const& init);
	void operator=(CSpaceLayersType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CSpaceLayersType); }
	MemberAttribute<string_type,_altova_mi_altova_CSpaceLayersType_altova_aggregationType, 1, 6> aggregationType;	// aggregationType CAggregationType
	MemberElement<CSpaceLayerMemberType, _altova_mi_altova_CSpaceLayersType_altova_spaceLayerMember> spaceLayerMember;
	struct spaceLayerMember { typedef Iterator<CSpaceLayerMemberType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};


}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CSpaceLayersType
