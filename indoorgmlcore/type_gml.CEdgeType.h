#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CEdgeType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CEdgeType

#include "type_gml.CAbstractTopoPrimitiveType.h"


namespace indoorgmlcore
{

namespace gml
{	

class CEdgeType : public ::indoorgmlcore::gml::CAbstractTopoPrimitiveType
{
public:
	indoorgmlcore_EXPORT CEdgeType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CEdgeType(CEdgeType const& init);
	void operator=(CEdgeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CEdgeType); }
	MemberAttribute<string_type,_altova_mi_gml_altova_CEdgeType_altova_aggregationType, 1, 6> aggregationType;	// aggregationType CAggregationType
	MemberElement<gml::CTopoSolidPropertyType, _altova_mi_gml_altova_CEdgeType_altova_container> container;
	struct container { typedef Iterator<gml::CTopoSolidPropertyType> iterator; };
	MemberElement<gml::CDirectedNodePropertyType, _altova_mi_gml_altova_CEdgeType_altova_directedNode> directedNode;
	struct directedNode { typedef Iterator<gml::CDirectedNodePropertyType> iterator; };
	MemberElement<gml::CDirectedFacePropertyType, _altova_mi_gml_altova_CEdgeType_altova_directedFace> directedFace;
	struct directedFace { typedef Iterator<gml::CDirectedFacePropertyType> iterator; };
	MemberElement<gml::CCurvePropertyType, _altova_mi_gml_altova_CEdgeType_altova_curveProperty> curveProperty;
	struct curveProperty { typedef Iterator<gml::CCurvePropertyType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CEdgeType
