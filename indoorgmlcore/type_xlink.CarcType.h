#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xlink_ALTOVA_CarcType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xlink_ALTOVA_CarcType



namespace indoorgmlcore
{

namespace xlink
{	

class CarcType : public ElementType
{
public:
	indoorgmlcore_EXPORT CarcType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CarcType(CarcType const& init);
	void operator=(CarcType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_xlink_altova_CarcType); }
	MemberAttribute<string_type,_altova_mi_xlink_altova_CarcType_altova_type, 1, 6> type;	// type CtypeType

	MemberAttribute<string_type,_altova_mi_xlink_altova_CarcType_altova_arcrole, 0, 0> arcrole;	// arcrole CarcroleType

	MemberAttribute<string_type,_altova_mi_xlink_altova_CarcType_altova_title, 0, 0> title;	// title CtitleAttrType
	MemberAttribute<string_type,_altova_mi_xlink_altova_CarcType_altova_show, 1, 5> show;	// show CshowType
	MemberAttribute<string_type,_altova_mi_xlink_altova_CarcType_altova_actuate, 1, 4> actuate;	// actuate CactuateType

	MemberAttribute<string_type,_altova_mi_xlink_altova_CarcType_altova_from, 0, 0> from;	// from CfromType

	MemberAttribute<string_type,_altova_mi_xlink_altova_CarcType_altova_to, 0, 0> to;	// to CtoType
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace xlink

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xlink_ALTOVA_CarcType
