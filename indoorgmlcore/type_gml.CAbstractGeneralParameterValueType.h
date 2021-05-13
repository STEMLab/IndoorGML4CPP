#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractGeneralParameterValueType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractGeneralParameterValueType



namespace indoorgmlcore
{

namespace gml
{	

class CAbstractGeneralParameterValueType : public ElementType
{
public:
	indoorgmlcore_EXPORT CAbstractGeneralParameterValueType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CAbstractGeneralParameterValueType(CAbstractGeneralParameterValueType const& init);
	void operator=(CAbstractGeneralParameterValueType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CAbstractGeneralParameterValueType); }
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractGeneralParameterValueType
