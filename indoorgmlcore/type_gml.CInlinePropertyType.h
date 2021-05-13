#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CInlinePropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CInlinePropertyType



namespace indoorgmlcore
{

namespace gml
{	

class CInlinePropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CInlinePropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CInlinePropertyType(CInlinePropertyType const& init);
	void operator=(CInlinePropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CInlinePropertyType); }

	MemberAttribute<bool,_altova_mi_gml_altova_CInlinePropertyType_altova_owns, 0, 0> owns;	// owns Cboolean
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CInlinePropertyType
