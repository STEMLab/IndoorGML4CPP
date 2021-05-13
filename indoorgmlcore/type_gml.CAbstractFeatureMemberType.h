#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractFeatureMemberType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractFeatureMemberType



namespace indoorgmlcore
{

namespace gml
{	

class CAbstractFeatureMemberType : public ElementType
{
public:
	indoorgmlcore_EXPORT CAbstractFeatureMemberType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CAbstractFeatureMemberType(CAbstractFeatureMemberType const& init);
	void operator=(CAbstractFeatureMemberType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CAbstractFeatureMemberType); }

	MemberAttribute<bool,_altova_mi_gml_altova_CAbstractFeatureMemberType_altova_owns, 0, 0> owns;	// owns Cboolean
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CAbstractFeatureMemberType
