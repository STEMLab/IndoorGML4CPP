#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_CpositiveIntegerType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_CpositiveIntegerType



namespace indoorgmlcore
{

namespace xs
{	

class CpositiveIntegerType : public ElementType
{
public:
	indoorgmlcore_EXPORT CpositiveIntegerType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CpositiveIntegerType(CpositiveIntegerType const& init);
	void operator=(CpositiveIntegerType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_xs_altova_CpositiveIntegerType); }
	indoorgmlcore_EXPORT void operator=(const unsigned __int64& value);
	indoorgmlcore_EXPORT operator unsigned __int64();
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace xs

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_CpositiveIntegerType
