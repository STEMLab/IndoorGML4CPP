#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xlink_ALTOVA_CresourceType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xlink_ALTOVA_CresourceType



namespace indoorgmlcore
{

namespace xlink
{	

class CresourceType : public ElementType
{
public:
	indoorgmlcore_EXPORT CresourceType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CresourceType(CresourceType const& init);
	void operator=(CresourceType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_xlink_altova_CresourceType); }
	MemberAttribute<string_type,_altova_mi_xlink_altova_CresourceType_altova_type, 1, 6> type;	// type CtypeType

	MemberAttribute<string_type,_altova_mi_xlink_altova_CresourceType_altova_role, 0, 0> role;	// role CroleType

	MemberAttribute<string_type,_altova_mi_xlink_altova_CresourceType_altova_title, 0, 0> title;	// title CtitleAttrType

	MemberAttribute<string_type,_altova_mi_xlink_altova_CresourceType_altova_label, 0, 0> label;	// label ClabelType
	indoorgmlcore_EXPORT void operator=(const string_type& value);
	indoorgmlcore_EXPORT operator string_type();
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace xlink

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xlink_ALTOVA_CresourceType
