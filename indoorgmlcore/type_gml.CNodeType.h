#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CNodeType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CNodeType

#include "type_gml.CAbstractTopoPrimitiveType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CNodeType : public ::indoorgmlcore::gml::CAbstractTopoPrimitiveType
{
public:
	indoorgmlcore_EXPORT CNodeType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CNodeType(CNodeType const& init);
	void operator=(CNodeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CNodeType); }
	MemberAttribute<string_type,_altova_mi_gml_altova_CNodeType_altova_aggregationType, 1, 6> aggregationType;	// aggregationType CAggregationType
	MemberElement<gml::CFaceOrTopoSolidPropertyType, _altova_mi_gml_altova_CNodeType_altova_container> container;
	struct container { typedef Iterator<gml::CFaceOrTopoSolidPropertyType> iterator; };
	MemberElement<gml::CDirectedEdgePropertyType, _altova_mi_gml_altova_CNodeType_altova_directedEdge> directedEdge;
	struct directedEdge { typedef Iterator<gml::CDirectedEdgePropertyType> iterator; };
	MemberElement<gml::CPointPropertyType, _altova_mi_gml_altova_CNodeType_altova_pointProperty> pointProperty;
	struct pointProperty { typedef Iterator<gml::CPointPropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CNodeType
