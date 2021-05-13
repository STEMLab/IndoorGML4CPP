#ifndef _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CSequenceRuleEnumeration
#define _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CSequenceRuleEnumeration



namespace indoorgmlcore
{

namespace gml
{	

class CSequenceRuleEnumeration : public TypeBase
{
public:
	indoorgmlcore_EXPORT CSequenceRuleEnumeration(MSXML2::IXMLDOMNodePtr const& init);
	indoorgmlcore_EXPORT CSequenceRuleEnumeration(CSequenceRuleEnumeration const& init);
	void operator=(CSequenceRuleEnumeration const& other) { m_node = other.m_node; }
	static altova::meta::SimpleType StaticInfo() { return altova::meta::SimpleType(types + _altova_ti_gml_altova_CSequenceRuleEnumeration); }

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
	void operator= (const string_type& value) 
	{
		altova::XmlFormatter* Formatter = static_cast<altova::XmlFormatter*>(altova::AnySimpleTypeFormatter);
		MsxmlTreeOperations::SetValue(GetNode(), Formatter->Format(value));
	}	
		
	operator string_type()
	{
		return CastAs<string_type >::Do(GetNode(), 0);
	}
};



} // namespace gml

}	// namespace indoorgmlcore

#endif // _ALTOVA_INCLUDED_indoorgmlcore_ALTOVA_gml_ALTOVA_CSequenceRuleEnumeration
