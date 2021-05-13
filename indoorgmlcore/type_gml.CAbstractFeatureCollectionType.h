#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractFeatureCollectionType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractFeatureCollectionType

#include "type_gml.CAbstractFeatureType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CAbstractFeatureCollectionType : public ::indoorgmlcore::gml::CAbstractFeatureType
{
public:
	indoorgmlcore_EXPORT CAbstractFeatureCollectionType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CAbstractFeatureCollectionType(CAbstractFeatureCollectionType const& init);
	void operator=(CAbstractFeatureCollectionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CAbstractFeatureCollectionType); }
	MemberElement<gml::CFeaturePropertyType, _altova_mi_gml_altova_CAbstractFeatureCollectionType_altova_featureMember> featureMember;
	struct featureMember { typedef Iterator<gml::CFeaturePropertyType> iterator; };
	MemberElement<gml::CFeatureArrayPropertyType, _altova_mi_gml_altova_CAbstractFeatureCollectionType_altova_featureMembers> featureMembers;
	struct featureMembers { typedef Iterator<gml::CFeatureArrayPropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractFeatureCollectionType
