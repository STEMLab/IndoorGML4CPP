#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CUnitOfMeasureType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CUnitOfMeasureType



namespace indoorgmlcore
{

namespace gml
{	

class CUnitOfMeasureType : public ElementType
{
public:
	indoorgmlcore_EXPORT CUnitOfMeasureType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CUnitOfMeasureType(CUnitOfMeasureType const& init);
	void operator=(CUnitOfMeasureType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CUnitOfMeasureType); }

	MemberAttribute<string_type,_altova_mi_gml_altova_CUnitOfMeasureType_altova_uom, 0, 0> uom;	// uom CUomIdentifier
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CUnitOfMeasureType
