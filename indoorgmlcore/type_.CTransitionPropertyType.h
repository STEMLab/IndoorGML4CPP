#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CTransitionPropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CTransitionPropertyType



namespace indoorgmlcore
{

class CTransitionPropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CTransitionPropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CTransitionPropertyType(CTransitionPropertyType const& init);
	void operator=(CTransitionPropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CTransitionPropertyType); }
	MemberAttribute<string_type,_altova_mi_altova_CTransitionPropertyType_altova_type, 1, 6> type;	// type CtypeType

	MemberAttribute<string_type,_altova_mi_altova_CTransitionPropertyType_altova_href, 0, 0> href;	// href ChrefType

	MemberAttribute<string_type,_altova_mi_altova_CTransitionPropertyType_altova_role, 0, 0> role;	// role CroleType

	MemberAttribute<string_type,_altova_mi_altova_CTransitionPropertyType_altova_arcrole, 0, 0> arcrole;	// arcrole CarcroleType

	MemberAttribute<string_type,_altova_mi_altova_CTransitionPropertyType_altova_title, 0, 0> title;	// title CtitleAttrType
	MemberAttribute<string_type,_altova_mi_altova_CTransitionPropertyType_altova_show, 1, 5> show;	// show CshowType
	MemberAttribute<string_type,_altova_mi_altova_CTransitionPropertyType_altova_actuate, 1, 4> actuate;	// actuate CactuateType

	MemberAttribute<string_type,_altova_mi_altova_CTransitionPropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType

	MemberAttribute<string_type,_altova_mi_altova_CTransitionPropertyType_altova_remoteSchema, 0, 0> remoteSchema;	// remoteSchema CanyURI
	MemberElement<CTransitionType, _altova_mi_altova_CTransitionPropertyType_altova_Transition> Transition;
	struct Transition { typedef Iterator<CTransitionType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};


}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CTransitionPropertyType
