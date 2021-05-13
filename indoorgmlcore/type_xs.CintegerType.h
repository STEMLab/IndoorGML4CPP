#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_CintegerType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_CintegerType



namespace indoorgmlcore
{

namespace xs
{	

class CintegerType : public ElementType
{
public:
	indoorgmlcore_EXPORT CintegerType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CintegerType(CintegerType const& init);
	void operator=(CintegerType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_xs_altova_CintegerType); }
	indoorgmlcore_EXPORT void operator=(const __int64& value);
	indoorgmlcore_EXPORT operator __int64();
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace xs

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_CintegerType
