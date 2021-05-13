#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CFormulaType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CFormulaType



namespace indoorgmlcore
{

namespace gml
{	

class CFormulaType : public ElementType
{
public:
	indoorgmlcore_EXPORT CFormulaType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CFormulaType(CFormulaType const& init);
	void operator=(CFormulaType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CFormulaType); }
	MemberElement<xs::CdoubleType, _altova_mi_gml_altova_CFormulaType_altova_a> a;
	struct a { typedef Iterator<xs::CdoubleType> iterator; };
	MemberElement<xs::CdoubleType, _altova_mi_gml_altova_CFormulaType_altova_b> b;
	struct b { typedef Iterator<xs::CdoubleType> iterator; };
	MemberElement<xs::CdoubleType, _altova_mi_gml_altova_CFormulaType_altova_c> c;
	struct c { typedef Iterator<xs::CdoubleType> iterator; };
	MemberElement<xs::CdoubleType, _altova_mi_gml_altova_CFormulaType_altova_d> d;
	struct d { typedef Iterator<xs::CdoubleType> iterator; };
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CFormulaType
