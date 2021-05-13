#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CPrimalSpaceFeaturesPropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CPrimalSpaceFeaturesPropertyType



namespace indoorgmlcore
{

class CPrimalSpaceFeaturesPropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CPrimalSpaceFeaturesPropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CPrimalSpaceFeaturesPropertyType(CPrimalSpaceFeaturesPropertyType const& init);
	void operator=(CPrimalSpaceFeaturesPropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CPrimalSpaceFeaturesPropertyType); }
	MemberAttribute<string_type,_altova_mi_altova_CPrimalSpaceFeaturesPropertyType_altova_type, 1, 6> type;	// type CtypeType

	MemberAttribute<string_type,_altova_mi_altova_CPrimalSpaceFeaturesPropertyType_altova_href, 0, 0> href;	// href ChrefType

	MemberAttribute<string_type,_altova_mi_altova_CPrimalSpaceFeaturesPropertyType_altova_role, 0, 0> role;	// role CroleType

	MemberAttribute<string_type,_altova_mi_altova_CPrimalSpaceFeaturesPropertyType_altova_arcrole, 0, 0> arcrole;	// arcrole CarcroleType

	MemberAttribute<string_type,_altova_mi_altova_CPrimalSpaceFeaturesPropertyType_altova_title, 0, 0> title;	// title CtitleAttrType
	MemberAttribute<string_type,_altova_mi_altova_CPrimalSpaceFeaturesPropertyType_altova_show, 1, 5> show;	// show CshowType
	MemberAttribute<string_type,_altova_mi_altova_CPrimalSpaceFeaturesPropertyType_altova_actuate, 1, 4> actuate;	// actuate CactuateType

	MemberAttribute<string_type,_altova_mi_altova_CPrimalSpaceFeaturesPropertyType_altova_nilReason, 0, 0> nilReason;	// nilReason CNilReasonType

	MemberAttribute<string_type,_altova_mi_altova_CPrimalSpaceFeaturesPropertyType_altova_remoteSchema, 0, 0> remoteSchema;	// remoteSchema CanyURI
	MemberElement<CPrimalSpaceFeaturesType, _altova_mi_altova_CPrimalSpaceFeaturesPropertyType_altova_PrimalSpaceFeatures> PrimalSpaceFeatures;
	struct PrimalSpaceFeatures { typedef Iterator<CPrimalSpaceFeaturesType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};


}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA__ALTOVA_CPrimalSpaceFeaturesPropertyType
