#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_COperationParameterPropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_COperationParameterPropertyType



namespace indoorgmlcore
{

namespace gml
{	

class COperationParameterPropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT COperationParameterPropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT COperationParameterPropertyType(COperationParameterPropertyType const& init);
	void operator=(COperationParameterPropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_COperationParameterPropertyType); }
	MemberAttribute<string_type,_altova_mi_gml_altova_COperationParameterPropertyType_altova_type, 1, 6> type;	// type CtypeType

	MemberAttribute<string_type,_altova_mi_gml_altova_COperationParameterPropertyType_altova_href, 0, 0> href;	// href ChrefType

	MemberAttribute<string_type,_altova_mi_gml_altova_COperationParameterPropertyType_altova_role, 0, 0> role;	// role CroleType

	MemberAttribute<string_type,_altova_mi_gml_altova_COperationParameterPropertyType_altova_arcrole, 0, 0> arcrole;	// arcrole CarcroleType

	MemberAttribute<string_type,_altova_mi_gml_altova_COperationParameterPropertyType_altova_title, 0, 0> title;	// title CtitleAttrType
	MemberAttribute<string_type,_altova_mi_gml_altova_COperationParameterPropertyType_altova_show, 1, 5> show;	// show CshowType
	MemberAttribute<string_type,_altova_mi_gml_altova_COperationParameterPropertyType_altova_actuate, 1, 4> actuate;	// actuate CactuateType

	MemberAttribute<string_type,_altova_mi_gml_altova_COperationParameterPropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType

	MemberAttribute<string_type,_altova_mi_gml_altova_COperationParameterPropertyType_altova_remoteSchema, 0, 0> remoteSchema;	// remoteSchema CanyURI
	MemberElement<gml::COperationParameterType, _altova_mi_gml_altova_COperationParameterPropertyType_altova_OperationParameter> OperationParameter;
	struct OperationParameter { typedef Iterator<gml::COperationParameterType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_COperationParameterPropertyType
