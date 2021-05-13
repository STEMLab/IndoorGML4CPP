#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xlink_ALTOVA_Cextended
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xlink_ALTOVA_Cextended



namespace indoorgmlcore
{

namespace xlink
{	

class Cextended : public ElementType
{
public:
	indoorgmlcore_EXPORT Cextended(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT Cextended(Cextended const& init);
	void operator=(Cextended const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_xlink_altova_Cextended); }
	MemberAttribute<string_type,_altova_mi_xlink_altova_Cextended_altova_type, 1, 6> type;	// type CtypeType

	MemberAttribute<string_type,_altova_mi_xlink_altova_Cextended_altova_role, 0, 0> role;	// role CroleType

	MemberAttribute<string_type,_altova_mi_xlink_altova_Cextended_altova_title, 0, 0> title;	// title CtitleAttrType
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace xlink

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xlink_ALTOVA_Cextended
