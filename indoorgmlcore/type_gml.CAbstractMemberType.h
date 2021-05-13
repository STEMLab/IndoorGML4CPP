#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractMemberType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractMemberType



namespace indoorgmlcore
{

namespace gml
{	

class CAbstractMemberType : public ElementType
{
public:
	indoorgmlcore_EXPORT CAbstractMemberType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CAbstractMemberType(CAbstractMemberType const& init);
	void operator=(CAbstractMemberType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CAbstractMemberType); }

	MemberAttribute<bool,_altova_mi_gml_altova_CAbstractMemberType_altova_owns, 0, 0> owns;	// owns Cboolean
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractMemberType
