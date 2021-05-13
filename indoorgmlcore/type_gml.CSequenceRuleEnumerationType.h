#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CSequenceRuleEnumerationType
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CSequenceRuleEnumerationType



namespace indoorgmlcore
{

namespace gml
{	

class CSequenceRuleEnumerationType : public ElementType
{
public:
	indoorgmlcore_EXPORT CSequenceRuleEnumerationType(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CSequenceRuleEnumerationType(CSequenceRuleEnumerationType const& init);
	void operator=(CSequenceRuleEnumerationType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_gml_altova_CSequenceRuleEnumerationType); }

	enum EnumValues {
		Invalid = -1,
		k_Linear = 0, // Linear
		k_Boustrophedonic = 1, // Boustrophedonic
		k_Cantor_diagonal = 2, // Cantor-diagonal
		k_Spiral = 3, // Spiral
		k_Morton = 4, // Morton
		k_Hilbert = 5, // Hilbert
		EnumValueCount
	};

	
	indoorgmlcore_EXPORT int GetEnumerationValue();
	indoorgmlcore_EXPORT void SetEnumerationValue( const int index);
	indoorgmlcore_EXPORT void operator=(const string_type& value);
	indoorgmlcore_EXPORT operator string_type();
	indoorgmlcore_EXPORT void SetXsiType();
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CSequenceRuleEnumerationType
