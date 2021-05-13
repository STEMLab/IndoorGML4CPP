#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractSurfacePatchType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractSurfacePatchType



namespace indoorgmlcore
{

namespace gml
{	

class CAbstractSurfacePatchType : public ElementType
{
public:
	indoorgmlcore_EXPORT CAbstractSurfacePatchType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CAbstractSurfacePatchType(CAbstractSurfacePatchType const& init);
	void operator=(CAbstractSurfacePatchType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CAbstractSurfacePatchType); }
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractSurfacePatchType
