#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_CanyURIType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_CanyURIType



namespace indoorgmlcore
{

namespace xs
{	

class CanyURIType : public ElementType
{
public:
	indoorgmlcore_EXPORT CanyURIType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CanyURIType(CanyURIType const& init);
	void operator=(CanyURIType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_xs_altova_CanyURIType); }
	indoorgmlcore_EXPORT void operator=(const string_type& value);
	indoorgmlcore_EXPORT operator string_type();
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace xs

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_CanyURIType
