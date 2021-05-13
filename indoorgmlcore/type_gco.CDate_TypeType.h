#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CDate_TypeType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CDate_TypeType



namespace indoorgmlcore
{

namespace gco
{	

class CDate_TypeType : public ElementType
{
public:
	indoorgmlcore_EXPORT CDate_TypeType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CDate_TypeType(CDate_TypeType const& init);
	void operator=(CDate_TypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gco_altova_CDate_TypeType); }
	indoorgmlcore_EXPORT void operator=(const string_type& value);
	indoorgmlcore_EXPORT operator string_type();
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gco

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gco_ALTOVA_CDate_TypeType
