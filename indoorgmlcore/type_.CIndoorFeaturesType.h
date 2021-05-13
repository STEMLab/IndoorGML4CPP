#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CIndoorFeaturesType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CIndoorFeaturesType

#include "type_gml.CAbstractFeatureType.h"


namespace indoorgmlcore
{

class CIndoorFeaturesType : public ::indoorgmlcore::gml::CAbstractFeatureType
{
public:
	indoorgmlcore_EXPORT CIndoorFeaturesType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CIndoorFeaturesType(CIndoorFeaturesType const& init);
	void operator=(CIndoorFeaturesType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CIndoorFeaturesType); }
	MemberElement<CPrimalSpaceFeaturesPropertyType, _altova_mi_altova_CIndoorFeaturesType_altova_primalSpaceFeatures> primalSpaceFeatures;
	struct primalSpaceFeatures { typedef Iterator<CPrimalSpaceFeaturesPropertyType> iterator; };
	MemberElement<CMultiLayeredGraphPropertyType, _altova_mi_altova_CIndoorFeaturesType_altova_multiLayeredGraph> multiLayeredGraph;
	struct multiLayeredGraph { typedef Iterator<CMultiLayeredGraphPropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};


}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CIndoorFeaturesType
