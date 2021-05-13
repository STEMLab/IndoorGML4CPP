#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CKnotPropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CKnotPropertyType



namespace indoorgmlcore
{

namespace gml
{	

class CKnotPropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CKnotPropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CKnotPropertyType(CKnotPropertyType const& init);
	void operator=(CKnotPropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CKnotPropertyType); }
	MemberElement<gml::CKnotType, _altova_mi_gml_altova_CKnotPropertyType_altova_Knot> Knot;
	struct Knot { typedef Iterator<gml::CKnotType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CKnotPropertyType
