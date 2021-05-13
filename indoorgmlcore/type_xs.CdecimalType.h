#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_CdecimalType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_CdecimalType



namespace indoorgmlcore
{

namespace xs
{	

class CdecimalType : public ElementType
{
public:
	indoorgmlcore_EXPORT CdecimalType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CdecimalType(CdecimalType const& init);
	void operator=(CdecimalType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_xs_altova_CdecimalType); }
	indoorgmlcore_EXPORT void operator=(const double& value);
	indoorgmlcore_EXPORT operator double();
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace xs

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_CdecimalType
