#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_COperationParameterGroupPropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_COperationParameterGroupPropertyType



namespace indoorgmlcore
{

namespace gml
{	

class COperationParameterGroupPropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT COperationParameterGroupPropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT COperationParameterGroupPropertyType(COperationParameterGroupPropertyType const& init);
	void operator=(COperationParameterGroupPropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_COperationParameterGroupPropertyType); }
	MemberAttribute<string_type,_altova_mi_gml_altova_COperationParameterGroupPropertyType_altova_type, 1, 6> type;	// type CtypeType

	MemberAttribute<string_type,_altova_mi_gml_altova_COperationParameterGroupPropertyType_altova_href, 0, 0> href;	// href ChrefType

	MemberAttribute<string_type,_altova_mi_gml_altova_COperationParameterGroupPropertyType_altova_role, 0, 0> role;	// role CroleType

	MemberAttribute<string_type,_altova_mi_gml_altova_COperationParameterGroupPropertyType_altova_arcrole, 0, 0> arcrole;	// arcrole CarcroleType

	MemberAttribute<string_type,_altova_mi_gml_altova_COperationParameterGroupPropertyType_altova_title, 0, 0> title;	// title CtitleAttrType
	MemberAttribute<string_type,_altova_mi_gml_altova_COperationParameterGroupPropertyType_altova_show, 1, 5> show;	// show CshowType
	MemberAttribute<string_type,_altova_mi_gml_altova_COperationParameterGroupPropertyType_altova_actuate, 1, 4> actuate;	// actuate CactuateType

	MemberAttribute<string_type,_altova_mi_gml_altova_COperationParameterGroupPropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType

	MemberAttribute<string_type,_altova_mi_gml_altova_COperationParameterGroupPropertyType_altova_remoteSchema, 0, 0> remoteSchema;	// remoteSchema CanyURI
	MemberElement<gml::COperationParameterGroupType, _altova_mi_gml_altova_COperationParameterGroupPropertyType_altova_OperationParameterGroup> OperationParameterGroup;
	struct OperationParameterGroup { typedef Iterator<gml::COperationParameterGroupType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_COperationParameterGroupPropertyType
