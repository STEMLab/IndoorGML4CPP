#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CMultiLayeredGraphPropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CMultiLayeredGraphPropertyType



namespace indoorgmlcore
{

class CMultiLayeredGraphPropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CMultiLayeredGraphPropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CMultiLayeredGraphPropertyType(CMultiLayeredGraphPropertyType const& init);
	void operator=(CMultiLayeredGraphPropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CMultiLayeredGraphPropertyType); }
	MemberAttribute<string_type,_altova_mi_altova_CMultiLayeredGraphPropertyType_altova_type, 1, 6> type;	// type CtypeType

	MemberAttribute<string_type,_altova_mi_altova_CMultiLayeredGraphPropertyType_altova_href, 0, 0> href;	// href ChrefType

	MemberAttribute<string_type,_altova_mi_altova_CMultiLayeredGraphPropertyType_altova_role, 0, 0> role;	// role CroleType

	MemberAttribute<string_type,_altova_mi_altova_CMultiLayeredGraphPropertyType_altova_arcrole, 0, 0> arcrole;	// arcrole CarcroleType

	MemberAttribute<string_type,_altova_mi_altova_CMultiLayeredGraphPropertyType_altova_title, 0, 0> title;	// title CtitleAttrType
	MemberAttribute<string_type,_altova_mi_altova_CMultiLayeredGraphPropertyType_altova_show, 1, 5> show;	// show CshowType
	MemberAttribute<string_type,_altova_mi_altova_CMultiLayeredGraphPropertyType_altova_actuate, 1, 4> actuate;	// actuate CactuateType

	MemberAttribute<string_type,_altova_mi_altova_CMultiLayeredGraphPropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType

	MemberAttribute<string_type,_altova_mi_altova_CMultiLayeredGraphPropertyType_altova_remoteSchema, 0, 0> remoteSchema;	// remoteSchema CanyURI
	MemberElement<CMultiLayeredGraphType, _altova_mi_altova_CMultiLayeredGraphPropertyType_altova_MultiLayeredGraph> MultiLayeredGraph;
	struct MultiLayeredGraph { typedef Iterator<CMultiLayeredGraphType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};


}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CMultiLayeredGraphPropertyType
