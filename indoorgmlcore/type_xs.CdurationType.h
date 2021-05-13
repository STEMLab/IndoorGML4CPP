#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_CdurationType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_CdurationType



namespace indoorgmlcore
{

namespace xs
{	

class CdurationType : public ElementType
{
public:
	indoorgmlcore_EXPORT CdurationType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CdurationType(CdurationType const& init);
	void operator=(CdurationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_xs_altova_CdurationType); }
	indoorgmlcore_EXPORT void operator=(const altova::Duration& value);
	indoorgmlcore_EXPORT operator altova::Duration();
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace xs

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_CdurationType
