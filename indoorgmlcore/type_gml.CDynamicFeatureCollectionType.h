#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDynamicFeatureCollectionType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDynamicFeatureCollectionType

#include "type_gml.CDynamicFeatureType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CDynamicFeatureCollectionType : public ::indoorgmlcore::gml::CDynamicFeatureType
{
public:
	indoorgmlcore_EXPORT CDynamicFeatureCollectionType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CDynamicFeatureCollectionType(CDynamicFeatureCollectionType const& init);
	void operator=(CDynamicFeatureCollectionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CDynamicFeatureCollectionType); }
	MemberElement<gml::CDynamicFeatureMemberType, _altova_mi_gml_altova_CDynamicFeatureCollectionType_altova_dynamicMembers> dynamicMembers;
	struct dynamicMembers { typedef Iterator<gml::CDynamicFeatureMemberType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDynamicFeatureCollectionType
