#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CSolidArrayPropertyType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CSolidArrayPropertyType



namespace indoorgmlcore
{

namespace gml
{	

class CSolidArrayPropertyType : public ElementType
{
public:
	indoorgmlcore_EXPORT CSolidArrayPropertyType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CSolidArrayPropertyType(CSolidArrayPropertyType const& init);
	void operator=(CSolidArrayPropertyType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CSolidArrayPropertyType); }

	MemberAttribute<bool,_altova_mi_gml_altova_CSolidArrayPropertyType_altova_owns, 0, 0> owns;	// owns Cboolean
	MemberElement<gml::CCompositeSolidType, _altova_mi_gml_altova_CSolidArrayPropertyType_altova_CompositeSolid> CompositeSolid;
	struct CompositeSolid { typedef Iterator<gml::CCompositeSolidType> iterator; };
	MemberElement<gml::CSolidType, _altova_mi_gml_altova_CSolidArrayPropertyType_altova_Solid> Solid;
	struct Solid { typedef Iterator<gml::CSolidType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CSolidArrayPropertyType
