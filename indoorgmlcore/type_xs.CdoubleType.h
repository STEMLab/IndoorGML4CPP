#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_CdoubleType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_CdoubleType



namespace indoorgmlcore
{

namespace xs
{	

class CdoubleType : public ElementType
{
public:
	indoorgmlcore_EXPORT CdoubleType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CdoubleType(CdoubleType const& init);
	void operator=(CdoubleType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_xs_altova_CdoubleType); }
	indoorgmlcore_EXPORT void operator=(const double& value);
	indoorgmlcore_EXPORT operator double();
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace xs

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_xs_ALTOVA_CdoubleType
