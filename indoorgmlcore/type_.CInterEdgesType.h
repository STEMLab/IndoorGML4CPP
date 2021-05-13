#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CInterEdgesType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CInterEdgesType

#include "type_gml.CAbstractFeatureType.h"


namespace indoorgmlcore
{

class CInterEdgesType : public ::indoorgmlcore::gml::CAbstractFeatureType
{
public:
	indoorgmlcore_EXPORT CInterEdgesType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CInterEdgesType(CInterEdgesType const& init);
	void operator=(CInterEdgesType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CInterEdgesType); }
	MemberAttribute<string_type,_altova_mi_altova_CInterEdgesType_altova_aggregationType, 1, 6> aggregationType;	// aggregationType CAggregationType
	MemberElement<CInterLayerConnectionMemberType, _altova_mi_altova_CInterEdgesType_altova_interLayerConnectionMember> interLayerConnectionMember;
	struct interLayerConnectionMember { typedef Iterator<CInterLayerConnectionMemberType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};


}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CInterEdgesType
