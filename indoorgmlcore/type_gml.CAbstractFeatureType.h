#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractFeatureType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractFeatureType

#include "type_gml.CAbstractGMLType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CAbstractFeatureType : public ::indoorgmlcore::gml::CAbstractGMLType
{
public:
	indoorgmlcore_EXPORT CAbstractFeatureType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CAbstractFeatureType(CAbstractFeatureType const& init);
	void operator=(CAbstractFeatureType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CAbstractFeatureType); }
	MemberElement<gml::CBoundingShapeType, _altova_mi_gml_altova_CAbstractFeatureType_altova_boundedBy> boundedBy;
	struct boundedBy { typedef Iterator<gml::CBoundingShapeType> iterator; };
	MemberElement<gml::CLocationPropertyType, _altova_mi_gml_altova_CAbstractFeatureType_altova_location> location;
	struct location { typedef Iterator<gml::CLocationPropertyType> iterator; };
	MemberElement<gml::CPriorityLocationPropertyType, _altova_mi_gml_altova_CAbstractFeatureType_altova_priorityLocation> priorityLocation;
	struct priorityLocation { typedef Iterator<gml::CPriorityLocationPropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractFeatureType
