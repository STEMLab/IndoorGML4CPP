#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_CdateType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_CdateType



namespace indoorgmlcore
{

namespace xs
{	

class CdateType : public ElementType
{
public:
	indoorgmlcore_EXPORT CdateType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CdateType(CdateType const& init);
	void operator=(CdateType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_xs_altova_CdateType); }
	indoorgmlcore_EXPORT void operator=(const altova::DateTime& value);
	indoorgmlcore_EXPORT operator altova::DateTime();
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace xs

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_CdateType
