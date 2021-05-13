#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xlink_ALTOVA_CtitleEltType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xlink_ALTOVA_CtitleEltType



namespace indoorgmlcore
{

namespace xlink
{	

class CtitleEltType : public ElementType
{
public:
	indoorgmlcore_EXPORT CtitleEltType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CtitleEltType(CtitleEltType const& init);
	void operator=(CtitleEltType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_xlink_altova_CtitleEltType); }
	MemberAttribute<string_type,_altova_mi_xlink_altova_CtitleEltType_altova_type, 1, 6> type;	// type CtypeType

	MemberAttribute<string_type,_altova_mi_xlink_altova_CtitleEltType_altova_lang, 0, 0> lang;	// lang ClangType
	indoorgmlcore_EXPORT void operator=(const string_type& value);
	indoorgmlcore_EXPORT operator string_type();
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace xlink

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xlink_ALTOVA_CtitleEltType
