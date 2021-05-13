#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_CtimeType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_CtimeType



namespace indoorgmlcore
{

namespace xs
{	

class CtimeType : public ElementType
{
public:
	indoorgmlcore_EXPORT CtimeType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CtimeType(CtimeType const& init);
	void operator=(CtimeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_xs_altova_CtimeType); }
	indoorgmlcore_EXPORT void operator=(const altova::DateTime& value);
	indoorgmlcore_EXPORT operator altova::DateTime();
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace xs

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_CtimeType
