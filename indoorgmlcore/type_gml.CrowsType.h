#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CrowsType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CrowsType



namespace indoorgmlcore
{

namespace gml
{	

class CrowsType : public ElementType
{
public:
	indoorgmlcore_EXPORT CrowsType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CrowsType(CrowsType const& init);
	void operator=(CrowsType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CrowsType); }
	MemberElement<gml::CRowType, _altova_mi_gml_altova_CrowsType_altova_Row> Row;
	struct Row { typedef Iterator<gml::CRowType> iterator; };
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CrowsType
