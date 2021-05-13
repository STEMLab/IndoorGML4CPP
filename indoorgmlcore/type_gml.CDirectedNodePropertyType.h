#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDirectedNodePropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDirectedNodePropertyType



namespace indoorgmlcore
{

namespace gml
{	

class CDirectedNodePropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CDirectedNodePropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CDirectedNodePropertyType(CDirectedNodePropertyType const& init);
	void operator=(CDirectedNodePropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CDirectedNodePropertyType); }
	MemberAttribute<string_type,_altova_mi_gml_altova_CDirectedNodePropertyType_altova_orientation, 1, 2> orientation;	// orientation CSignType
	MemberAttribute<string_type,_altova_mi_gml_altova_CDirectedNodePropertyType_altova_type, 1, 6> type;	// type CtypeType

	MemberAttribute<string_type,_altova_mi_gml_altova_CDirectedNodePropertyType_altova_href, 0, 0> href;	// href ChrefType

	MemberAttribute<string_type,_altova_mi_gml_altova_CDirectedNodePropertyType_altova_role, 0, 0> role;	// role CroleType

	MemberAttribute<string_type,_altova_mi_gml_altova_CDirectedNodePropertyType_altova_arcrole, 0, 0> arcrole;	// arcrole CarcroleType

	MemberAttribute<string_type,_altova_mi_gml_altova_CDirectedNodePropertyType_altova_title, 0, 0> title;	// title CtitleAttrType
	MemberAttribute<string_type,_altova_mi_gml_altova_CDirectedNodePropertyType_altova_show, 1, 5> show;	// show CshowType
	MemberAttribute<string_type,_altova_mi_gml_altova_CDirectedNodePropertyType_altova_actuate, 1, 4> actuate;	// actuate CactuateType

	MemberAttribute<string_type,_altova_mi_gml_altova_CDirectedNodePropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType

	MemberAttribute<string_type,_altova_mi_gml_altova_CDirectedNodePropertyType_altova_remoteSchema, 0, 0> remoteSchema;	// remoteSchema CanyURI

	MemberAttribute<bool,_altova_mi_gml_altova_CDirectedNodePropertyType_altova_owns, 0, 0> owns;	// owns Cboolean
	MemberElement<gml::CNodeType, _altova_mi_gml_altova_CDirectedNodePropertyType_altova_Node> Node;
	struct Node { typedef Iterator<gml::CNodeType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDirectedNodePropertyType
