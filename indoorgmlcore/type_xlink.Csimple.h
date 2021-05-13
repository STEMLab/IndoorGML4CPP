#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xlink_ALTOVA_Csimple
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xlink_ALTOVA_Csimple



namespace indoorgmlcore
{

namespace xlink
{	

class Csimple : public ElementType
{
public:
	indoorgmlcore_EXPORT Csimple(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT Csimple(Csimple const& init);
	void operator=(Csimple const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_xlink_altova_Csimple); }
	MemberAttribute<string_type,_altova_mi_xlink_altova_Csimple_altova_type, 1, 6> type;	// type CtypeType

	MemberAttribute<string_type,_altova_mi_xlink_altova_Csimple_altova_href, 0, 0> href;	// href ChrefType

	MemberAttribute<string_type,_altova_mi_xlink_altova_Csimple_altova_role, 0, 0> role;	// role CroleType

	MemberAttribute<string_type,_altova_mi_xlink_altova_Csimple_altova_arcrole, 0, 0> arcrole;	// arcrole CarcroleType

	MemberAttribute<string_type,_altova_mi_xlink_altova_Csimple_altova_title, 0, 0> title;	// title CtitleAttrType
	MemberAttribute<string_type,_altova_mi_xlink_altova_Csimple_altova_show, 1, 5> show;	// show CshowType
	MemberAttribute<string_type,_altova_mi_xlink_altova_Csimple_altova_actuate, 1, 4> actuate;	// actuate CactuateType
	indoorgmlcore_EXPORT void operator=(const string_type& value);
	indoorgmlcore_EXPORT operator string_type();
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace xlink

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xlink_ALTOVA_Csimple
