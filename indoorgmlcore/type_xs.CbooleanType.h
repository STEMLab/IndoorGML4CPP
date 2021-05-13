#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_CbooleanType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_CbooleanType



namespace indoorgmlcore
{

namespace xs
{	

class CbooleanType : public ElementType
{
public:
	indoorgmlcore_EXPORT CbooleanType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CbooleanType(CbooleanType const& init);
	void operator=(CbooleanType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_xs_altova_CbooleanType); }
	indoorgmlcore_EXPORT void operator=(const bool& value);
	indoorgmlcore_EXPORT operator bool();
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace xs

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_CbooleanType
