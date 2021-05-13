#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_CanyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_CanyType



namespace indoorgmlcore
{

namespace xs
{	

class CanyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CanyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CanyType(CanyType const& init);
	void operator=(CanyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_xs_altova_CanyType); }
	indoorgmlcore_EXPORT void operator=(const string_type& value);
	indoorgmlcore_EXPORT operator string_type();
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace xs

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_CanyType
