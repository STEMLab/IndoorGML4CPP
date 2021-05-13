#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_CdateTimeType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_CdateTimeType



namespace indoorgmlcore
{

namespace xs
{	

class CdateTimeType : public ElementType
{
public:
	indoorgmlcore_EXPORT CdateTimeType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CdateTimeType(CdateTimeType const& init);
	void operator=(CdateTimeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_xs_altova_CdateTimeType); }
	indoorgmlcore_EXPORT void operator=(const altova::DateTime& value);
	indoorgmlcore_EXPORT operator altova::DateTime();
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace xs

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_CdateTimeType
