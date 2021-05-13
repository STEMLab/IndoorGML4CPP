#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xlink_ALTOVA_ClocatorType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xlink_ALTOVA_ClocatorType



namespace indoorgmlcore
{

namespace xlink
{	

class ClocatorType : public ElementType
{
public:
	indoorgmlcore_EXPORT ClocatorType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT ClocatorType(ClocatorType const& init);
	void operator=(ClocatorType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_xlink_altova_ClocatorType); }
	MemberAttribute<string_type,_altova_mi_xlink_altova_ClocatorType_altova_type, 1, 6> type;	// type CtypeType

	MemberAttribute<string_type,_altova_mi_xlink_altova_ClocatorType_altova_href, 0, 0> href;	// href ChrefType

	MemberAttribute<string_type,_altova_mi_xlink_altova_ClocatorType_altova_role, 0, 0> role;	// role CroleType

	MemberAttribute<string_type,_altova_mi_xlink_altova_ClocatorType_altova_title, 0, 0> title;	// title CtitleAttrType

	MemberAttribute<string_type,_altova_mi_xlink_altova_ClocatorType_altova_label, 0, 0> label;	// label ClabelType
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace xlink

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xlink_ALTOVA_ClocatorType
