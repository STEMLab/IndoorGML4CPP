#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTopoPrimitiveArrayAssociationType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTopoPrimitiveArrayAssociationType



namespace indoorgmlcore
{

namespace gml
{	

class CTopoPrimitiveArrayAssociationType : public ElementType
{
public:
	indoorgmlcore_EXPORT CTopoPrimitiveArrayAssociationType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CTopoPrimitiveArrayAssociationType(CTopoPrimitiveArrayAssociationType const& init);
	void operator=(CTopoPrimitiveArrayAssociationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CTopoPrimitiveArrayAssociationType); }

	MemberAttribute<bool,_altova_mi_gml_altova_CTopoPrimitiveArrayAssociationType_altova_owns, 0, 0> owns;	// owns Cboolean
	MemberElement<gml::CEdgeType, _altova_mi_gml_altova_CTopoPrimitiveArrayAssociationType_altova_Edge> Edge;
	struct Edge { typedef Iterator<gml::CEdgeType> iterator; };
	MemberElement<gml::CFaceType, _altova_mi_gml_altova_CTopoPrimitiveArrayAssociationType_altova_Face> Face;
	struct Face { typedef Iterator<gml::CFaceType> iterator; };
	MemberElement<gml::CNodeType, _altova_mi_gml_altova_CTopoPrimitiveArrayAssociationType_altova_Node> Node;
	struct Node { typedef Iterator<gml::CNodeType> iterator; };
	MemberElement<gml::CTopoSolidType, _altova_mi_gml_altova_CTopoPrimitiveArrayAssociationType_altova_TopoSolid> TopoSolid;
	struct TopoSolid { typedef Iterator<gml::CTopoSolidType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CTopoPrimitiveArrayAssociationType
