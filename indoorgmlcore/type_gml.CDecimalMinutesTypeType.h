#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDecimalMinutesTypeType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDecimalMinutesTypeType



namespace indoorgmlcore
{

namespace gml
{	

class CDecimalMinutesTypeType : public ElementType
{
public:
	indoorgmlcore_EXPORT CDecimalMinutesTypeType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CDecimalMinutesTypeType(CDecimalMinutesTypeType const& init);
	void operator=(CDecimalMinutesTypeType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CDecimalMinutesTypeType); }
	indoorgmlcore_EXPORT void operator=(const double& value);
	indoorgmlcore_EXPORT operator double();
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CDecimalMinutesTypeType
