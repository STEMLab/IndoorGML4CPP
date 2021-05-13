#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CFaceType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CFaceType

#include "type_gml.CAbstractTopoPrimitiveType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CFaceType : public ::indoorgmlcore::gml::CAbstractTopoPrimitiveType
{
public:
	indoorgmlcore_EXPORT CFaceType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CFaceType(CFaceType const& init);
	void operator=(CFaceType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CFaceType); }
	MemberAttribute<string_type,_altova_mi_gml_altova_CFaceType_altova_aggregationType, 1, 6> aggregationType;	// aggregationType CAggregationType

	MemberAttribute<bool,_altova_mi_gml_altova_CFaceType_altova_universal, 0, 0> universal;	// universal Cboolean
	MemberElement<gml::CNodePropertyType, _altova_mi_gml_altova_CFaceType_altova_isolated> isolated;
	struct isolated { typedef Iterator<gml::CNodePropertyType> iterator; };
	MemberElement<gml::CDirectedEdgePropertyType, _altova_mi_gml_altova_CFaceType_altova_directedEdge> directedEdge;
	struct directedEdge { typedef Iterator<gml::CDirectedEdgePropertyType> iterator; };
	MemberElement<gml::CDirectedTopoSolidPropertyType, _altova_mi_gml_altova_CFaceType_altova_directedTopoSolid> directedTopoSolid;
	struct directedTopoSolid { typedef Iterator<gml::CDirectedTopoSolidPropertyType> iterator; };
	MemberElement<gml::CSurfacePropertyType, _altova_mi_gml_altova_CFaceType_altova_surfaceProperty> surfaceProperty;
	struct surfaceProperty { typedef Iterator<gml::CSurfacePropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CFaceType
