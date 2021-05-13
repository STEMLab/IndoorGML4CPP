#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CKnotType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CKnotType



namespace indoorgmlcore
{

namespace gml
{	

class CKnotType : public ElementType
{
public:
	indoorgmlcore_EXPORT CKnotType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CKnotType(CKnotType const& init);
	void operator=(CKnotType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CKnotType); }
	MemberElement<xs::CdoubleType, _altova_mi_gml_altova_CKnotType_altova_value2> value2;
	struct value2 { typedef Iterator<xs::CdoubleType> iterator; };
	MemberElement<xs::CnonNegativeIntegerType, _altova_mi_gml_altova_CKnotType_altova_multiplicity> multiplicity;
	struct multiplicity { typedef Iterator<xs::CnonNegativeIntegerType> iterator; };
	MemberElement<xs::CdoubleType, _altova_mi_gml_altova_CKnotType_altova_weight> weight;
	struct weight { typedef Iterator<xs::CdoubleType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CKnotType
