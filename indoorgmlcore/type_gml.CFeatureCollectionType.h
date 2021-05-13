#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CFeatureCollectionType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CFeatureCollectionType

#include "type_gml.CAbstractFeatureCollectionType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CFeatureCollectionType : public ::indoorgmlcore::gml::CAbstractFeatureCollectionType
{
public:
	indoorgmlcore_EXPORT CFeatureCollectionType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CFeatureCollectionType(CFeatureCollectionType const& init);
	void operator=(CFeatureCollectionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CFeatureCollectionType); }
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CFeatureCollectionType
