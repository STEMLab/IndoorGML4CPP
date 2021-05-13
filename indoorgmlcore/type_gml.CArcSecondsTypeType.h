#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CArcSecondsTypeType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CArcSecondsTypeType



namespace indoorgmlcore
{

namespace gml
{	

class CArcSecondsTypeType : public ElementType
{
public:
	indoorgmlcore_EXPORT CArcSecondsTypeType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CArcSecondsTypeType(CArcSecondsTypeType const& init);
	void operator=(CArcSecondsTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CArcSecondsTypeType); }
	indoorgmlcore_EXPORT void operator=(const double& value);
	indoorgmlcore_EXPORT operator double();
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CArcSecondsTypeType
