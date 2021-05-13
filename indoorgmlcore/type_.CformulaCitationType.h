#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CformulaCitationType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CformulaCitationType



namespace indoorgmlcore
{

class CformulaCitationType : public ElementType
{
public:
	indoorgmlcore_EXPORT CformulaCitationType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CformulaCitationType(CformulaCitationType const& init);
	void operator=(CformulaCitationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CformulaCitationType); }
	MemberAttribute<string_type,_altova_mi_altova_CformulaCitationType_altova_type, 1, 6> type;	// type CtypeType

	MemberAttribute<string_type,_altova_mi_altova_CformulaCitationType_altova_href, 0, 0> href;	// href ChrefType

	MemberAttribute<string_type,_altova_mi_altova_CformulaCitationType_altova_role, 0, 0> role;	// role CroleType

	MemberAttribute<string_type,_altova_mi_altova_CformulaCitationType_altova_arcrole, 0, 0> arcrole;	// arcrole CarcroleType

	MemberAttribute<string_type,_altova_mi_altova_CformulaCitationType_altova_title, 0, 0> title;	// title CtitleAttrType
	MemberAttribute<string_type,_altova_mi_altova_CformulaCitationType_altova_show, 1, 5> show;	// show CshowType
	MemberAttribute<string_type,_altova_mi_altova_CformulaCitationType_altova_actuate, 1, 4> actuate;	// actuate CactuateType

	MemberAttribute<string_type,_altova_mi_altova_CformulaCitationType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType

	MemberAttribute<string_type,_altova_mi_altova_CformulaCitationType_altova_remoteSchema, 0, 0> remoteSchema;	// remoteSchema CanyURI
	MemberElement<gmd::CCI_Citation_Type, _altova_mi_altova_CformulaCitationType_altova_CI_Citation> CI_Citation;
	struct CI_Citation { typedef Iterator<gmd::CCI_Citation_Type> iterator; };
};


}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CformulaCitationType
